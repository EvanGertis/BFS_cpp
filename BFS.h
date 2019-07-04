#include "Vertex.h"
#include <deque>
#include <memory>
#include <iostream>

#pragma once
class BFS
{
public:
	void operator()(std::shared_ptr<Vertex> root) const;
	BFS();
	~BFS();
};

