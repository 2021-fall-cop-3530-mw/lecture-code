#include "../catch/catch.hpp"
#include "insertion-sort.hpp"
#include "merge-sort.hpp"
#include <vector>


TEST_CASE("Test sorts")
{
	std::vector<int> data = { -1, 12, 34, -583, 0, -1, 56 };
	std::vector<int> sortedData = { -583, -1, -1, 0, 12, 34, 56 };

	SECTION("Insertion sort")
	{
		REQUIRE(data != sortedData);
		InsertionSort::Sort(data);
		REQUIRE(data == sortedData);
	}

	SECTION("Merge sort")
	{
		REQUIRE(data != sortedData);
		MergeSort::Sort(data);
		REQUIRE(data == sortedData);
	}
}