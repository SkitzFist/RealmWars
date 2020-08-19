#include "Time.h"
#include "Time.h"

Time::Time()
{
	deltaTime = 0.0;
}

Time::~Time()
{
}

double Time::getDeltaTime() const
{
	return deltaTime;
}

void Time::restartClock()
{
	end = std::chrono::steady_clock::now();
	std::chrono::duration<double> time = end - start;
	deltaTime = time.count();
	start = std::chrono::steady_clock::now();
}

void Time::startClock()
{
	start = std::chrono::steady_clock::now();
	start = std::chrono::steady_clock::now();
}
