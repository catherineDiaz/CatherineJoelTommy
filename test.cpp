#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math_utils.h"



TEST_CASE ( "Check isSquare function", "[isSquare]") {
    REQUIRE( IsSquare(1) == true );
    REQUIRE( IsSquare(4) == true );
    REQUIRE( IsSquare(9) == true );
    REQUIRE( IsSquare(25) == true );

}

TEST_CASE ( "Check GetDigit function", "[GetDigit]") {
    REQUIRE( GetDigit(4, 1) == 4);
    REQUIRE( GetDigit(12345, 1) == 5);
    REQUIRE( GetDigit(12345, 100) == 3);
    REQUIRE( GetDigit(-12345, 100 == 3);
    REQUIRE( GetDigit(-7, 1) == 7);

    REQUIRE( GetDigit(12345, -1) == 5);
    REQUIRE( GetDigit(12345, -100) == 3);
    REQUIRE( GetDigit(-12345, -100) == 3);

    REQUIRE_THROWS_AS( GetDigit(12, 44), std::invalid_argument );
    REQUIRE_THROWS_AS( GetDigit(12, 1000), std::invalid_argument );
}
