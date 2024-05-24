#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Boarders.h"
#include "include/map.h"
#include "helperFunctions.h"
using namespace sf;
using namespace std;
class SFMLNode
{
public:
	bool isDragged = 0, isHoovered = 0;
	static bool active;
	static int cnt;
	static string selectedSource,selectedDestination;
	int kk;
	CircleShape shape;
	Font cityfont;
	Text cityName;
	double speedX = 0, speedY = 0;
	int dirx = 1, diry = 1;
	SFMLNode();
	SFMLNode(string name);
	void checkCollision(map <string, SFMLNode>& graph, RenderWindow &, Boarders);
	void sinWave(float amplitude, float frequency, float time);
	void boarderCollision(Boarders boarders);
	void showCityNames(RenderWindow&);
};

