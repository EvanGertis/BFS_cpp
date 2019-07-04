#include <string>
#include <vector>
#include <iostream>
#pragma once
class Vertex
{
private:
	// Every node has a string parameter
	std::string name = "";
	// Flag to keep track of whether visited or not
	bool visited = false;
	//store the neighboring nodes in an array
	std::vector<Vertex *> neighbours;

public:

	Vertex(const std::string &_name);
	~Vertex();

	const std::string &getName() const;
	void setName(const std::string &name);
	bool isVisited() const;
	void setVisited(bool visited);
	const std::vector<Vertex *> &getNeighbourList() const;
	void addNeighbour(Vertex *neighbour);
};

