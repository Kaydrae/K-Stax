#include "main.h"
#include "Base.h"
#include "KBotVars.hpp"

void DriveForward(int speed){
  motorSet(LeftBaseFrontBackMotors, speed); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void DriveBackward(int speed){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void TurnLeft(int speed){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void TurnRight(int speed){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void Stop(){
  motorSet(LeftBaseFrontBackMotors, 0); //set left wheels
  motorSet(RightBaseBackMotor , 0); //set right back wheel
  motorSet(RightBaseFrontMotor, 0);//set right front wheel
}
