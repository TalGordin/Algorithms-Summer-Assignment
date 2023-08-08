#include "Graph.h"
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::pair;

Graph::Graph(unsigned int n, unsigned int m, pair<unsigned int, unsigned int>* edgesArr)
{
	graph.reserve(n);

	for (unsigned int i = 0; i < n; i++)
		graph.push_back(Vertex());

	for (unsigned int i = 0; i < m; i++)
		addEdge(edgesArr[i]);
}

void Graph::addEdge(std::pair<unsigned int, unsigned int>& edge)
{
	graph[edge.first].addNeighbor(graph[edge.second]);
	graph[edge.second].addNeighbor(graph[edge.first]);
}
