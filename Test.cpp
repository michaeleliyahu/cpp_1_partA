
#include "doctest.h"
#include "snowman.hpp"
#include <iostream>
#include <string.h>
using namespace ariel;

#include <string>
using namespace std;

//check all hat with correct space
TEST_CASE("Good snowman code: check hats")
{
    CHECK(snowman(11114411) == string("     \n_===_\n(.,.)\n( : )\n( : )"));
/*
     
_===_
(.,.)
( : )
( : )
*/
    CHECK(snowman(21114411) == string("  ___\n .....\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(31114411) == string("   _\n  /_\\\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(21114411) == string("  ___\n (_*_)\n (.,.)\n ( : )\n ( : )"));
}

//check all option for arms
TEST_CASE("Good snowman code: check arms")
{
    /*
    every line start with space or with arm
    every line finish with \n without spaces 

    check tow arm upwards, tow arm downwards, one upwards one down words, without arms
    */
    /*
    exemple
     _===_
    \(o.o)/
     ( : )
     (" ")
    */
    CHECK(snowman(12222212) == string("     \n _===_\n\\(o.o)/\n ( : )\n (" ")"));
    CHECK(snowman(11113311) == string("     \n _===_\n (.,.)\n/( : )\\\n ( : )"));
    CHECK(snowman(11111211) == string("     \n _===_\n (.,.)/\n<( : )\n ( : )")); //good exemple 
    CHECK(snowman(12223312) == string("     \n _===_\n (o.o)\n/( : )\\\n (" ")"));
    
    /*
      ___\n
     .....\n
     (.,.)\n
    <( : )>\n
     (" ")\n
    */
    CHECK(snowman(22222212) == string("  ___\n .....\n\\(o.o)/\n ( : )\n (" ")"));
    CHECK(snowman(21113311) == string("  ___\n .....\n (.,.)\n/( : )\\\n ( : )"));
    CHECK(snowman(21111211) == string("  ___\n .....\n (.,.)\n<( : )>\n ( : )")); 
    CHECK(snowman(22223312) == string("  ___\n .....\n (o.o)\n/( : )\\\n (" ")"));

    /*
       _\n
      /_\\\n
     (.,.)/\n
    <( : )\n
     ( : )
    */
    CHECK(snowman(32222212) == string("   _\n  /_\\\n\\(o.o)/\n ( : )\n (" ")"));
    CHECK(snowman(31113311) == string("   _\n  /_\\\n (.,.)\n/( : )\\\n ( : )"));
    CHECK(snowman(31111211) == string("   _\n  /_\\\n (.,.)\n<( : )\n ( : )")); 
    CHECK(snowman(32223312) == string("   _\n  /_\\\n (o.o)\n/( : )\\\n (" ")"));

    /*
      ___\n
     (_*_)\n
    \(o.o)/\n
     ( : )\n
     ( : ) 
    */
    CHECK(snowman(42222212) == string("  ___\n (_*_)\n\\(o.o)/\n ( : )\n ( : )"));
    CHECK(snowman(41113311) == string("  ___\n (_*_)\n (.,.)\n/( : )\\\n ( : )"));
    CHECK(snowman(41111211) == string("  ___\n (_*_)\n (.,.)\n<( : )>\n ( : )")); 
    CHECK(snowman(42223312) == string("  ___\n (_*_)\n (o.o)\n/( : )\\\n (" ")"));
}
TEST_CASE("Good snowman code: check torso and base")
{
    CHECK(snowman(11114421) == string("     \n _===_\n (.,.)\n (] [)\n ( : )"));
    CHECK(snowman(11114422) == string("     \n _===_\n (.,.)\n (] [)\n (" ")"));
    CHECK(snowman(11114423) == string("     \n _===_\n (.,.)\n (] [)\n (___)"));
    CHECK(snowman(11114424) == string("     \n _===_\n (.,.)\n (] [)\n (  )"));

    CHECK(snowman(21114431) == string("  ___\n .....\n (.,.)\n (> <)\n ( : )"));
    CHECK(snowman(21114432) == string("  ___\n .....\n (.,.)\n (> <)\n (" ")"));
    CHECK(snowman(21114433) == string("  ___\n .....\n (.,.)\n (> <)\n (___)"));
    CHECK(snowman(21114434) == string("  ___\n .....\n (.,.)\n (> <)\n (   )"));
    
    CHECK(snowman(31114412) == string("   _\n  /_\\\n (.,.)\n ( : )\n (" ")"));
    CHECK(snowman(31114413) == string("   _\n  /_\\\n (.,.)\n ( : )\n (___)"));
    CHECK(snowman(31114413) == string("   _\n  /_\\\n (.,.)\n ( : )\n (   )"));
}

TEST_CASE("Bad snowman code: check length")
{
    //more then 8 number
    CHECK_THROWS(snowman(123234211));
    CHECK_THROWS(snowman(1232342112));

    //less then 8 number
    CHECK_THROWS(snowman(132345));
    CHECK_THROWS(snowman(1));

    //null index
    int x;
    CHECK_THROWS(snowman(x));

}

TEST_CASE("Bad snowman code: check if number between 1-4")
{
    //check zero
    CHECK_THROWS(snowman(13240132));
    CHECK_THROWS(snowman(01332323));
    CHECK_THROWS(snowman(01332320));

    //check more then 4
    CHECK_THROWS(snowman(13232345));
    CHECK_THROWS(snowman(73232342));
    CHECK_THROWS(snowman(73232348));

    //check null index
    int x;
    CHECK_THROWS(snowman(x));
 
}