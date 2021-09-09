#include "../catch/catch.hpp"
#include "function.cpp"

TEST_CASE ("Verify number print correctly")
{
	CHECK("1234567891011121314151617181920" == listNumbersToN(20));
}