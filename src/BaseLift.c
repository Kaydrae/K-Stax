#include "main.h"
#include "BaseLift.h"

void BaseMotorLiftUp(int speed){
  motorSet(LeftBaseLiftMotor, -speed);
  motorSet(RightBaseLiftMotor, speed);
}

void BaseMotorLiftDown(int speed){
  motorSet(LeftBaseLiftMotor, speed);
  motorSet(RightBaseLiftMotor, -speed);
}

void BaseMotorLiftStop(){
  motorSet(LeftBaseLiftMotor, 0);
  motorSet(RightBaseLiftMotor, 0);
}
