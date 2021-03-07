#include <iostream>

#include "doctest.h"
#include "snowman.hpp"

using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Test length-7") {
    CHECK_THROWS(snowman(1114441));
}

TEST_CASE("Test length-9") {
    CHECK_THROWS(snowman(111444221));
}

TEST_CASE("Test length-3 and invalid input range") {
    CHECK_THROWS(snowman(555));
}

TEST_CASE("Test invalid input range-1") {
    CHECK_THROWS(snowman(11140221));
}

TEST_CASE("Test invalid input range-2") {
    CHECK_THROWS(snowman(11141251));
}

TEST_CASE("Good snowman code") {
    cout << string(snowman(11114411));
    cout << string("_===_\n(.,.)\n( : )\n( : )");
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
}




/* Add more test cases here */
