#include "search.hpp"

int Search::Find (int a[], int searchKey, int right)
{
	int left = 0;
	int middle;

	while (right > left)
	{
		middle = (left + right) / 2;
		if (searchKey < a[middle])
		{
			right = middle - 1;
		}
		else if (searchKey > a[middle])
		{
			left = middle + 1;
		}
		else
		{
			return middle;
		}
	}

	return -1;
}
