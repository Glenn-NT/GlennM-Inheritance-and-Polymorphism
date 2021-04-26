//Glenn Monie
//04/25/2021
//Truck Class

#ifndef TRUCK_H
#define TRUCK_H

#include"Vehicle.h"
#include<iostream>
#include<string>

using namespace std;

class Truck : public Vehicle
{
private:
	int towingCap;   //int to hold towing capacity

public:
	//default constructor
	Truck() : Vehicle()
	{
		towingCap = 0;
	}

	void setTowingCap(int);
	int getTowingCap();
	void displayInfo();
};


#endif // !TRUCK_H
