#include "helperFunctions.h"
#include "SFMLNode.h"
float helperFunctions::randomFloat(float min, float max) {
	int randomInt = rand();
	float randomFraction = static_cast<float>(randomInt) / RAND_MAX;
	return min + randomFraction * (max - min);
}
double helperFunctions::getDistance(int x1, int y1, int x2, int y2)
{
	return sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
queue<string> helperFunctions::bfs(string node) {
	queue<string>q, save;
	map<string, bool>vis;
	q.push(node);
	save.push(node);
	vis[node] = true;
	while (!q.empty()) {
		string x = q.front();
		q.pop();
		for (auto& i : Map::adjList[x]) {
			if (!vis[i.first]) {
				vis[i.first] = true;
				q.push(i.first);
				save.push(i.first);
			}
		}
	}
	return save;
}
queue<string> helperFunctions::dfs(string node, queue<string>& q) {
	vis[node] = true;
	q.push(node);
	for (auto& i : Map::adjList[node]) {
		if (!vis[i.first])
			q = dfs(i.first, q);
	}
	return q;
}

