#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
#include "dna.h"

TEST_CASE("Verify GC Content")
{
	const std::string dna1 = "AGCTATAG";
	const std::string dna2 = "CGCTATAG";

	REQUIRE(get_gc_content(dna1) == .375);
	REQUIRE(get_gc_content(dna2) == .50);
}

TEST_CASE("Verify Reverse String")
{
	std::string dna1 = "AGCTATAG";
	std::string dna2 = "CGCTATAG";

	REQUIRE(get_reverse_string(dna1) == "GATATCGA");
	REQUIRE(get_reverse_string(dna2) == "GATATCGC");
}

TEST_CASE("Verify DNA Complement")
{
	std::string dna1 = "AAAACCCGGT";
	std::string dna2 = "CCCGGAAAAT";

	REQUIRE(get_dna_complement(dna1) == "ACCGGGTTTT");
	REQUIRE(get_dna_complement(dna2) == "ATTTTCCGGG");
}
