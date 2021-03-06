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

	REQUIRE(5 == h.GetLeft(2));
	REQUIRE(1 == h.GetLeft(0));

	REQUIRE(2 == h.GetRight(0));
	REQUIRE(6 == h.GetRight(2));
}

TEST_CASE ("Build heap")
{
	Heap h;
	// h.Max(); // what is an invalid value?
	h.Insert(12);
	CHECK(12 == h.Max());
	h.Insert(22);
	CHECK(22 == h.Max());
	h.Insert(24);
	h.Insert(-25);
	h.Insert(22);
	CHECK(24 == h.Max());

	//heap is valid
	h.Pop();
	//heap is valid
	CHECK(22 == h.Max());

	h.Pop();
	CHECK(22 == h.Max());

	h.Pop();
	CHECK(12 == h.Max());
}