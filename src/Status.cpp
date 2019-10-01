#include "Status.hpp"
#include <stdio.h>
#include <string>

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

// Status::Status(std::string data)
// {
//     parseData(data);
// }

std::string Status::getMessageText()
{
    std::string status;

    status = "mid " + std::to_string(-1)
            + " x " + std::to_string(0)
            + " y " + std::to_string(0)
            + " z " + std::to_string(0)
            + " mpry " + std::to_string(0) + " " +std::to_string(0)+ " " +std::to_string(0)+ " " +std::to_string(0)
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
            + " baro " + std::to_string(barometerMeasurement)
            + " time " + std::to_string(motorTime)
            + " agx " + std::to_string(accelerationX)
            + " agy " + std::to_string(accelerationY)
            + " agz " + std::to_string(accelerationZ);
    return status;
}

std::string Status::getMessageType() { return "status"; }

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


// void Status::parseData(std::string data)
// {
//     if (data == "" || data.empty())
//         return;

//     String[] stateFields = data.trim().split(";");
//     if (stateFields.length != 21)
//     {
//         return;
//     }

//     pitch = parseInteger("pitch", stateFields[5]);
//     roll = parseInteger("roll", stateFields[6]);
//     yaw = parseInteger("yaw", stateFields[7]);
//     speedX = parseInteger("vgx", stateFields[8]);
//     speedY = parseInteger("vgy", stateFields[9]);
//     speedZ = parseInteger("vgz", stateFields[10]);
//     lowTemperature = parseInteger("templ", stateFields[11]);
//     highTemperature = parseInteger("temph", stateFields[12]);
//     flightDistance = parseInteger("tof", stateFields[13]);
//     height = parseInteger("h", stateFields[14]);
//     batteryPercentage = parseInteger("bat", stateFields[15]);
//     barometerMeasurement = parseDouble("baro", stateFields[16]);
//     motorTime = parseInteger("time", stateFields[17]);
//     accelerationX = parseDouble("agx", stateFields[18]);
//     accelerationY = parseDouble("agy", stateFields[19]);
//     accelerationZ = parseDouble("agz", stateFields[20]);
// }

// Integer parseInteger(String expectedLabel, String data)
// {
//     String valueToParse = getValueToParse(expectedLabel, data);
//     if (valueToParse == null)
//         return null;

//     Integer result = null;
//     try
//     {
//         result = Integer.parseInt(valueToParse);
//     }
//     catch (NumberFormatException e)
//     {
//         // TODO: handle error, i.e., log it
//     }
//     return result;
// }


// Double parseDouble(String expectedLabel, String data)
// {
//     String valueToParse = getValueToParse(expectedLabel, data);
//     if (valueToParse == null)
//         return null;

//     Double result = null;
//     try
//     {
//         result = Double.parseDouble(valueToParse);
//     }
//     catch (NumberFormatException e)
//     {
//         // TODO: handle error, i.e., log it
//     }
//     return result;
// }

// private
// String getValueToParse(String expectedLabel, String data)
// {
//     if (expectedLabel == null || expectedLabel.isEmpty() || data == null || data.isEmpty())
//         return null;

//     String[] parts = data.split(":");
//     if (parts.length != 2)
//         return null;

//     if (!parts[0].trim().equals(expectedLabel))
//         return null;

//     return parts[1].trim();
// }