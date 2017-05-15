/*
MPU6050.h - Header file for MPU6050 digital motion processor
Created by Abrew Abraham Alex,12-5-2017
Released in to public domain
*/

#ifndef MPU6050_h
#define MPU6050_h
#include "Arduino.h"
#include<Wire.h>

class MPU6050
{
public:
    void startMPU();

    float AccelX();
    float AccelY();
    float AccelZ();

    float GyroX();
    float GyroY();
    float GyroZ();

private:
    long _accelX, _accelY, _accelZ;
    long _gyroX, _gyroY, _gyroZ;
};

#endif // MPU6050_h
