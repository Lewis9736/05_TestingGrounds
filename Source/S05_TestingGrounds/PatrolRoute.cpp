// Lone Wolf Studio

#include "S05_TestingGrounds.h"
#include "PatrolRoute.h"


TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}