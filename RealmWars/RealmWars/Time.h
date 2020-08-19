#pragma once
#include <chrono>

class Time
{
public:
	Time();
	~Time();
	double getDeltaTime() const;
	void restartClock();
	void startClock();
private:
	double deltaTime;
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
};

