#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorNone, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorNone, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

task main()
{
  while (true)
  {
    getJoystickSettings(joystick);

    motor[motorD] = joystick.joy1_y1;
    motor[motorE] = joystick.joy1_y2;

    if (joystick.joy1_Buttons & (1 << 4))
      servo[servo1] = 0;
    else if (joystick.joy1_Buttons & (1 << 5))
      servo[servo1] = 255;

    if (joystick.joy1_Buttons & (1 << 6))
      servo[servo2] = 64;
    else if (joystick.joy1_Buttons & (1 << 7))
      servo[servo2] = 192;
  }
}
