/*
MPU6050.cpp - Library for MPU6050 digital motion processor
Created by Abrew Abraham Alex,12-5-2017
Released in to public domain
*/


#include "Arduino.h"
#include "MPU6050.h"


void MPU6050::startMPU()
{
    Wire.beginTransmission(0b1101000);
    Wire.write(0x6B);
    Wire.write(0b00000000);
    Wire.endTransmission();

    Wire.beginTransmission(0b1101000);
    Wire.write(0x1B);
    Wire.write(0x00000000);
    Wire.endTransmission();

    Wire.beginTransmission(0b1101000);
    Wire.write(0x1C);
    Wire.write(0b00000000);
    Wire.endTransmission();
}

///////////////////////////////////////////////////////////////////////////////////////////////

void startAccelometer()
{
    Wire.beginTransmission(0b1101000);
    Wire.write(0x3B);
    Wire.endTransmission();
}

void startGyroscope()
{
    Wire.beginTransmission(0b1101000);
    Wire.write(0x43);
    Wire.endTransmission();
}

/////////////////////////////////////////////////////////////////////////////////////////

float MPU6050::AccelX()
{
    startAccelometer();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _accelX = Wire.read()<<8|Wire.read();
    //_accelY = Wire.read()<<8|Wire.read();
    //_accelZ = Wire.read()<<8|Wire.read();

    return((_accelX / 16384.0));
}

float MPU6050::AccelY()
{
    startAccelometer();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _accelX = Wire.read()<<8|Wire.read();
    _accelY = Wire.read()<<8|Wire.read();
    //_accelZ = Wire.read()<<8|Wire.read();

    return((_accelY / 16384.0));
}

float MPU6050::AccelZ()
{
    startAccelometer();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _accelX = Wire.read()<<8|Wire.read();
    _accelY = Wire.read()<<8|Wire.read();
    _accelZ = Wire.read()<<8|Wire.read();

    return((_accelZ / 16384.0));
}

////////////////////////////////////////////////////////////////////////////////////////

float MPU6050::GyroX()
{
    startGyroscope();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _gyroX = Wire.read()<<8|Wire.read();
    //_gyroY = Wire.read()<<8|Wire.read();
    //_gyroZ = Wire.read()<<8|Wire.read();

    return((_gyroX/131.0));
}

float MPU6050::GyroY()
{
    startGyroscope();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _gyroX = Wire.read()<<8|Wire.read();
    _gyroY = Wire.read()<<8|Wire.read();
    //_gyroZ = Wire.read()<<8|Wire.read();

    return((_gyroY/131.0));
}

float MPU6050::GyroZ()
{
    startGyroscope();

    Wire.requestFrom(0b1101000,6);
    while(Wire.available() < 6);
    _gyroX = Wire.read()<<8|Wire.read();
    _gyroY = Wire.read()<<8|Wire.read();
    _gyroZ = Wire.read()<<8|Wire.read();

    return((_gyroZ/131.0));
}
