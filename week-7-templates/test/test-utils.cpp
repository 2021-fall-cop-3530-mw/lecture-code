#include "../../catch/catch.hpp"
#include "../utils.hpp"
#include <vector>

std::vector<int> data = {7, 12, 23, 23, 43, 80};

TEST_CASE("Test Swap")
{
	Utils::Swap(data, 0, 2);
	REQUIRE(23 == data[0]);
	REQUIRE(7 == data[2]);
}