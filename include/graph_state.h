#pragma once
#include "map.h"

class GraphState{
private:
    static int dfs(string startingNode);
public:
    static bool isComplete();
    static bool isConnected();
};