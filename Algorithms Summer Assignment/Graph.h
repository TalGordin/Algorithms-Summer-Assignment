#pragma once
#include "Vertices.h"
using std::vector;
using std::list;


class Graph
{
	vector<list<Vertex>> graph;
	vector<Vertex> components; //Connected components for the undirected graph
	bool isDirected = false;
public:
	Graph(unsigned int n, unsigned int m, pair<unsigned int, unsigned int>* edgesArr);
	~Graph();

	//Methods:

	Graph makeDirected() const; 

};
