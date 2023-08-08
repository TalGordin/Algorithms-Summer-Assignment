#include "Vertices.h"

void Vertex::addNeighbor(Vertex& neighbor)
{
	neighbors.push_back(neighbor);
}
