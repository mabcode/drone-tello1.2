#pragma once

#include "Status.hpp"

class DroneState
{

  private:
    bool inCommandMode;
    bool droneTakenOff;
    bool videoStreamOn;
    double currentFlightTime;
    double positionX;
    double positionY;
    double positionZ;
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
    int orientation;
    void resetState();
    void resetFlyingInfo();

  public:
    DroneState();
    ~DroneState();
    bool isInCommandMode();
    void setInCommandMode(bool inCommandMode);
    bool hasTakenOff();
    void setHasTakenOff(bool hasTakenOff);
    bool isVideoStreamOn();
    void setVideoStreamOn(bool videoStreamOn);
    double getCurrentFlightTime();
    void setCurrentFlightTime(double currentFlightTime);
    void updateFlyingInfo(Status *status);
    void move(double deltaX, double deltaY, double deltaZ);
    void rotate(int deltaOrientation);
    double getPositionX();
    double getPositionY();
    double getPositionZ();
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
    int getOrientation();
};