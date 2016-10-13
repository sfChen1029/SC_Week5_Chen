#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain"), mUltrasonic(
				new Ultrasonic(ULTRASONICTRIGGER, ULTRASONICECHO)), driveMotor(
				new Jaguar(DRIVEMOTOR_PORT)) {
	mUltrasonic->SetAutomaticMode(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

double DriveTrain::getUltrasonicDistance() {
	return mUltrasonic->GetRangeInches();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
