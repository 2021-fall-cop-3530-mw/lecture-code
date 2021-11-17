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

void Heap::PercolateDown(int i)
{
	int rightChild = this->GetRight(i);
	int leftChild = this->GetLeft(i);

	if (rightChild >= this->data.size())
	{
		// no right child
		if (leftChild >= this->data.size())
		{
			//no left child
			return;
		}
		else
		{
			if (this->data[i] < this->data[leftChild])
			{
				this->Swap(i, leftChild);
				this->PercolateDown(leftChild);
			}
			else
			{
				return;
			}
		}
	}
	else // has two children
	{
		if (this->data[rightChild] > this->data[leftChild])
		{
			if (this->data[rightChild] > this->data[i])
			{
				this->Swap(i, rightChild);
				this->PercolateDown(rightChild);
			}
		}
		else // left larger than right
		{
			if (this->data[leftChild] > this->data[i])
			{
				this->Swap(i, leftChild);
				this->PercolateDown(leftChild);
			}
		}
	}
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

void Heap::Pop ()
{
	// check that the heap isn't empty
	if (this->data.size() == 0)
	{
		return;
	}
	// maintain shape
	this->data[0] = this->data[this->data.size() - 1];
	this->data.pop_back();

	// percolate down
	this->PercolateDown(0);
}
