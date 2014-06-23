#pragma once

#include <cstdlib> // for size_t definition

class Engine
{
public:
	Engine(size_t iterations=10);
	virtual ~Engine();
	void compute();
private:
	size_t m_iterations;
};
