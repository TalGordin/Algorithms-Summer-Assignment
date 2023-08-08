#pragma once
#include <iostream>
#include <vector>
#include <list>

class Vertex
{
	static unsigned int amount;
	unsigned int id;
	char color = 'w'; //w = white, g = gray, b = black
	std::list<Vertex> neighbors;
public:
	Vertex() : id(++amount) {}

	//Methods:
	void addNeighbor(Vertex& neighbor);
};
unsigned int Vertex::amount = 0;
