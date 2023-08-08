#include "Graph.h"
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::pair;

void main()
{
	char input;
	unsigned int n, m;

	//cout << "How many vertices in the graph? ";
	cin >> n;

	if (n == 0)
	{
		std::cout << "Error!";
		exit(1);
	}

	//cout << "How many edges? ";
	cin >> m;

	pair<unsigned int, unsigned int>* edgesArr = new pair<unsigned int, unsigned int>[m];
	std::cout << "Enter the edges: ";

	for (unsigned int i = 0; i < m; i++) //input edges
	{
		unsigned int src, dest;
		cin >> src >> dest;

		if (src < 1 || src > n || dest < 1 || dest > n)
		{
			cout << "Error!";
			exit(1);
		}
		edgesArr[i] = { src, dest };
	}

	Graph myGraph(n, m, edgesArr);

}