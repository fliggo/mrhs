#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(Tetrix)

task main()
{
  motor[motorD] = 100;
  motor[motorE] = 100;
  wait1Msec(1000);

  motor[motorD] = -50;
  motor[motorE] = -50;
  wait1Msec(1000);

  PlaySound(soundBeepBeep);
}
