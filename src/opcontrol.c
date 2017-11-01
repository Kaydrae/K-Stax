/** @file opcontrol.c
 * @brief File for operator control code
 *
 * This file should contain the user operatorControl() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"

/*
 * Runs the user operator control code. This function will be started in its own task with the
 * default priority and stack size whenever the robot is enabled via the Field Management System
 * or the VEX Competition Switch in the operator control mode. If the robot is disabled or
 * communications is lost, the operator control task will be stopped by the kernel. Re-enabling
 * the robot will restart the task, not resume it from where it left off.
 *
 * If no VEX Competition Switch or Field Management system is plugged in, the VEX Cortex will
 * run the operator control task. Be warned that this will also occur if the VEX Cortex is
 * tethered directly to a computer via the USB A to A cable without any VEX Joystick attached.
 *
 * Code running in this task can take almost any action, as the VEX Joystick is available and
 * the scheduler is operational. However, proper use of delay() or taskDelayUntil() is highly
 * recommended to give other tasks (including system tasks such as updating LCDs) time to run.
 *
 * This task should never exit; it should end with some kind of infinite loop, even if empty.
 */
void operatorControl() {
	while (1) {
		int power, turn;
		/*
		Start of base
		*/
		power = joystickGetAnalog(1, 1); //horizontal axis on left joystick
		turn  = joystickGetAnalog(1, 2); //vertical axis on left joystick
		motorSet(LeftBaseFrontBackMotors, power + turn); //set left wheels
		motorSet(RightBaseBackMotor , power - turn); //set right back wheel
		motorSet(RightBaseFrontMotor, power - turn);//set right front wheel
		/*
		End of base
		*/

		/*
		Start of lift
		*/
		// add the following logic:
	 if(joystickGetDigital(1, 6, JOY_UP)) {
		 motorSet(LeftTopBottomLiftMotors, 127);
		 motorSet(RightTopLiftMotor, -127);
		 motorSet(RightBottomLiftMotor, -127);
	 }
	 else if(joystickGetDigital(1, 6, JOY_DOWN)) {
		 motorSet(LeftTopBottomLiftMotors, -127);
		 motorSet(RightTopLiftMotor, 127);
		 motorSet(RightBottomLiftMotor, 127);
	 }
	 else {
		 motorSet(LeftTopBottomLiftMotors, 0);
		 motorSet(RightTopLiftMotor, 0);
		 motorSet(RightBottomLiftMotor, 0);
	 }
		/*
		End of lift
		*/

		/*
		Start of intake lift
		*/
		if(joystickGetDigital(1, 8, JOY_UP)) {
			motorSet(IntakeLiftMotor, -127);
		}
		else if(joystickGetDigital(1, 8, JOY_DOWN)) {
			motorSet(IntakeLiftMotor, 127);
		}
		else {
			motorSet(IntakeLiftMotor, 0);
		}
		/*
		End of intake lift
		*/

		/*
		Start of Intake
		*/
		if(joystickGetDigital(1, 8, JOY_LEFT)) {
			motorSet(IntakeMotor, 127);
		}
		else if(joystickGetDigital(1, 8, JOY_RIGHT)) {
			motorSet(IntakeMotor, -127);
		}
		else {
			motorSet(IntakeMotor, 0);
		}
		/*
		End of Intake
		*/

		/*
		Start of base mover
		*/
		if(joystickGetDigital(1, 5, JOY_UP)) {
			motorSet(LeftBaseMotor, -127);
			motorSet(RightBaseMotor, 127);
		}
		else if(joystickGetDigital(1, 5, JOY_DOWN)) {
			motorSet(LeftBaseMotor, 127);
			motorSet(RightBaseMotor, -127);
		}
		else {
			motorSet(LeftBaseMotor, 0);
			motorSet(RightBaseMotor, 0);
		}
		/*
		End of base mover
		*/

		 delay(20);
	}
}
