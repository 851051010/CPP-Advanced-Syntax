#include "Graph.h"

Graph::Graph(const Point& c) : center(c)
{

}

float Graph::getDistance(const Graph& graph)
{
	return center.getDistance(graph.center);
}