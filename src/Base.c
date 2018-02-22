#include "main.h"
#include "Base.h"

void DriveForward(int speed, int power, int turn){
  motorSet(LeftBaseFrontBackMotors, speed); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void DriveBackward(int speed, int power, int turn){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void TurnLeft(int speed, int power, int turn){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void TurnRight(int speed, int power, int turn){
  motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
  motorSet(RightBaseBackMotor , power - turn); //set right back wheel
  motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
}

void Stop(){
  motorSet(LeftBaseFrontBackMotors, 0); //set left wheels
  motorSet(RightBaseBackMotor , 0); //set right back wheel
  motorSet(RightBaseFrontMotor, 0);//set right front wheel
}
