//#include <SoftwareSerial.h>
//#include "RoboClaw.h"
//
//// Pin and RoboClaw Setup
//RoboClaw roboclaw1 = RoboClaw(&Serial1, 10000);
//RoboClaw roboclaw2 = RoboClaw(&Serial2, 10000);
//RoboClaw roboclaw3 = RoboClaw(&Serial3, 10000);
//
//// Variable setup
//#define add1 0x80
//#define add2 0x81
//#define add3 0x82
//
//void setup() {
////  Serial.begin(38400);
//  roboclaw1.begin(38400);
//  roboclaw2.begin(38400);
//  roboclaw3.begin(38400);
////  Serial.println("STARTED");
////
////  roboclaw1.ForwardM1(address,30); //start Motor1 forward at half speed
////  roboclaw2.ForwardM1(address,30);
////  roboclaw3.ForwardM1(address,30);
//}
//
//void loop() {
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,2000,0,0,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,2000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,2000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,2000,0,0,1);
//  delay(2000);
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,2000,0,726,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,2000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,2000,0,726,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,2000,0,0,1);
//  delay(2000);
////  roboclaw1.ForwardM1(add1,30);
////  roboclaw2.ForwardM1(add2,30);
////  roboclaw3.ForwardM1(add3,30);
////  roboclaw1.ForwardM2(add1,30);
////  roboclaw2.ForwardM2(add2,30);
////  roboclaw3.ForwardM2(add3,30);
//  delay(2000);
//  roboclaw1.ForwardM1(add1,0);
//  roboclaw2.ForwardM1(add2,0);
//  roboclaw3.ForwardM1(add3,0);
//  roboclaw1.ForwardM2(add1,0);
//  roboclaw2.ForwardM2(add2,0);
//  roboclaw3.ForwardM2(add3,0);
//  roboclaw1.SpeedAccelDeccelPositionM1(add1,0,2000,0,0,1);
//  roboclaw1.SpeedAccelDeccelPositionM2(add1,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM1(add2,0,2000,0,0,1);
//  roboclaw2.SpeedAccelDeccelPositionM2(add2,0,2000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM1(add3,0,2000,0,0,1);
//  roboclaw3.SpeedAccelDeccelPositionM2(add3,0,2000,0,0,1);
//  delay(2000);
////  roboclaw1.BackwardM1(add1,30);
////  roboclaw2.BackwardM1(add2,30);
////  roboclaw3.BackwardM1(add3,30);
////  roboclaw1.BackwardM2(add1,30);
////  roboclaw2.BackwardM2(add2,30);
////  roboclaw3.BackwardM2(add3,30);
////  delay(2000);
//  
//}
//
//
//
////void loop() {
//////  int32_t posData = roboclaw1.ReadEncM1(address);
//////  int32_t speedData = roboclaw1.ReadSpeedM1(address);
//////  delay(2000);
//////  roboclaw1.SpeedAccelDeccelPositionM1(address,0,2000,0,0,1);
//////  delay(1000);
//////  roboclaw1.SpeedAccelDeccelPositionM1(address,0,2000,0,1452,1);
////
////
//////  if (posData >= 1425.2) {
//////    roboclaw1.ResetEncoders(address);
//////  }  
////  
//////  Serial.println(posData);
//////  Serial.println(speedData);
//} 
