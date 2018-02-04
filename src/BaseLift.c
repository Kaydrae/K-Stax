void BaseMotorLiftUp(int speed){
  motorSet(LeftBaseLiftMotor, -speed);
  motorSet(RightBaseLiftMotor, speed);
}

void BaseMotorLiftDown(int speed){
  motorSet(LeftBaseLiftMotor, speed);
  motorSet(RightBaseLiftMotor, -speed);
}

void BaseMotorLiftStop(){
  motorSet(LeftBaseLiftMotor, speed);
  motorSet(RightBaseLiftMotor, speed);
}
