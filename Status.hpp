#pragma once
#include <string>

class Status
{
  private:
    int pitch;
    int roll;
    int yaw;
    int speedX;
    int speedY;
    int speedZ;
    int lowTemperature;
    int highTemperature;
    int flightDistance;
    int height;
    int batteryPercentage;
    double barometerMeasurement;
    int motorTime;
    double accelerationX;
    double accelerationY;
    double accelerationZ;
    // void parseData(std::string data);
    // int parseInteger(std::string expectedLabel, std::string data);
    // double parseDouble(std::string expectedLabel, std::string data);
    // std::string getValueToParse(std::string expectedLabel, std::string data);

  public:
    Status(int pitch, int roll, int yaw, int speedX, int speedY, int speedZ, int lowTemperature, int highTemperature, int flightDistance, int height, int batteryPercentage, double barometerMeasurement, int motorTime, double accelerationX, double accelerationY, double accelerationZ);
    Status(std::string data);
    //std::string getMessageText();
    std::string getMessageType();
    int getPitch();
    int getRoll();
    int getYaw();
    int getSpeedX();
    int getSpeedY();
    int getSpeedZ();
    double getAccelerationX();
    double getAccelerationY();
    double getAccelerationZ();
    int getLowTemperature();
    int getHighTemperature();
    int getFlightDistance();
    int getHeight();
    int getBatteryPercentage();
    double getBarometerMeasurement();
    int getMotorTime();
};