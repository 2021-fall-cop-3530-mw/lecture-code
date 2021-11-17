#ifndef HEAP_HPP
#define HEAP_HPP

#include <vector>

class Heap
{
	private:
		std::vector<int> data;
		void Swap (int i, int j);
		void Percolate (int i);
		void PercolateDown (int i);
	public:
		int GetParent (int id);
		int GetLeft (int id);
		int GetRight (int id);
		void Insert (int newValue);
		int Max ();
		void Pop ();
};

#endif /*HEAP_HPP*/
