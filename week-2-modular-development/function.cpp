#include <sstream>

std::string listNumbersToN (int n)
{
	std::ostringstream foo;

	for (int i = 1; i <= n; ++i)
	{
		foo << i;
	}

	return foo.str();
}