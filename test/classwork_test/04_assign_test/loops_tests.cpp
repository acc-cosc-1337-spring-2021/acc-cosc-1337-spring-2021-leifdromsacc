#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Factorial Function")
{
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(4) == 24);
	REQUIRE(factorial(5) == 120);
}
