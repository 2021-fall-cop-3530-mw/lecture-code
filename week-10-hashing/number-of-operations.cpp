int n = 12;


for (int i = 0; i < n; ++i) // 2n + 2
{
	// do this n times
	for (int j = n; j > i; --j)
	{
		// do whatever
		// not dependant on n
		// constant time
		// refer to it as 1 thing
	}
}