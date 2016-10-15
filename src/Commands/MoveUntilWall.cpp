#include "MoveUntilWall.h"

MoveUntilWall::MoveUntilWall(int distance)
:distanceToTravel(distance)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void MoveUntilWall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveUntilWall::Execute()
{
	drive ->driveMotor->SetSpeed(0.4);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUntilWall::IsFinished()
{
	if (drive ->getUltrasonicDistance() < distanceToTravel*12){ //distanceToTravel *12 converts to inches
		return true;
	}

	return false;
}

// Called once after isFinished returns true
void MoveUntilWall::End()
{
	drive ->driveMotor->StopMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUntilWall::Interrupted()
{

}
