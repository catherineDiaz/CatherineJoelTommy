#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Math_utils.h"



TEST_CASE ( "Check isSquare function", "[isSquare]") {
    REQUIRE( Math::IsSquare(1) == true );
    REQUIRE( Math::IsSquare(4) == true );
    REQUIRE( Math::IsSquare(9) == true );
    REQUIRE( Math::IsSquare(25) == true );

}

TEST_CASE ( "Check GetDigit function", "[GetDigit]") {
    REQUIRE( Math::GetDigit(4, 1) == 4);
    REQUIRE( Math::GetDigit(12345, 1) == 5);
    REQUIRE( Math::GetDigit(12345, 100) == 3);
    REQUIRE( Math::GetDigit(-12345, 100) == 3);
    REQUIRE( Math::GetDigit(-7, 1) == 7);

    REQUIRE( Math::GetDigit(12345, -1) == 5);
    REQUIRE( Math::GetDigit(12345, -100) == 3);
    REQUIRE( Math::GetDigit(-12345, -100) == 3);

    REQUIRE_THROWS_AS( Math::GetDigit(12, 44), std::invalid_argument );
    REQUIRE_THROWS_AS( Math::GetDigit(12, 1000), std::invalid_argument );
}
