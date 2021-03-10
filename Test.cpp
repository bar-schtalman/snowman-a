#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <stdlib.h>
#include <string>
using namespace std;
#include <limits>
#include <iostream>


int arr [] = {-1,4,5,6,7,8};
int v4 = arr[rand() %6];
int snownum = 11111111;
TEST_CASE("Good snowman with diffrent hat"){
     CHECK(snowman(12222211) == string("_===_\n\\(o.o)/\n( : )\n( : )"));
     CHECK(snowman(21331324) == string(" ___ \n.....\n(O,O)\\n<(] [)\n(   )"));
     CHECK(snowman(31342341) == string(" _\n/_\\n\\(O,-)\\n\\(  )\n( : )"));
     CHECK(snowman(43221333) == string(" ___\n[_*_]\n(o_o)\\n<(> <)\n(___)"));
}
TEST_CASE("Good snowman with diffrent nose"){
     CHECK(snowman(41231212) == string(" ___\n[_*_]\n(o,O)/\n<( : )\n(" ")"));
     CHECK(snowman(22443311) == string(" ___ \n.....\n/(-.-)\n( : )>\n( : )"));
     CHECK(snowman(23114444) == string(" ___ \n.....\n(._.)\n(   )\n(   )"));
     CHECK(snowman(14331113) == string("_===_\n(O O)\n<( : )>\n(___)"));
}
TEST_CASE("Good snowman with diffrent left eye"){
     CHECK(snowman(14112134) == string("_===_\n\\(. .)\n\\(> <)>n(   )"));
     CHECK(snowman(31222441) == string(" _\n/_\\n(o,o)\n\\(   )\n( : )"));
     CHECK(snowman(22333342) == string(" ___ \n.....\n(O.O)\n/(   )\\n(" ")"));
     CHECK(snowman(12433412) == string("_===_\n(-.O)\n/( : )\n(" ")"));
}
TEST_CASE("Good snowman with diffrent right eye"){
     CHECK(snowman(34111144) == string(" _\n/_\\n(. .)\n<(   )>\n(   )"));
     CHECK(snowman(44123124) == string(" ___\n[_*_]\n(. o)\n/(] [)>\n(   )"));
     CHECK(snowman(31234411) == string(" _\n/_\\n(o,O)\n( : )\n( : )"));
     CHECK(snowman(12441412) == string("_===_\n(-.-)\n<( : )n(" ")"));
}
TEST_CASE("Good snowman with diffrent left hand"){
     CHECK(snowman(12341134) == string("_===_\n(O.-)\n<(> <)>\n(   )"));
     CHECK(snowman(32122422) == string("  _\n/_\\n\\(..o)\n\\(] [)\n("  ")"));
     CHECK(snowman(11223344) == string("_===_\n/(o,o)\\n(   )\n(   )"));
     CHECK(snowman(14144414) == string("_===_\n(. -)\n( : )n(   )"));
}
TEST_CASE("Good snowman with diffrent right hand"){
     CHECK(snowman(12233144) == string("_===_\n/(o.O)\n(   )>\n(   )"));
     CHECK(snowman(41323233) == string(" ___\n[_*_]\n/(O,o)/\n\\(> <)\n(___)"));
     CHECK(snowman(11244344) == string("_===_\n/(o, )\\n(   )\n(   )"));
     CHECK(snowman(23411421) == string(" ___ \n.....\n( _.)\n<(] [)n( : )"));
}
TEST_CASE("Good snowman with diffrent torso"){
     CHECK(snowman(43222111) == string(" ___\n[_*_]\n\\(o_o)\n( : )>\n( : )"));
     CHECK(snowman(33133424) == string(" _ \n/_\\n/(._O)\n(] [)\n(   )"));
     CHECK(snowman(14442134) == string("_===_\n\\(- -)\n\\(> <)>n(   )"));
     CHECK(snowman(23334443) == string(" ___ \n.....\n(O_O)\n(   )\n(___)"));
}
TEST_CASE("Good snowman with diffrent base"){
     CHECK(snowman(14112131) == string("_===_\n\\(. .)\n\\(> <)>\n( : )"));
     CHECK(snowman(24133142) == string(" ___ \n.....\n/(. O)\n(   )>\n(" ")"));
     CHECK(snowman(21114343) == string(" ___ \n.....\n(.,.)\\n(   )\n(___)"));
     CHECK(snowman(33331144) == string(" _ \n/_\\n(O_O)\n<(   )>\n(   )"));
}

TEST_CASE("Good snowman") {
    CHECK(snowman(12222211) == string("_===_\n\\(o.o)\n\\( : )/\n( : )"));
    CHECK(snowman(31441133) == string(" _ \n/_\\n(-,-)\n\\<(> <)>/\n(___)"));
    CHECK(snowman(43334441) == string(" ___\n[_*_]\n(O_O)\n(   )\n(" ")"));
    CHECK(snowman(33333333) == string(" _ \n/_\\n/(O_O)\\n(> <)\n(___)"));
    CHECK(snowman(11111111) == string("_===_\n(.,.)\n<( : )>/\n( : )"));
    CHECK(snowman(22222222) == string(" ---\n.....\n\\(o.o)/\n\\(] [)\n(" ")"));
    CHECK(snowman(44444444) == string(" ___\n[_*_]\n(- -)\n(   )\n(   )"));
    CHECK(snowman(43211234) == string(" ___\n[_*_]\n(o_.)/\n<(> <)\n(   )"));
    CHECK(snowman(12344321) == string("_===_\n(O.-)\\n(] [)\n( : )"));
    
}
TEST_CASE("bad snowman code") {//too short input
    CHECK_THROWS(snowman(1224));
    CHECK_THROWS(snowman(314413));
    CHECK_THROWS(snowman(3344112));
    CHECK_THROWS(snowman(231653));
    CHECK_THROWS(snowman(1241));
    CHECK_THROWS(snowman(1133451));
    CHECK_THROWS(snowman(231561));
    CHECK_THROWS(snowman(2));
}


TEST_CASE("input lower then minimum") {
    int v1 = rand () % 11111111;
    CHECK_THROWS(snowman(v1));
}

TEST_CASE("input higher then maximum") {
    int v2 = rand () % INTMAX_MAX +44444445 ;
    CHECK_THROWS(snowman(v2));
}

TEST_CASE("negative input"){
    int v3 = (rand () %INTMAX_MAX) * (-1);
    CHECK_THROWS(snowman(v3));
}

TEST_CASE("first digit invalid"){
    CHECK_THROWS(snowman(snownum+v4));
}

TEST_CASE("second digit invalid"){
    CHECK_THROWS(snowman(snownum+(v4*10)));
}

TEST_CASE("third digit invalid"){
    CHECK_THROWS(snowman(snownum+(v4*100)));
}

TEST_CASE("fourth digit invalid"){
     CHECK_THROWS(snowman(snownum+(v4*1000)));
}

TEST_CASE("fifth digit invalid"){
     CHECK_THROWS(snowman(snownum+(v4*10000)));
}

TEST_CASE("sixth digit invalid"){
    CHECK_THROWS(snowman(snownum+(v4*100000)));
}

TEST_CASE("seventh digit invalid"){
    CHECK_THROWS(snowman(snownum+(v4*1000000)));
}

TEST_CASE("eighth digit invalid"){
    CHECK_THROWS(snowman(snownum+(v4*10000000)));
}