#include <catch2/catch.hpp>
#include "../Status.cpp"

TEST_CASE( "Checking that values in Status constructor  1", "[Status1]" ) {

    Status *stat = new Status(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);

    SECTION( "Checking the value of pitch after creation" ) {
        REQUIRE( stat->getPitch() == 1);
    }
    SECTION( "Checking the value of roll after creation" ) {
        REQUIRE( stat->getRoll() == 1);
    }
    SECTION( "Checking the value of yaw after creation" ) {
        REQUIRE( stat->getYaw() == 1);
    }
    SECTION( "Checking the value of speedX after creation" ) {
        REQUIRE( stat->getSpeedX() == 1);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getSpeedY() == 1);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getPitch() == 1);
    }
    SECTION( "Checking the value of low temp after creation" ) {
        REQUIRE( stat->getLowTemperature() == 1);
    }
    SECTION( "Checking the value of high temp after creation" ) {
        REQUIRE( stat->getHighTemperature() == 1);
    }
    SECTION( "Checking the value of flight distance after creation" ) {
        REQUIRE( stat->getFlightDistance() == 1);
    }
    SECTION( "Checking the value of height after creation" ) {
        REQUIRE( stat->getHeight() == 1);
    }
    SECTION( "Checking the value of battery percentage after creation" ) {
        REQUIRE( stat->getBatteryPercentage() == 1);
    }
    SECTION( "Checking the value of barometer after creation" ) {
        REQUIRE( stat->getBarometerMeasurement() == 1);
    }
    SECTION( "Checking the value of motor time after creation" ) {
        REQUIRE( stat->getMotorTime() == 1);
    }
    SECTION( "Checking the value of accelerationX after creation" ) {
        REQUIRE( stat->getAccelerationX() == 1);
    }
    SECTION( "Checking the value of accelerationY after creation" ) {
        REQUIRE( stat->getAccelerationY() == 1);
    }
    SECTION( "Checking the value of accelerationZ after creation" ) {
        REQUIRE( stat->getAccelerationZ() == 1);
    }

}

TEST_CASE( "Checking that values in Status constructor  3", "[Status3]" ) {

    Status *stat = new Status();

    SECTION( "Checking the value of pitch after creation" ) {
        REQUIRE( stat->getPitch() == 0);
    }
    SECTION( "Checking the value of roll after creation" ) {
        REQUIRE( stat->getRoll() == 0);
    }
    SECTION( "Checking the value of yaw after creation" ) {
        REQUIRE( stat->getYaw() == 0);
    }
    SECTION( "Checking the value of speedX after creation" ) {
        REQUIRE( stat->getSpeedX() == 0);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getSpeedY() == 0);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getPitch() == 0);
    }
    SECTION( "Checking the value of low temp after creation" ) {
        REQUIRE( stat->getLowTemperature() == 0);
    }
    SECTION( "Checking the value of high temp after creation" ) {
        REQUIRE( stat->getHighTemperature() == 0);
    }
    SECTION( "Checking the value of flight distance after creation" ) {
        REQUIRE( stat->getFlightDistance() == 0);
    }
    SECTION( "Checking the value of height after creation" ) {
        REQUIRE( stat->getHeight() == 0);
    }
    SECTION( "Checking the value of battery percentage after creation" ) {
        REQUIRE( stat->getBatteryPercentage() == 0);
    }
    SECTION( "Checking the value of barometer after creation" ) {
        REQUIRE( stat->getBarometerMeasurement() == 0);
    }
    SECTION( "Checking the value of motor time after creation" ) {
        REQUIRE( stat->getMotorTime() == 0);
    }
    SECTION( "Checking the value of accelerationX after creation" ) {
        REQUIRE( stat->getAccelerationX() == 0);
    }
    SECTION( "Checking the value of accelerationY after creation" ) {
        REQUIRE( stat->getAccelerationY() == 0);
    }
    SECTION( "Checking the value of accelerationZ after creation" ) {
        REQUIRE( stat->getAccelerationZ() == 0);
    }

}