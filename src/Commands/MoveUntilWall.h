#ifndef MoveUntilWall_H
#define MoveUntilWall_H

#include "../CommandBase.h"
#include "WPILib.h"

class MoveUntilWall: public CommandBase
{
private:
	//int distanceToTravel;
public:
	MoveUntilWall();//int distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
