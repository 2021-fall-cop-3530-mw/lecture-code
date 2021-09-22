#include "search.hpp"

int Search::Find (int a[], int searchKey, int right)
{
	return Search::RecursiveFind(a, searchKey, 0, right);
}

int Search::RecursiveFind (int a[], int searchKey, int left, int right)
{
	int middle = (left + right) / 2;

	if (searchKey == a[middle])
	{
		// found it
		return middle;
	}
	else if (right <= left)
	{
		// didn't find it
		return -1;
	}
	else if (searchKey < a[middle])
	{
		return Search::RecursiveFind (a, searchKey, left, middle - 1);
	}
	else
	{
		return Search::RecursiveFind (a, searchKey, middle + 1, right);
	}
}
