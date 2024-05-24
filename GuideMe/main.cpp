#include <SFML/Graphics.hpp>
#include<iostream>
#include "include/map.h"
#include <unordered_map>
#include "Boarders.h"
#include "SFMLNode.h"
#include "HelperFunctions.h"
#include <thread>
#include <string>
#include<map>
#include "include/all_paths.h"
#include "WorkFlow.h"
#include <assert.h>
unordered_map<string, unordered_map<string, Route>> Map::adjList;
Text pathInfo, allPathsTextInfo;
void drawLine(SFMLNode node1, SFMLNode node2, RenderWindow &window)
{
    sf::VertexArray lines(sf::LinesStrip, 2);
    lines[0].position = sf::Vector2f(node1.shape.getPosition().x + 20, node1.shape.getPosition().y + 22);
    lines[1].position = sf::Vector2f(node2.shape.getPosition().x + 20, node2.shape.getPosition().y + 22);
    window.draw(lines);
}
void checkRepulsion(map<string, SFMLNode>& graph)
{
	for (auto& i : graph)
	{
		for (auto& j : graph)
		{
			if (i.first == j.first)
				continue;
			double x1 = i.second.shape.getPosition().x + 20, y1 = i.second.shape.getPosition().y + 22, x2 = j.second.shape.getPosition().x + 20, y2 = j.second.shape.getPosition().y + 22;
			if (helperFunctions::getDistance(x1 + 20, y1 + 22, x2 + 20, y2 + 22) <= 150)
			{
				//cout << "SHOULD BE REPULSING\n";
				double slope = (y2 - y1) / (x2 - x1);
				if (i.second.speedX || i.second.speedY || j.second.speedX || j.second.speedY)
					continue;
				double thetaRad = atan(slope);
				i.second.speedX = 0.4 * cos(thetaRad);
				i.second.speedY = 0.4 * sin(thetaRad);
				j.second.speedX = 0.4 * cos(thetaRad);
				j.second.speedY = 0.4 * sin(thetaRad);
				if (i.second.shape.getPosition().x < j.second.shape.getPosition().x)
					i.second.speedX = -abs(i.second.speedX), j.second.speedX = abs(j.second.speedX);
				else
					i.second.speedX = abs(i.second.speedX), j.second.speedX = -abs(i.second.speedX);

				if (i.second.shape.getPosition().y < j.second.shape.getPosition().y)
					i.second.speedY = abs(i.second.speedY), j.second.speedY = -abs(j.second.speedY);
				else
					i.second.speedY = -abs(i.second.speedY), j.second.speedY = abs(j.second.speedY);
			}
		}
	}
}
Texture bgTex;
Sprite bgSprite;
map<string, bool> helperFunctions::vis;
int SFMLNode::cnt = 0, pathCnt = 1;
using namespace std;
using namespace sf;
int Map::cnt = 0;
bool SFMLNode::active = false, isAllPaths = false;
string SFMLNode::selectedSource = "Cairo";
string SFMLNode::selectedDestination = "Dahab";
map<string, int>Map::hash;
string DATA_PATH = "../Project1/data/data.txt";
map <string, SFMLNode> graph;
queue <int> allPathsCosts;
int availableBudget = 0;
// used when dijkstra on
bool isDijkstra = false;
long long totalDijkstraCost;
vector<pair<string, string>> DijkstraPath;
int idxDijk;
Texture textures[38];


vector<string> cityNames = {
		"Alexandria", "Aswan", "Asyut", "Beheira", "BeniSuef", "Cairo", "Dahab", "Dakahlia", "Dakhla", "Damietta",
		"Kharga", "Luxor", "Marsa Alam", "Marsa Matrouh", "Minya", "Monufia", "Nuewiba", "Port Said", "Qalyubia",
		"Qena", "Ras Sedr", "Safaga", "Saint Catherine", "Sharm El Sheikh", "Sharqia", "Siwa", "Sohag", "Suez",
		"Taba", "El Alamein", "El Tor", "Faiyum", "Farafra", "Gharbia", "Giza", "Hurghada", "Ismailia", "Kafr El Sheikh"
};

