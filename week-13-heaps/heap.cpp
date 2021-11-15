#include "heap.hpp"

int Heap::GetParent (int id)
{
	if (id <= 0)
	{
		return -1;
	}
	return (id - 1) / 2;
}

int Heap::GetLeft (int id)
{
	return (id * 2) + 1;
}

int Heap::GetRight (int id)
{
	return this->GetLeft(id) + 1;
}
