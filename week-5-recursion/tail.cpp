#include <iostream>

void rec (int n)
{
	std::cout << n << "\n";
	rec(n-1);
}

int main ()
{
	rec (10);
	return 0;
}