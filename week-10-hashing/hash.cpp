#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_set>

int main ()
{
	std::unordered_set<int> ids;
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(12);
	ids.insert(88);

	std::cout << *(ids.find(12)) << std::endl;
	std::cout << *(ids.find(88)) << std::endl;
	if (ids.find(99) == ids.end())
	{
		std::cout << "Element not in set" << std::endl;
	}

	std::cout << "Printing all elements in the set (there are no duplicates).\n";
	for (std::unordered_set<int>::iterator i = ids.begin(); i != ids.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	// If using C++ 11 or higher, can use auto type
	std::cout << "Printing all elements in the set (using `auto` type for the iterator).\n";
	for (auto i = ids.begin(); i != ids.end(); ++i)
	{
		std::cout << *i << std::endl;
	}


	// Or an even cleaner way
	std::cout << "Printing all elements using for-each style looping.\n";
	for (const int& id: ids)
	{
		std::cout << id << std::endl;
	}

	return 0;
}