#include <catch2/catch.hpp>
#include "../Status.cpp"

TEST_CASE( "Checking that values in Status constructor with values provided", "[Status1]" ) {

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
    delete stat;
}

TEST_CASE( "Checking that values in Status constructor with string provided", "[Status2]" ) {

    Status *stat = new Status("mid 0 x 0 y 0 z 0 mpry 0 0 0 pitch 12 roll 12 yaw 12 vgx 12 vgy 12 vgz 12 templ 12 temph 12 tof 12 h 12 bat 12 baro 12 time 12 agx 12 agy 12 agz 12");

    SECTION( "Checking the value of pitch after creation" ) {
        REQUIRE( stat->getPitch() == 12);
    }
    SECTION( "Checking the value of roll after creation" ) {
        REQUIRE( stat->getRoll() == 12);
    }
    SECTION( "Checking the value of yaw after creation" ) {
        REQUIRE( stat->getYaw() == 12);
    }
    SECTION( "Checking the value of speedX after creation" ) {
        REQUIRE( stat->getSpeedX() == 12);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getSpeedY() == 12);
    }
    SECTION( "Checking the value of speedZ after creation" ) {
        REQUIRE( stat->getPitch() == 12);
    }
    SECTION( "Checking the value of low temp after creation" ) {
        REQUIRE( stat->getLowTemperature() == 12);
    }
    SECTION( "Checking the value of high temp after creation" ) {
        REQUIRE( stat->getHighTemperature() == 12);
    }
    SECTION( "Checking the value of flight distance after creation" ) {
        REQUIRE( stat->getFlightDistance() == 12);
    }
    SECTION( "Checking the value of height after creation" ) {
        REQUIRE( stat->getHeight() == 12);
    }
    SECTION( "Checking the value of battery percentage after creation" ) {
        REQUIRE( stat->getBatteryPercentage() == 12);
    }
    SECTION( "Checking the value of barometer after creation" ) {
        REQUIRE( stat->getBarometerMeasurement() == 12);
    }
    SECTION( "Checking the value of motor time after creation" ) {
        REQUIRE( stat->getMotorTime() == 12);
    }
    SECTION( "Checking the value of accelerationX after creation" ) {
        REQUIRE( stat->getAccelerationX() == 12);
    }
    SECTION( "Checking the value of accelerationY after creation" ) {
        REQUIRE( stat->getAccelerationY() == 12);
    }
    SECTION( "Checking the value of accelerationZ after creation" ) {
        REQUIRE( stat->getAccelerationZ() == 12);
    }
    delete stat;
}

TEST_CASE( "Checking that values in Status constructor with nothing provided", "[Status3]" ) {

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
    delete stat;
}

TEST_CASE( "Checking getMessageText()", "[getMessageText]" ) {
     Status *stat = new Status("mid -1 x 0 y 0 z 0 mpry 0 0 0 pitch 12 roll 12 yaw 12 vgx 12 vgy 12 vgz 12 templ 12 temph 12 tof 12 h 12 bat 12 baro 12 time 12 agx 12 agy 12 agz 12");

    SECTION( "Checking return value after message is created" ) {
        REQUIRE( stat->getMessageText()== "mid -1 x 0 y 0 z 0 mpry 0 0 0 pitch 12 roll 12 yaw 12 vgx 12 vgy 12 vgz 12 templ 12 temph 12 tof 12 h 12 bat 12 baro 12 time 12 agx 12 agy 12 agz 12");
    }

     delete stat;
}

TEST_CASE( "Checking getMessageType()", "[getMessageType]" ) {
     Status *stat = new Status();

    SECTION( "Checking return value after message is created" ) {
        REQUIRE( stat->getMessageType()== "status");
    }

     delete stat;
}