#include "main.h"
#include "Lift.h"
#include "KBotVars.hpp"

//Intake Lift
void IntakeiftUp(int speed){
  	motorSet(IntakeLiftMotor, -speed);
}

void IntakeLiftDown(int speed){
  	motorSet(IntakeLiftMotor, speed);
}

void IntakeLiftStop(){
  motorSet(IntakeLiftMotor, 0);
}


//Actual Intake
void IntkeIn(int speed){
  motorSet(IntakeMotor, speed);
}

void IntakeOut(int speed){
  motorSet(IntakeMotor, -speed);
}

void IntakeStop(){
  motorSet(IntakeMotor, 0);
}
