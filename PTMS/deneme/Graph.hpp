#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;
extern  list<int>* adj;

// A directed graph using
// adjacency list representation
class Graph {
    int V; // No. of vertices in graph
    list<int>* adj;
    // A recursive function used by printAllPaths()
    void printAllPathsUtil(int, int, bool[], int[], int&);
 
public:
    Graph(int V); // Constructor
    void addEdge(int u, int v);
    void printAllPaths(int s, int d);};

#endif
