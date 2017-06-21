#pragma once

#include <chrono>

/* A timer. */
class Timer {
public:
	/* Default constructor. */
	Timer();
	/* Destructor. */
	~Timer();

	/* Resets this object. */
	void Reset();

	/*
	 *    returns the elapsed time since the last reset in milliseconds.
	 *    @return	A double.
	 */

	double Elapsed();

private:
	/* Defines an alias representing the clock. */
	typedef std::chrono::steady_clock Clock;
	/* Defines an alias representing the timestamp. */
	typedef std::chrono::time_point<Clock> Timestamp;

	/* The tick hold */
	Timestamp tickHold;
};