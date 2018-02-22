#include "main.h"
#include "Lift.h"

void SetLiftUp(int speed){
  motorSet(LeftTopBottomLiftMotors, speed);
  motorSet(RightTopLiftMotor, -speed);
  motorSet(RightBottomLiftMotor, -speed);
}

void SetLiftDown(int speed){
  motorSet(LeftTopBottomLiftMotors, -speed);
  motorSet(RightTopLiftMotor, speed);
  motorSet(RightBottomLiftMotor, speed);
}

void StopLift(){
  motorSet(LeftTopBottomLiftMotors, 0);
  motorSet(RightTopLiftMotor, 0);
  motorSet(RightBottomLiftMotor, 0);
}
