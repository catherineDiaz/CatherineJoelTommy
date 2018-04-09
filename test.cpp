#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math_utils.h"



TEST_CASE ( "Check isSquare function", "[isSquare]") {
    REQUIRE( IsSquare(1) == true );
    REQUIRE( IsSquare(4) == true );
    REQUIRE( IsSquare(9) == true );
    REQUIRE( IsSquare(25) == true );

}
