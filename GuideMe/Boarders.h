#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Boarders {
public:
	RectangleShape upper, lower;
	RectangleShape left, right;
	Text userGuide;
	Boarders(Font &font) {
		upper.setSize({ 1920, 10 });
		lower.setSize({ 1920, 10 });
		left.setSize({ 10, 1080 });
		right.setSize({ 10, 1080 });

		upper.setPosition({ 0,310 });
		lower.setPosition({ 0,1070 });
		left.setPosition({ 0,0 });
		right.setPosition({ 1910,0 });

		upper.setFillColor(Color::Green);
		lower.setFillColor(Color::Blue);
		left.setFillColor(Color::Red);
		right.setFillColor(Color::Yellow);

		userGuide.setPosition({ 1250,600 });
		userGuide.setFont(font);
		userGuide.setFillColor(Color(240, 241, 250));
		userGuide.setString("To select Starting City left click the node\n To select Destination City right click the node\n For DFS press 'D'\n For BFS press 'B'\n For dijkstra press 'Z'\n For all Paths press 'Q'\n To exit Press Escape");
	}
	void drawBoarders(RenderWindow& window) {
		window.draw(upper);
		window.draw(lower);
		window.draw(left);
		window.draw(right);
	}
};

