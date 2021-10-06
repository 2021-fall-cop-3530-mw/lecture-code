#include "../../catch/catch.hpp"
#include "../node.hpp"
#include "../list.hpp"

TEST_CASE("Test List")
{
	List<int> l;
	REQUIRE(nullptr == l.GetFront());
	l.InsertAtFront(12);
	REQUIRE(12 == l.GetFront()->GetValue());
}