#include "pch.h"
#include "BFS.h"


void BFS::operator()(std::shared_ptr<Vertex> root) const
{
	// breadth-first search (BFS) needs a FIFO structure, queue
	std::deque <Vertex *> queue;

	//start with the root node
	root->setVisited(true);

	//add the root node to the queue
	queue.push_back(root.get());

	//while the queue is not empty loop through the neighbours
	while (!queue.empty()) {
		
		//get the first vertex
		Vertex *actualVertex = queue.front();
		queue.pop_front();

		std::cout << "Visited node: " << actualVertex->getName() << "\n";

		//vist the neighbors of the given vertex
		for (Vertex *v : actualVertex->getNeighbourList()) {
			//vist nodes only once
			if (!v->isVisited()) {
				v->setVisited(true);
				//add the node back to the queue
				queue.push_back(v); 
			}
		}
	}
}

BFS::BFS()
{
}


BFS::~BFS()
{
}
