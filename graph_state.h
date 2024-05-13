#pragma once
#include <string>
#include <unordered_map>

using namespace std;

class GraphState {
private:
    static void dfs(string city, unordered_map<string, int> &vis);

public:
    static bool isComplete();
    static bool isConnected();
};
