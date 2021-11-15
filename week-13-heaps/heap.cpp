#include "heap.hpp"

int Heap::GetParent (int id)
{
	if (id <= 0)
	{
		return -1;
	}
	return (id - 1) / 2;
}
