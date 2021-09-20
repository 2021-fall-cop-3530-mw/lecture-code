#ifndef SEARCH_HPP
#define SEARCH_HPP

class Search
{
	private:
		static int RecursiveFind (int a[], int searchKey, int left, int right);
	public:
		static int Find (int a[], int searchKey, int length);
};

#endif /*SEARCH_HPP*/