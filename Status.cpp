#include "Status.hpp"
#include <stdio.h>

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

Status::Status(std::string data)
{
    parseData(data);
}

// std::string getMessageText()
// {
//     std::string status;
//     status.format("mid:-1;x:0;y:0;z:0;mpry:0,0,0;pitch:%s;roll:%s;yaw:%s;" +
//                              "vgx:%s;vgy:%s;vgz:%s;" +
//                              "templ:%s;temph:%s;" +
//                              "tof:%s;h:%s;" +
//                              "bat:%s;baro:%s;" +
//                              "time:%s;" +
//                              "agx:%s;agy:%s;agz:%s",
//                          StringUtils.formatInteger(pitch), StringUtils.formatInteger(roll), StringUtils.formatInteger(yaw),
//                          StringUtils.formatInteger(speedX), StringUtils.formatInteger(speedY), StringUtils.formatInteger(speedZ),
//                          StringUtils.formatInteger(lowTemperature), StringUtils.formatInteger(highTemperature),
//                          StringUtils.formatInteger(flightDistance), StringUtils.formatInteger(height),
//                          StringUtils.formatInteger(batteryPercentage), StringUtils.formatDouble(barometerMeasurement),
//                          StringUtils.formatInteger(motorTime),
//                          StringUtils.formatDouble(accelerationX), StringUtils.formatDouble(accelerationY), StringUtils.formatDouble(accelerationZ));
//     return status;
// }

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