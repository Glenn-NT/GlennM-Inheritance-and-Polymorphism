#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"
#include<iostream>
#include<string>

using namespace std;

class Car : public Vehicle
{
private:
	int numDoors;

public:
	//default constructor
	Car(): Vehicle()
	{
		numDoors = 0;
	}

	void setNumDoors(int);
	int getNumDoors();
	void displayInfo();
};

#endif // !CAR_H

