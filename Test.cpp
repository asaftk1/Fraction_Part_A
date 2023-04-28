#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("Test Fraction with zero denominator") {
  CHECK_THROWS(Fraction(2, 0));
}

TEST_CASE("Test Fraction with zero numerator") {
  CHECK_NOTHROW(Fraction(0, 2));
}


TEST_CASE("Boolean operators: ")
{
  Fraction a(1,2);
  Fraction b(3,6);
  Fraction c(5,2);
  float f = 0.5;
  CHECK(a == f);
  CHECK(f == b);
  CHECK(c > f);  
  CHECK(a == b);
  CHECK(a<=b);
  CHECK(a>=b);
  CHECK(a<c);
  CHECK(b<a);
  
}

TEST_CASE("++ and -- Operators: ")
{
    Fraction a(1,2);
    a++;
    CHECK_EQ(a , Fraction (3,2));
    a--;
    CHECK_EQ(a, Fraction(1,2));

    ///prefix
    CHECK_EQ(++a, Fraction(3,2));
    CHECK_EQ(--a, Fraction(1,2));
    CHECK_NE(a++, Fraction(3,2));
    CHECK_NE(a--, Fraction(1,2));
}

TEST_CASE("+ and - Operators: ")
{
    Fraction a(1,2);
    Fraction b(1,2);
    a = a + 0.5;
    CHECK_EQ(a, Fraction(1,1));
    a = a - 0.5;
    CHECK_EQ(a, Fraction(1,2));
    CHECK_EQ(a+b, Fraction(1,1));
    CHECK_EQ(a-b,Fraction(0,0));

}





