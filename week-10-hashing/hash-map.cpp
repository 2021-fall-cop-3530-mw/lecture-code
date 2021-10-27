#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_map>

int main ()
{
	std::unordered_map<std::string,int> ids;
	ids["foo"] = 12;
	ids["bar"] = 88;

	std::cout << ids["foo"] << std::endl;

	std::cout << ids["baz"] << std::endl;

	if (ids.find("baz") != ids.end())
	{
		std::cout << ids["baz"] << std::endl;
	}

	return 0;
}