void loadingBGs();
int main()
{
	while (true) {
		WorkFlow workFlow;
		workFlow.work();


		loadingBGs();
		bgTex.loadFromFile("Background.png");
		bgSprite.setTexture(bgTex);
		// set Font 
		Font font;
		font.loadFromFile("PlusJakartaSans-VariableFont_wght.ttf");
		pathInfo.setFont(font);
		pathInfo.setFillColor(Color(240, 241, 250));
		pathInfo.setPosition(0, 200);

		allPathsTextInfo.setFont(font);
		allPathsTextInfo.setFillColor(Color(240, 241, 150));
		allPathsTextInfo.setStyle(Text::Bold);
		allPathsTextInfo.setPosition(0, 250);


		sf::RenderWindow window(sf::VideoMode(1920, 1080), "Gui", Style::Fullscreen);
		sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Green);

		//read data from file
		DataManager dataManager = DataManager();
		dataManager.readData(DATA_PATH);
		dataManager.printAdjList();

		Boarders boarders(font);
		queue<string>traverseResult;
		Clock clock;
		map<string, bool>vis;
		Text t;
		queue <vector <string>> allPathsQ;
		Text curText;
		curText.setFont(font);
		curText.setFillColor(Color(240, 241, 250));
		for (auto& i : Map::adjList)
		{

			graph[i.first] = SFMLNode(i.first);
			t.setFont(graph[i.first].cityfont);
			graph[i.first].shape.setPosition(50 + graph[i.first].kk * 70, 300 + graph[i.first].kk * 20);
		}
		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
				if (event.type == Event::KeyPressed) {
					if (event.key.code == Keyboard::Escape) {
						window.close();
					}
					if (event.key.code == Keyboard::B) {
						traverseResult = helperFunctions::bfs(SFMLNode::selectedSource);
					}
					if (event.key.code == Keyboard::Z) {
						isDijkstra = true;
						idxDijk = 0;
						tie(totalDijkstraCost, DijkstraPath) = Map::Dijkstra(SFMLNode::selectedSource, SFMLNode::selectedDestination);

						queue<string> t;
						for (auto i : DijkstraPath)
							t.push(i.first);
						t.push(SFMLNode::selectedDestination);
						traverseResult = t;
					}
					if (event.key.code == Keyboard::D) {
						traverseResult = helperFunctions::dfs(SFMLNode::selectedSource, traverseResult);
						vis.clear();
					}
					if (event.key.code == Keyboard::Q)
					{
						isAllPaths = true;
						AllPaths allPaths(Map::adjList, SFMLNode::selectedSource, SFMLNode::selectedDestination);
						cout << SFMLNode::selectedSource << ' ' << SFMLNode::selectedDestination << " \n";
						pathInfo.setString("Enter your budget: ");
						window.draw(pathInfo);
						window.display();
						cin >> availableBudget;

						allPaths.computeAllPaths(availableBudget);
						cout << availableBudget << '\n';
						for (auto& i : allPaths.allPathsVector)
						{
							pathInfo.setString("Path # " + to_string(pathCnt));
							allPathsCosts.push(i.first);
							traverseResult.push(SFMLNode::selectedSource);
							for (auto& j : i.second)
								traverseResult.push(j[1]), allPathsQ.push(j);
						}
					}
				}
			}
			boarders.userGuide.setString("Current Source: " + SFMLNode::selectedSource + '\n' + "Current Desintation: " + SFMLNode::selectedDestination + "\nTo select Starting City left click the node\n To select Destination City right click the node\n For DFS press 'D'\n For BFS press 'B'\n For dijkstra press 'Z'\n For all Paths press 'Q'\n To exit Press Escape");
			for (auto& i : graph)
			{
				i.second.boarderCollision(boarders);
				i.second.shape.move(i.second.speedX, i.second.speedY);
				if (i.second.speedX >= 0) {
					i.second.speedX = max(0.0, i.second.speedX - 0.04);
				}
				else
					i.second.speedX = min(0.0, i.second.speedX + 0.04);

				if (i.second.speedY >= 0) {
					i.second.speedY = max(0.0, i.second.speedY - 0.04);
				}
				else
					i.second.speedY = min(0.0, i.second.speedY + 0.04);
				i.second.sinWave(helperFunctions::randomFloat(0.01, 0.038), helperFunctions::randomFloat(0.8, 0.97), clock.getElapsedTime().asSeconds());
			}

			window.clear();
			window.draw(bgSprite);
			for (auto& i : Map::adjList) {
				vis[i.first] = true;
				for (auto j : i.second) {
					if (!vis[j.first])
						drawLine(graph[i.first], graph[j.first], window);
				}
			}
			vis.clear();
			string x = "\0";
			if (!traverseResult.empty()) {
				x = traverseResult.front();
				graph[x].shape.setFillColor(Color(118, 129, 210));
				for (int i = 0; i < 38; i++)
				{
					if (cityNames[i] == x)
					{
						Sprite spr;
						spr.setTexture(textures[i]);
						window.draw(spr);
						break;
					}
				}
				if (isAllPaths && x != SFMLNode::selectedSource)
				{
					auto curv = allPathsQ.front();
					allPathsQ.pop();
					allPathsTextInfo.setString("From  " + curv[0] + "  to  " + curv[1] + " by " + curv[2] + "  with cost:  " + curv[3]);
				}
				else if (isAllPaths)
				{
					pathInfo.setString("Path # " + to_string(pathCnt) + "  with total cost =  " + to_string(allPathsCosts.front()));
					allPathsCosts.pop();
				}
				if (isDijkstra and traverseResult.size() > 1) {
					allPathsTextInfo.setString("from " + DijkstraPath[idxDijk].first + " use " + DijkstraPath[idxDijk].second);
					idxDijk++;
				}
				else if (isDijkstra) {
					allPathsTextInfo.setString("now we are in destination :" + SFMLNode::selectedDestination);
					idxDijk++;
				}
			}
			for (auto& i : graph)
			{
				i.second.checkCollision(graph, window, boarders), window.draw(i.second.shape);

				curText.setString((string)i.second.cityName.getString());
				curText.setFillColor(Color(240, 241, 250));
				curText.setScale({ 0.6,0.6 });
				curText.setPosition({ i.second.shape.getPosition().x, i.second.shape.getPosition().y + 10 });
				window.draw(curText);
			}
			SFMLNode node = graph.begin()->second;
			checkRepulsion(graph);
			window.draw(pathInfo);
			window.draw(allPathsTextInfo);
			window.draw(boarders.userGuide);
			window.display();
			if (!traverseResult.empty()) {
				this_thread::sleep_for(3.5s);
				graph[x].shape.setFillColor(Color(26, 31, 55));
				if (traverseResult.front() == SFMLNode::selectedDestination && isAllPaths)
					pathCnt++, pathInfo.setString("Path # " + to_string(pathCnt)), allPathsTextInfo.setString("");
				if (traverseResult.front() == SFMLNode::selectedSource && isDijkstra)
					pathInfo.setString("Total cost =  " + to_string(totalDijkstraCost)), allPathsTextInfo.setString("");
				if (traverseResult.size() == 1 && isAllPaths)
					pathInfo.setString("");
				traverseResult.pop();
				if (traverseResult.empty()) {
					isAllPaths = false;
					isDijkstra = false;
					allPathsTextInfo.setString("");
				}

			}
		}
		cout << "do you want continue (y)?";
		string check; cin >> check;
		if (check == "y")
			continue;
		else
			break;
		
    }
    return 0;
}
void loadingBGs()
{
	
	for (size_t i = 0; i < cityNames.size(); ++i) {
		if (textures[i].loadFromFile(cityNames[i] + ".png")) {
			// Error loading texture
		}
	}
}