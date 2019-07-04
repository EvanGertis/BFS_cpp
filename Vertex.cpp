#include "pch.h"
#include "Vertex.h"


Vertex::Vertex(const std::string &_name)
	: name(_name)
{
}


Vertex::~Vertex()
{
}

const std::string & Vertex::getName() const
{
	return name;
}

void Vertex::setName(const std::string & name)
{
	this->name = name;
}

bool Vertex::isVisited() const
{
	return visited;
}

void Vertex::setVisited(bool visted)
{
	this->visited = visited;
}

const std::vector<Vertex*>& Vertex::getNeighbourList() const
{
	return neighbours;
}

void Vertex::addNeighbour(Vertex * neighbour)
{
	neighbours.push_back(neighbour);
}
