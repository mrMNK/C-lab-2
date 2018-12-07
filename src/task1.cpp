#include <stdio.h>
#include <Windows.h>
#include <math.h>

const float g = 9.81;

float height(int currTime, int startHeight)
{
	float distance_traveled = 0;
	float currHeight = 0;
	int moment_time = 0;
	for (int moment_time = 0; moment_time < currTime; moment_time++)
	{
		float pow_time = pow(moment_time, 2);
		float distance_traveled = pow_time *g / 2;
		currHeight = startHeight - distance_traveled;
		if (startHeight >= 10&& startHeight<100)
		{
			printf("t=%02dc\t%06.2f\n", moment_time, currHeight);
		}
		else if (startHeight >= 100 && startHeight<1000)
		{
			printf("t=%02dc\t%06.2f\n", moment_time, currHeight);
		}
		else if (startHeight >= 1000 && startHeight<10000)
		{
			printf("t=%02dc\t%07.2f\n", moment_time, currHeight);
		}
		else if (startHeight >= 10000 && startHeight<100000)
		{
			printf("t=%02dc\t%08.2f\n", moment_time, currHeight);
		}
		else if (startHeight >= 100000)
		{
			printf("t=%02dc\t%09.2f\n", moment_time, currHeight);
		}
		Sleep (100);
	}
	return printf("BABAH!!!");
}