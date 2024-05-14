#pragma once
#include <string>
#include <unordered_map>

using namespace std;

class GraphState {
   private:

   public:
    static void dfs(string city, unordered_map<string, int> &vis);
    static bool isComplete();
    static bool isConnected();
};