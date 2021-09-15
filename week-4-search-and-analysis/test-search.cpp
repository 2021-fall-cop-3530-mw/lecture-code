#include "../catch/catch.hpp"
#include "search.hpp"

int data[] = {7, 12, 23, 23, 43, 80};

TEST_CASE("Search for existing element")
{
	CHECK (2 == Search::Find(data, 23, 6));
	CHECK (0 == Search::Find(data, 7, 6));
	CHECK (-1 == Search::Find(data, 4, 6));
}