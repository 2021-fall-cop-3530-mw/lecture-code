#include "../../catch/catch.hpp"
#include "../node.hpp"
#include "../list.hpp"

TEST_CASE("Test List")
{
	List<int> l;
	REQUIRE(nullptr == l.GetFront());
	l.InsertAtFront(12);
	REQUIRE(12 == l.GetFront()->GetValue());
	l.InsertAtFront(14);
	REQUIRE(14 == l.GetFront()->GetValue());
	// 14 -> 12
	REQUIRE(12 == l.GetFront()->GetNext()->GetValue());

	REQUIRE("14 12" == l.Print());
}