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
}