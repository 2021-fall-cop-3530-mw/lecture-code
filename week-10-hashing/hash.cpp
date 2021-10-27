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

	//for (TYPE?? i = ids.begin(); i != ids.end(); ++i)
	for (const int& id: ids)
	{
		std::cout << id << std::endl;
	}

	return 0;
}