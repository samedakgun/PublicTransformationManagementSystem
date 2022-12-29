/*
#ifndef Algo_hpp
#define Algo_hpp
#include"Data.hpp"
#include <stdio.h>
#include<list>
#include<string>

using namespace std;


class Graph {
   int V; //
   list<int>* adj;

   void printAllPathsUtil(int, int, bool[], int[], int&);
public:
   Graph(int V); // Constructor
   void addEdge(int u, int v);
   void printAllPaths(int s, int d);
};

#endif
*/
