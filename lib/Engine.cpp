#include "Engine.hpp"
#include <cmath>

Engine::Engine(size_t iterations)
	: m_iterations(iterations)
{
}

Engine::~Engine()
{
}

void Engine::compute()
{
	double value=0.0;
	for (size_t i=0;i<m_iterations;i++)
	{
		for (size_t j=0;j<m_iterations;j++)
		{
			for (size_t k=0;k<m_iterations;k++)
			{
				value += cos(i) * cos(j) * cos(k);
			}
		}
	}

}
