#pragma once
#include <vector>
#include <unordered_map>
#include <string>
#include <pair>
#include <map>
#include "../include/map.h"
#include "../include/map_helpers.h"
using namespace std;
class AllPaths
{
    
    public:
        class Path
        {
            public:
                int cost;
                vector <string> pathVector;
                Path(int cost, vector <string> pathVector);
                bool operator<(const Path& other) const;
        };

        string source, destination;
        unordered_map<string, unordered_map<string, Route>> graph;
        vector <pair <int, vector <string>>> allPathsVector;
        AllPaths(unordered_map<string, unordered_map<string, Route>> &graph, string, string);
        void displayAllPaths();
        void computeAllPaths();
        void dfsAllPaths(string, map<string, bool>&, vector <string>, int);
        bool comparePaths(Path&, Path&);
};
