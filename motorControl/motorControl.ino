//// Motor Control of 6 DC motors via 3 dual-channel 2x15A roboclaws

#include <SoftwareSerial.h>
#include "RoboClaw.h"//

//// Pin and RoboClaw Setup
RoboClaw roboclaw1 = RoboClaw(&Serial1, 10000);
RoboClaw roboclaw2 = RoboClaw(&Serial2, 10000);
RoboClaw roboclaw3 = RoboClaw(&Serial3, 10000);

// Variable setup
#define add1 0x80
#define add2 0x81
#define add3 0x82
int posData[6];

void setup() {
//Open roboclaw serial ports
  roboclaw1.begin(38400);
  roboclaw2.begin(38400);
  roboclaw3.begin(38400);
  delay(7000);
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,1000,0,0,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,1000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,1000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,1000,0,0,1);
//  delay(3000);
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,1000,0,726,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,1000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,1000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,1000,0,0,1);
}

void loop() {
//  forwards(20);
//  delay(2100);
//  backwards(80);
//  delay(3000);
////  getPosition();
////  resetEncoderPosition();
////  writeHome();
////  delay(10000);
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,1000,0,726,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,1000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,1000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,1000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,1000,0,0,1);
//  delay(10000);
//
  roboclaw1.BackwardM1(add1,80); //start Motor1 forward at half speed
  roboclaw2.BackwardM2(add2,80); //start Motor4 backward at half speed
  roboclaw3.BackwardM1(add3,80); //start Motor5 forward at half speed
  delay(800);
  roboclaw1.BackwardM2(add1,80); //start Motor2 backward at half speed
  roboclaw2.BackwardM1(add2,80); //start Motor3 forward at half speed
  roboclaw3.BackwardM2(add3,80); //start Motor6 backward at half speed
//  walk();
}

//void walk(){
//  getPosition();
//  resetEncoderPosition();
//  roboclaw1.BackwardM1(add1,80); //start Motor1 forward at half speed
//  roboclaw2.BackwardM2(add2,80); //start Motor4 backward at half speed
//  roboclaw3.BackwardM1(add3,80); //start Motor5 forward at half speed
//  if (posData[1] == 0) {
//    roboclaw1.BackwardM2(add1,0); //start Motor2 backward at half speed
//    roboclaw2.BackwardM1(add2,0); //start Motor3 forward at half speed
//    roboclaw3.BackwardM2(add3,0); //start Motor6 backward at half speed
//  }
//  if (posData[0] > 1400) {
//    roboclaw1.BackwardM2(add1,80); //start Motor2 backward at half speed
//    roboclaw2.BackwardM1(add2,80); //start Motor3 forward at half speed
//    roboclaw3.BackwardM2(add3,80); //start Motor6 backward at half speed
//  }
//  if (posData[0] == 0) {
//    roboclaw1.BackwardM1(add1,0); //start Motor1 forward at half speed
//    roboclaw2.BackwardM2(add2,0); //start Motor4 backward at half speed
//    roboclaw3.BackwardM1(add3,0); //start Motor5 forward at half speed
//  }  
//}

void forwards(int speed) {
  // Move the motors forward by a certain speed, all 6
  roboclaw1.ForwardM1(add1,speed); //start Motor1 forward at given speed
  roboclaw1.ForwardM2(add1,speed); //start Motor2 forward given speed
  roboclaw2.ForwardM1(add2,speed); //start Motor1 forward at given speed
  roboclaw2.ForwardM2(add2,speed); //start Motor2 forward at given speed
  roboclaw3.ForwardM1(add3,speed); //start Motor1 forward at given speed
  roboclaw3.ForwardM2(add3,speed); //start Motor2 forward at given speed
}

void stop(int speed) {
  forwards(0);
}

void backwards(int speed) {
  // Move the motors backwards by a certain speed, all 6
  roboclaw1.BackwardM1(add1,speed); //start Motor1 forward at half speed
  roboclaw1.BackwardM2(add1,speed); //start Motor2 backward at half speed
  roboclaw2.BackwardM1(add2,speed); //start Motor1 forward at half speed
  roboclaw2.BackwardM2(add2,speed); //start Motor2 backward at half speed
  roboclaw3.BackwardM1(add3,speed); //start Motor1 forward at half speed
  roboclaw3.BackwardM2(add3,speed); //start Motor2 backward at half speed
}

////Display Encoder and Speed for Motor 1
//void getSpeed() {
//  // Get speed of each motor via encoders
//  int32_t speed1 = roboclaw1.ReadSpeedM1(add1);
//  int32_t speed2 = roboclaw1.ReadSpeedM2(add1);
//  int32_t speed3 = roboclaw2.ReadSpeedM1(add2);
//  int32_t speed4 = roboclaw2.ReadSpeedM2(add2);
//  int32_t speed5 = roboclaw3.ReadSpeedM1(add3);
//  int32_t speed6 = roboclaw3.ReadSpeedM2(add3);
//}
//
void getPosition() {
  // Get position of each motor via encoders
  posData[0] = roboclaw1.ReadEncM1(add1);
  posData[1] = roboclaw1.ReadEncM2(add1);
  posData[2] = roboclaw2.ReadEncM1(add2);
  posData[3] = roboclaw2.ReadEncM2(add2);
  posData[4] = roboclaw3.ReadEncM1(add3);
  posData[5] = roboclaw3.ReadEncM2(add3);
}

void writeHome() {
  // Move the motors to a specific position
  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,1000,0,0,1);
  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,1000,0,0,1);
  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,1000,0,0,1);
  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,1000,0,0,1);
  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,1000,0,0,1);
  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,1000,0,0,1);
}

void resetEncoderPosition() {
//  bool isZero; // is the motor zeroed
//  
//  for(int i=0;i=5;i++) {  // check each encoder to see if they're zeroed
//    if (posData[i] != 0) {
//      isZero = false;
//    }
//  }
  if (posData[0] >= 1425.2) {
    roboclaw1.SetEncM1(add1,0);
  }
  if (posData[1] >= 1425.2) {
    roboclaw1.SetEncM2(add1,0);
  }
  if (posData[2] >= 1425.2) {
    roboclaw2.SetEncM1(add2,0);
  }
  if (posData[3] >= 1425.2) {
    roboclaw2.SetEncM2(add2,0);
  }
  if (posData[4] >= 1425.2) {
    roboclaw3.SetEncM1(add3,0);
  }
  if (posData[5] >= 1425.2) {
    roboclaw3.SetEncM2(add3,0);
  }
}
