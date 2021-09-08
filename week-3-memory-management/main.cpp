#include <iostream>
#include "foo.hpp"

int main ()
{
	int a = 12;
	std::cout << a << std::endl;

	int * b = &a;
	std::cout << *b << std::endl;

	b = nullptr;

	b = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		b[i] = 2 * i + 2;
	}

	std::cout << b[3] << std::endl;
	std::cout << *(b + 3) << std::endl;

	delete [] b;


	int arr[] = {1,2,3};

	b = arr;
	b[0] = 12;
	std::cout << arr[0] << std::endl;

	// arr = b; // cannot do this

	int ** c;

	c = new int*[10];
	for (int i = 0; i < 10; ++i)
	{
		c[i] = new int[20];
	}

	for (int i = 0; i < 10; ++i)
	{
		delete [] c[i];
	}

	delete [] c;

	// Foo g;
	Foo * f;
	f = new Foo();

	return 0;
}