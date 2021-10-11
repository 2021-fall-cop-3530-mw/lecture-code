#include "../../catch/catch.hpp"
#include "../node.hpp"

TEST_CASE("Test Node")
{
	Node<int>* n = new Node<int>(1);
	REQUIRE(1 == n->GetValue());
	REQUIRE(nullptr == n->GetNext());

	Node<int>* n2 = new Node<int>(2, n);
	REQUIRE(2 == n2->GetValue());
	REQUIRE(n == n2->GetNext());
}