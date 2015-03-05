#include <MazebusterIR.h>
#include <MedianFilter.h>
#include <iirFilter.h>
#include <firFilter.h>
//#include <DistanceGP2Y0A21YK.h>

MedianFilter Filter;
iirFilter Filter2;
firFilter Filter3;

#define SENSOR_IR_FRONT_LEFT A1
#define SENSOR_IR_FRONT_MIDDLE A0
#define SENSOR_IR_FRONT_RIGHT A2
#define SENSOR_IR_LEFT A3
#define SENSOR_IR_RIGHT A4

MazebusterIR irFrontLeft(SENSOR_IR_FRONT_LEFT, 1, 25, 93);
MazebusterIR irFrontMiddle(SENSOR_IR_FRONT_MIDDLE, 11, 25, 93);
MazebusterIR irFrontRight(SENSOR_IR_FRONT_RIGHT, 2, 25, 93);
MazebusterIR irLeft(SENSOR_IR_LEFT, 3, 25, 93);
MazebusterIR irRight(SENSOR_IR_RIGHT, 4, 25, 93);

//DistanceGP2Y0A21YK frontLeft;
//DistanceGP2Y0A21YK frontRight;

double sensorReadings[6] = {};

void setup(){
  Serial.begin(9600);
//  frontLeft.begin(SENSOR_IR_FRONT_LEFT);
//  frontRight.begin(SENSOR_IR_FRONT_RIGHT);
  Filter.begin();
  Filter2.begin();
  Filter3.begin();
  pinMode(SENSOR_IR_FRONT_LEFT, INPUT);
  pinMode(SENSOR_IR_FRONT_MIDDLE, INPUT);
  pinMode(SENSOR_IR_FRONT_RIGHT, INPUT);
  pinMode(SENSOR_IR_LEFT, INPUT);
  pinMode(SENSOR_IR_RIGHT, INPUT);
}

void loop(){
  readAllSensors();
  
  Serial.print("1 ");
  
  for(int i=0; i<4; i++){
//    double x = analogRead(SENSOR_IR_FRONT_LEFT);
//    Serial.print(x);
    Serial.print(sensorReadings[i]);
    Serial.print(" ");

  }
  Serial.println();
}

void readAllSensors(){

//  sensorReadings[0] = irFrontLeft.distance();
//  sensorReadings[4] = irFrontMiddle.distance();
//  sensorReadings[5] = irFrontRight.distance();
//  sensorReadings[4] = irLeft.distance();
//  sensorReadings[5] = irRight.distance();
  
//  sensorReadings[1] = analogRead(SENSOR_IR_FRONT_MIDDLE);
//  sensorReadings[2] = analogRead(SENSOR_IR_FRONT_RIGHT);
//  sensorReadings[3] = analogRead(SENSOR_IR_LEFT);
//  sensorReadings[4] = analogRead(SENSOR_IR_RIGHT);
//  delay(500);

//  int x = analogRead(SENSOR_IR_FRONT_LEFT);

//  int filtered = Filter.run(x);
//  sensorReadings[1] = filtered;
//  filtered = Filter2.run(x);
//  sensorReadings[2] = filtered;
//  int filtered = Filter3.run(x);
//  sensorReadings[3] = filtered;
//  sensorReadings[0] = frontLeft.getDistanceCentimeter2();
//  sensorReadings[1] = frontLeft.getDistanceCentimeterMedian();
//  sensorReadings[2] = frontRight.getDistanceCentimeter2();
//  sensorReadings[3] = frontRight.getDistanceCentimeterMedian();
 // sensorReadings[0] = irFrontLeft.distance();
  sensorReadings[1] = irFrontLeft.distanceMedian();
 // sensorReadings[2] = irFrontRight.distance();
  sensorReadings[3] = irFrontRight.distanceMedian();
//  int x = frontLeft.getDistanceCentimeterMedian();
//  sensorReadings[1] = x;
//  sensorReadings[2] = Filter3.run(x);
}