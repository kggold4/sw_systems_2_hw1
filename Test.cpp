#include <iostream>

#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Test nagitive") {
    CHECK_THROWS(snowman(-11144411));
    CHECK_THROWS(snowman(-1));
    CHECK_THROWS(snowman(-555));
    CHECK_THROWS(snowman(-3));
}

TEST_CASE("Test length") {
    CHECK_THROWS(snowman(1114441));
    CHECK_THROWS(snowman(111444221));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(00));
    CHECK_THROWS(snowman(0));
}

TEST_CASE("Test invalid input range") {
    CHECK_THROWS(snowman(11140221));
    CHECK_THROWS(snowman(11141251));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(11111117));
    CHECK_THROWS(snowman(01234123));
}

TEST_CASE("Snowman code 11114411") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
}

TEST_CASE("Snowman code 11111111") {
    CHECK(snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
}

TEST_CASE("Snowman code 33232124") {
    CHECK(snowman(33232124) == string("   _\n  /_\\\n\\(o_O)\n (] [)>\n (   )"));
}

TEST_CASE("Snowman code 12341234") {
    CHECK(snowman(12341234) == string(" _===_\n (O.-)/\n<(> <)\n (   )"));
}

TEST_CASE("Snowman code 12341234") {
    CHECK(snowman(12341234) == string(" _===_\n (O.-)/\n<(> <)\n (   )"));
}

TEST_CASE("Snowman code 11441144") {
    CHECK(snowman(11441144) == string(" _===_\n (-,-)\n<(   )>\n (   )"));
}

TEST_CASE("Snowman code 42134213") {
    CHECK(snowman(42134213) == string(" ___\n(_*_)\n(..O)/\n( : )\n(___)"));
}

TEST_CASE("Snowman code 42134213") {
    CHECK(snowman(42134213) == string(" ___\n(_*_)\n(..O)/\n( : )\n(___)"));
}

TEST_CASE("Snowman code 22334411") {
    CHECK(snowman(22334411) == string(" ___\n.....\n(O.O)\n( : )\n( : )"));
}

TEST_CASE("Snowman code 13241324") {
    CHECK(snowman(13241324) == string(" _===_\n (o_-)\n<(] [)\\\n (   )"));
}

TEST_CASE("Snowman code 34142414") {
    CHECK(snowman(34142414) == string("   _\n  /_\\\n\\(. -)\n ( : )\n (   )"));
}

TEST_CASE("Snowman code 43214321") {
    CHECK(snowman(43214321) == string(" ___\n(_*_)\n(o_.)\n(] [)\\\n( : )"));
}

TEST_CASE("Snowman code 44334433") {
    CHECK(snowman(44334433) == string(" ___\n(_*_)\n(O O)\n(> <)\n(___)"));
}

TEST_CASE("Snowman code 13324122") {
    CHECK(snowman(13324122) == string("_===_\n(O_o)\n(] [)>\n(\\ \\)"));
}

TEST_CASE("Snowman code 11211211") {
    CHECK(snowman(11211211) == string(" _===_\n (o,.)/\n<( : )\n ( : )"));
}

