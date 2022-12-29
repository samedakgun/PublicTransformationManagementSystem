#include "Graph.hpp"
#include<iostream>
#include<string>
using namespace std;

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v); // Add v to u’s list.
}
 
// Prints all paths from 's' to 'd'
void Graph::printAllPaths(int s, int d)
{
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
 
    int* path = new int[V];
    int path_index = 0;
 
    for (int i = 0; i < V; i++)
        visited[i] = false;
    printAllPathsUtil(s, d, visited, path, path_index);
}
 
void Graph::printAllPathsUtil(int u, int d, bool visited[],
                              int path[], int& path_index)
{
    visited[u] = true;
    path[path_index] = u;
    path_index++;
 
    if (u == d) {
        for (int i = 0; i < path_index; i++)
            cout <<" Otobüsüne bin "<<path[i] <<endl<< " ";
        cout << endl;
    }
    else
    {
 
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                printAllPathsUtil(*i, d, visited, path,
                                  path_index);
    }
    path_index--;
    visited[u] = false;
}
