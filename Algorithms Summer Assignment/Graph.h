#pragma once
#include "Vertices.h"

class Graph
{
	std::vector<Vertex> graph;
	std::vector<Vertex*> components; //Connected components for the undirected graph
	bool isDirected = false;
public:
	Graph(unsigned int n, unsigned int m, std::pair<unsigned int, unsigned int>* edgesArr);
	//~Graph();

	//Methods:
	Graph makeDirected() const; 
	void addEdge(std::pair<unsigned int, unsigned int>& edge);

};
