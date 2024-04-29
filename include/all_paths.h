#pragma once
#include <vector>
using namespace std;
class AllPaths
{
    
    public:
        class Path
        {
            public:
                int cost;
                vector <int> pathVector;
                Path(int cost, vector <int> pathVector);
                bool operator<(const Path& other) const;
        };

        int source, destination;
        vector <vector <pair <int, int>>> graph;
        vector <Path> allPathsVector;
        AllPaths(vector <vector <pair <int, int>>> graph, int, int);
        void displayAllPaths();
        void computeAllPaths();
        void dfsAllPaths(int, vector <int>, int);
        bool comparePaths(Path&, Path&);
};
