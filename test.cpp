#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Math.h"
#include <vector>

using namespace std;

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

TEST_CASE ("Check EqualParity function", "[EqualParity]") {
    REQUIRE( Math::EqualParity(1, -1) == false);
    REQUIRE( Math::EqualParity(1, 1) == true);
    REQUIRE( Math::EqualParity(-1, -1) == true);
    
    vector<int> notEq = {1, -1, 1};
    vector<int> Eq = {1, 1, 1};
    vector<int> EqNeg = {-1, -1, -1};
    REQUIRE( Math::EqualParity(notEq) == false);
    REQUIRE( Math::EqualParity(Eq) == true);
    REQUIRE( Math::EqualParity(EqNeg) == true);
}

TEST_CASE ("Check Quadratic function", "[solveQuadratic]") {
    REQUIRE( Math::solveQuadratic(1, 3, 2).x1 == -1);
    REQUIRE( Math::solveQuadratic(1, 3, 2).x2 == -2);
}



