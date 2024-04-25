#include <string>

class Node {
 public:
  std::string name;
};

class Edge {
 public:
  Node node1, node2;
  int weight;
  bool isDirected;  // if true, then the edge is node1 -> node2
};