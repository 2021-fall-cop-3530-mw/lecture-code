#include "../../catch/catch.hpp"
#include "../heap.hpp"
#include <string>
#include <iostream>

TEST_CASE("Test")
{
	Heap h;
	REQUIRE(-1 == h.GetParent(0));
	REQUIRE(0 == h.GetParent(1));
	REQUIRE(4 == h.GetParent(10));
	REQUIRE(4 == h.GetParent(9));
}