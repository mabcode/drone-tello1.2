#include "Status.hpp"
#include <stdio.h>
#include <string>
#include <sstream>

Status::Status(int pitch, int roll, int yaw, int speedX, int speedY, int speedZ, int lowTemperature, int highTemperature, int flightDistance, int height, int batteryPercentage, double barometerMeasurement, int motorTime, double accelerationX, double accelerationY, double accelerationZ)
{
    this->pitch = pitch;
    this->roll = roll;
    this->yaw = yaw;
    this->speedX = speedX;
    this->speedY = speedY;
    this->speedZ = speedZ;
    this->lowTemperature = lowTemperature;
    this->highTemperature = highTemperature;
    this->flightDistance = flightDistance;
    this->height = height;
    this->batteryPercentage = batteryPercentage;
    this->barometerMeasurement = barometerMeasurement;
    this->motorTime = motorTime;
    this->accelerationX = accelerationX;
    this->accelerationY = accelerationY;
    this->accelerationZ = accelerationZ;
}

Status::Status(){
    this->pitch = 0;
    this->roll = 0;
    this->yaw = 0;
    this->speedX = 0;
    this->speedY = 0;
    this->speedZ = 0;
    this->lowTemperature = 0;
    this->highTemperature = 0;
    this->flightDistance = 0;
    this->height = 0;
    this->batteryPercentage = 0;
    this->barometerMeasurement = 0;
    this->motorTime = 0;
    this->accelerationX = 0;
    this->accelerationY = 0;
    this->accelerationZ = 0;
}

Status::Status(std::string data)
{
    parseData(data);
}

std::string Status::getMessageText()
{
    std::string status;

    status = "mid " + std::to_string(-1)
            + " x " + std::to_string(0)
            + " y " + std::to_string(0)
            + " z " + std::to_string(0)
            + " mpry " + std::to_string(0) + " " +std::to_string(0)+ " " +std::to_string(0)
            + " pitch " + std::to_string(pitch)
            + " roll " + std::to_string(roll)
            + " yaw " + std::to_string(yaw)
            + " vgx " + std::to_string(speedX)
            + " vgy " + std::to_string(speedY)
            + " vgz " + std::to_string(speedZ)
            + " templ " + std::to_string(lowTemperature)
            + " temph " + std::to_string(highTemperature)
            + " tof " + std::to_string(flightDistance)
            + " h " + std::to_string(height)
            + " bat " + std::to_string(batteryPercentage)
            + " baro " + std::to_string((int)barometerMeasurement)
            + " time " + std::to_string(motorTime)
            + " agx " + std::to_string((int)accelerationX)
            + " agy " + std::to_string((int)accelerationY)
            + " agz " + std::to_string((int)accelerationZ);
    return status;
}

std::string Status::getMessageType() 
{
     return "status"; 
}

int Status::getPitch()
{
    return pitch;
}

int Status::getRoll()
{
    return roll;
}

int Status::getYaw()
{
    return yaw;
}

int Status::getSpeedX()
{
    return speedX;
}

int Status::getSpeedY()
{
    return speedY;
}

int Status::getSpeedZ()
{
    return speedZ;
}

double Status::getAccelerationX()
{
    return accelerationX;
}

double Status::getAccelerationY()
{
    return accelerationY;
}

double Status::getAccelerationZ()
{
    return accelerationZ;
}

int Status::getLowTemperature()
{
    return lowTemperature;
}

int Status::getHighTemperature()
{
    return highTemperature;
}

int Status::getFlightDistance()
{
    return flightDistance;
}

int Status::getHeight()
{
    return height;
}

int Status::getBatteryPercentage()
{
    return batteryPercentage;
}

double Status::getBarometerMeasurement()
{
    return barometerMeasurement;
}

int Status::getMotorTime()
{
    return motorTime;
}

void Status::parseData(std::string data)
{
    if (data == "" || data.empty())
        return;

    int na=0;
    std::string cmd;
    std::stringstream ss(data);

    ss  >> cmd >> na
        >> cmd >> na
        >> cmd >> na
        >> cmd >> na    
        >> cmd >> na >> na >> na    
        >> cmd >> this->pitch
        >> cmd >> this->roll
        >> cmd >> this->yaw  
        >> cmd >> this->speedX    
        >> cmd >> this->speedY
        >> cmd >> this->speedZ
        >> cmd >> this->lowTemperature
        >> cmd >> this->highTemperature
        >> cmd >> this->flightDistance
        >> cmd >> this->height
        >> cmd >> this->batteryPercentage
        >> cmd >> this->barometerMeasurement
        >> cmd >> this->motorTime
        >> cmd >> this->accelerationX
        >> cmd >> this->accelerationY
        >> cmd >> this->accelerationZ;
}
