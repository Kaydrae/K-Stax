#include "main.h"
#include "Intake.h"

//Intake Lift
void IntakeLiftUp(int speed){
  	motorSet(IntakeLiftMotor, -speed);
}

void IntakeLiftDown(int speed){
  	motorSet(IntakeLiftMotor, speed);
}

void IntakeLiftStop(){
  motorSet(IntakeLiftMotor, 0);
}


//Actual Intake
void IntakeIn(int speed){
  motorSet(IntakeMotor, speed);
}

void IntakeOut(int speed){
  motorSet(IntakeMotor, -speed);
}

void IntakeStop(){
  motorSet(IntakeMotor, 0);
}
