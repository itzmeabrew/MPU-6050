/*
 FILE: mpu6050_example.ino
 AUTHOR: Abrew Abraham Alex
 VERSION: V1.0
 PURPOSE: MPU6050 library test sketch for MPU 6050 and Arduino

 >>Connect VCC -> 5V
           GND -> GND
           SDA -> SDA
           SCL -> SCL
           
 Released to the public domain

 */


//#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;    
           
float accelx,accely,accelz;
float gyrox,gyroy,gyroz;


void setup() 
{
 mpu.startMPU();
 Serial.begin(9600);
}

void loop() 
{
  accelx=mpu.AccelX();
  accely=mpu.AccelY();
  accelz=mpu.AccelZ();

  gyrox=mpu.GyroX();
  gyroy=mpu.GyroY();
  gyroz=mpu.GyroZ();

  Serial.println("Aceelometer data");
  Serial.print(accelx);
  Serial.print(accely);
  Serial.print(accelz);

  Serial.print("Gyroscope data");
  Serial.print(gyrox);
  Serial.print(gyrox);
  Serial.print(gyrox);
}
