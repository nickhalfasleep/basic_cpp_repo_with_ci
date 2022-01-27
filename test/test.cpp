#include <catch2/catch_test_macros.hpp>
#include "../src/second.h"

static int Factorial( int number ) {
   return number <= 1 ? number : Factorial( number - 1 ) * number;  // fail
// return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // pass
}

TEST_CASE( "Factorial of 0 is 0 (pass)", "[single-file]" ) {
    REQUIRE( Factorial(0) == 0 );
}

TEST_CASE( "Factorials of 1 and higher are computed (pass)", "[single-file]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE("Make sure basic second function can be compiled and reached") {

    second stunt_second;
    REQUIRE( stunt_second.make_it_fourty_two() == 42);
}