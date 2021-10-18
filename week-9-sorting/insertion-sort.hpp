#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include <vector>

class InsertionSort
{
	private:
		static void Swap (std::vector<int>& data, size_t i, size_t j);
	public:
		static void Sort (std::vector<int>& data);
};

#endif /*INSERTION_SORT_HPP*/