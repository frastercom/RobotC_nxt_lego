#pragma config(Sensor, port2,  Color,          sensorVexIQ_ColorGrayscale)
#pragma config(Sensor, port5,  IR,             sensorVexIQ_Distance)
#pragma config(Sensor, port7,  Gyro,           sensorVexIQ_Gyro)
#pragma config(Sensor, port11, Bumper,         sensorVexIQ_Touch)
#pragma config(Motor,  motor1,          LM,            tmotorVexIQ, PIDControl, reversed, driveLeft, encoder)
#pragma config(Motor,  motor6,          RM,            tmotorVexIQ, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void move (int LM, int RM, int Ti)
{
	motor[motor1]=LM;
	motor[motor6]=RM;
	wait1Msec(Ti);
}
task main()
{
repeat(forever)
{
	{displaySensorValues(line1, Color);
	displaySensorValues(line3, Gyro);}

	{if (SensorValue[Color]> 100)
{
	move (20,20,0);
	}
 else
{
	while (SensorValue[Gyro]< 90)
 move (-20, 20, 0);
  }
 }
}
}
//while (true)
	//displaySensorValues(line1, Color);
//{wait1Msec(300)
//while (1)
// if (SensorValue [port7]>) комент
