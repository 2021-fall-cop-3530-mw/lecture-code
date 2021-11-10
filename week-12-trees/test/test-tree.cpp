#include "../../catch/catch.hpp"
#include "../node.hpp"
#include "../tree.hpp"

TEST_CASE("Test Tree")
{
	Tree<int> t;
	REQUIRE(nullptr == t.GetRoot());
	t.Insert(12);
	REQUIRE(12 == t.GetRoot()->GetValue());

	t.Insert(10);
	REQUIRE(12 == t.GetRoot()->GetValue());
	REQUIRE(10 == t.GetRoot()->GetLeft()->GetValue());

	t.Insert(10);
	t.Insert(25);
	t.Insert(-124);
	t.Insert(7);
	t.Insert(-2);

	REQUIRE("-124 -2 7 10 10 12 25 " == t.Print()); // sorted list of tree elements

	REQUIRE(nullptr == t.Search(1));
	REQUIRE(7 == t.Search(7)->GetValue());
}