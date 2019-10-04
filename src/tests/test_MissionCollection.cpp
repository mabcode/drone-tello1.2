#include <catch2/catch.hpp>

#include "../Message/MessageCenter.cpp"

TEST_CASE("Checking that valid drone commands", "[MessageCenter]")
{
    MessageCenter *mc = new MessageCenter();

    SECTION("Checking validate()")
    {
        REQUIRE(mc->validate("command") == 0);
        REQUIRE(mc->validate("takeoff") == 1);
        REQUIRE(mc->validate("land") == 2);
        REQUIRE(mc->validate("streamon") == 3);
        REQUIRE(mc->validate("streamoff") == 4);
        REQUIRE(mc->validate("emergency") == 5);
        REQUIRE(mc->validate("up 10") == 6);
        REQUIRE(mc->validate("down 10") == 7);
        REQUIRE(mc->validate("left 10") == 8);
        REQUIRE(mc->validate("right 10") == 9);
        REQUIRE(mc->validate("forward 10") == 10);
        REQUIRE(mc->validate("back 10") == 11);
        REQUIRE(mc->validate("cw 90") == 12);
        REQUIRE(mc->validate("ccw 90") == 13);
        REQUIRE(mc->validate("flip r") == 14);
        REQUIRE(mc->validate("go 23 23 23 ") == 15);
        REQUIRE(mc->validate("stop") == 16);
        REQUIRE(mc->validate("test") == -1);
    }
}
