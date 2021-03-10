#include "doctest.h"
#include "snowman.cpp"
#include <iostream>
#include <string.h>
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowmanup code:")
{
    CHECK(snowmanUp(1222) == string("     \n _===_\n\\(o.o)/\n"));
    CHECK(snowmanDown(2212) == string(" ( : )\n (" ")"));

    CHECK(snowmanUp(1111) == string("     \n _===_\n (.,.)\n"));
    CHECK(snowmanDown(3311) == string("/( : )\\\n ( : )"));

    CHECK(snowmanUp(1111) == string("     \n _===_\n (.,.)/\n"));
    CHECK(snowmanDown(1211) == string("<( : )\n ( : )"));

    CHECK(snowmanUp(1222) == string("     \n _===_\n (o.o)\n"));
    CHECK(snowmanDown(3312) == string("/( : )\\n (" ")"));
}