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
TEST_CASE("Test Swap double")
{
	std::vector<double> data = {7.2, 1.2, 2.3, 23.7, 43.0, 8.0};
	Utils::Swap(data, 0, 2);
	REQUIRE(2.3 == data[0]);
	REQUIRE(7.2 == data[2]);
}