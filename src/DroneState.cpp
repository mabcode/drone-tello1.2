#include "DroneState.hpp"
#include <iostream>
#include <string>
#include <cmath>

DroneState::DroneState()
{
    inCommandMode=true;
    resetState();
}
DroneState::~DroneState()
{
    inCommandMode=false;
}

bool DroneState::isInCommandMode()
{
    return inCommandMode;
}
void DroneState::setInCommandMode(bool inCommandMode)
{
    if (this->inCommandMode == inCommandMode)
        return;
    this->inCommandMode = inCommandMode;
    if (!inCommandMode)
        resetState();
}

bool DroneState::hasTakenOff()
{
    return droneTakenOff;
}

void DroneState::setHasTakenOff(bool hasTakenOff)
{
    if (droneTakenOff == hasTakenOff)
        return;

    droneTakenOff = inCommandMode && hasTakenOff;
    if (!droneTakenOff)
        resetFlyingInfo();
}

bool DroneState::isVideoStreamOn()
{
    return videoStreamOn;
}

void DroneState::setVideoStreamOn(bool videoStreamOn)
{
    this->videoStreamOn = inCommandMode && videoStreamOn;
}

double DroneState::getCurrentFlightTime()
{
    return currentFlightTime;
}

void DroneState::setCurrentFlightTime(double currentFlightTime)
{
    if (inCommandMode)
    {
        this->currentFlightTime = currentFlightTime;
    }
}

void DroneState::updateFlyingInfo(Status *status)
{
    if (!inCommandMode) {
        return;
    }
    
    pitch = status->getPitch();
    roll = status->getRoll();
    yaw = status->getYaw();
    speedX = status->getSpeedX();
    speedY = status->getSpeedY();
    speedZ = status->getSpeedZ();
    lowTemperature = status->getLowTemperature();
    highTemperature = status->getHighTemperature();
    flightDistance = status->getFlightDistance();
    height = status->getHeight();
    batteryPercentage = status->getBatteryPercentage();
    barometerMeasurement = status->getBarometerMeasurement();
    motorTime = status->getMotorTime();
    accelerationX = status->getAccelerationX();
    accelerationY = status->getAccelerationY();
    accelerationZ = status->getAccelerationZ();
}

void DroneState::move(double deltaX, double deltaY, double deltaZ)
{
    if (!droneTakenOff)
        return;

    double rotation = ((-orientation * 3.14) / 180);
    double rotatedX = cos(rotation) * deltaX - sin(rotation) * deltaY;
    double rotatedY = sin(rotation) * deltaX + cos(rotation) * deltaY;

    positionX += rotatedX;
    positionY += rotatedY;
    positionZ += deltaZ;
}

void DroneState::rotate(int deltaOrientation)
{
    if (!droneTakenOff)
        return;

    orientation += deltaOrientation;
    orientation = orientation % 360;
}

double DroneState::getPositionX()
{
    return positionX;
}

double DroneState::getPositionY()
{
    return positionY;
}

double DroneState::getPositionZ()
{
    return positionZ;
}

int DroneState::getPitch()
{
    return pitch;
}

int DroneState::getRoll()
{
    return roll;
}

int DroneState::getYaw()
{
    return yaw;
}

int DroneState::getSpeedX()
{
    return speedX;
}

int DroneState::getSpeedY()
{
    return speedY;
}

int DroneState::getSpeedZ()
{
    return speedZ;
}

double DroneState::getAccelerationX()
{
    return accelerationX;
}

double DroneState::getAccelerationY()
{
    return accelerationY;
}

double DroneState::getAccelerationZ()
{
    return accelerationZ;
}

int DroneState::getLowTemperature()
{
    return lowTemperature;
}

int DroneState::getHighTemperature()
{
    return highTemperature;
}

int DroneState::getFlightDistance()
{
    return flightDistance;
}

int DroneState::getHeight()
{
    return height;
}

int DroneState::getBatteryPercentage()
{
    return batteryPercentage;
}

double DroneState::getBarometerMeasurement()
{
    return barometerMeasurement;
}

int DroneState::getMotorTime()
{
    return motorTime;
}

int DroneState::getOrientation()
{
    return orientation;
}

void DroneState::resetState()
{
    videoStreamOn = false;
    droneTakenOff = false;
    resetFlyingInfo();
}

void DroneState::resetFlyingInfo()
{
    currentFlightTime = 0.0;
    positionX = 0.0;
    positionY = 0.0;
    positionZ = 0.0;
    pitch = 0;
    roll = 0;
    yaw = 0;
    speedX = 0;
    speedY = 0;
    speedZ = 0;
    lowTemperature = 0;
    highTemperature = 0;
    flightDistance = 0;
    height = 0;
    batteryPercentage = 0;
    barometerMeasurement = 0.0;
    motorTime = 0;
    accelerationX = 0.0;
    accelerationY = 0.0;
    accelerationZ = 0.0;
    orientation = 0;
}