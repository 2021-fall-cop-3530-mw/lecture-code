#include <iostream>

void foo (int a)
{
	++a;
	//this->a=a;
}

void bar (int& a)
{
	++a;
}

void baz (const int& a)
{
	// ++a;
}

int main ()
{
	int a = 12;
	foo(a);
	std::cout << a << std::endl;
	bar(a);
	std::cout << a << std::endl;

	int n = 1000;
	for (int i = 0; i < n; ++i)
	{
		// do constant time operation
		for (int j = 0; j < n; ++j) // O(n)
		{
			// do constant time operation
		}
	}

	return 0;
}