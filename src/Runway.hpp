#pragma once

#include <mutex>
#include <condition_variable>

class Runway 
{
public:
	Runway(int id);
	void addPassengersPastGates(int numberOfPassenger);
	void movePassengersToPlane(int numberOfPassenger);
	int getPassengersPastGates();

	int id_;
private:

	int passengersPastGates_;
	bool isAvailable_;

	std::mutex runwayMutex_;
	std::condition_variable runwayAvailableCV_;

};