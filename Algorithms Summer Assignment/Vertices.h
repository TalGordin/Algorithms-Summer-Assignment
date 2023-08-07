#pragma once
#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::list;

class Vertex
{
	unsigned int id;
	char color = 'w'; //w = white, g = gray, b = black
public:
	Vertex(unsigned int id) : id(id) {}
};
