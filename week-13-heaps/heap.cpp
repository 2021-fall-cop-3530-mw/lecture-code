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

void Heap::Swap (int i, int j)
{
	int temp = this->data[i];
	this->data[i] = this->data[j];
	this->data[j] = temp;
}

int Heap::Max ()
{
	// what if it's empty?
	return this->data[0];
}

void Heap::Percolate (int i)
{
	if (i <= 0)
	{
		return;
	}
	//missing base case
	int parentIndex = this->GetParent(i);
	if (this->data[i] > this->data[parentIndex]) // bigger than parent
	{
		this->Swap(i, parentIndex);
		this->Percolate(parentIndex);
	}
	else
	{
		// nothing required
	}
}

void Heap::Insert (int val)
{
	this->data.push_back(val);
	this->Percolate(this->data.size() - 1);
}
