#pragma once
#include "SFMLNode.h"
#include <SFML/Graphics.hpp>
#include <map>
#include <string>
using namespace sf;
using namespace std;

class helperFunctions
{
public:
	static map<string, bool>vis;
	float static randomFloat(float min, float max);
	double static getDistance(int x1, int y1, int x2, int y2);
	queue<string> static bfs(string node);
	queue<string> static dfs(string node,queue<string> &q);
};

