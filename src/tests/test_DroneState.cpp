#include <catch2/catch.hpp>

#include "../DroneState.cpp"

TEST_CASE( "Checking that values in Drone State after Status update", "[DroneState]" ) {

    Status *statOne = new Status(3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3);
    DroneState *ds = new DroneState();

    ds->updateFlyingInfo(statOne);
    
    SECTION( "Checking updateFlyingInfo()" ) {
        REQUIRE( ds->getPitch() == 3);
        REQUIRE( ds->getRoll() == 3);
        REQUIRE( ds->getYaw() == 3);
        REQUIRE( ds->getSpeedX() == 3);
        REQUIRE( ds->getSpeedY() == 3);
        REQUIRE( ds->getSpeedZ() == 3);
        REQUIRE( ds->getLowTemperature() == 3);
        REQUIRE( ds->getHighTemperature() == 3);
        REQUIRE( ds->getFlightDistance() == 3);
        REQUIRE( ds->getHeight() == 3);
        REQUIRE( ds->getBatteryPercentage() == 3);
        REQUIRE( ds->getBarometerMeasurement() == 3);
        REQUIRE( ds->getAccelerationX() == 3);
        REQUIRE( ds->getAccelerationY() == 3);
        REQUIRE( ds->getAccelerationZ() == 3);
    }

    SECTION( "Checking if the drone is in command mode" ) {
        REQUIRE( ds->isInCommandMode() == true);
    }

    delete statOne;
    delete ds;
}