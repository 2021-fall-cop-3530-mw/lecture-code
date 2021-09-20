#include <iostream>

int fib (int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

void foo (int n)
{
	if (n < 0)
	{
		return;
	}
	std::cout << n << std::endl;
	foo (n -1);
}

int main ()
{
	foo(10);
	int i = 10;
	while (--i > 0)
	{
	}

	return 0;
}