//Glenn Monie
//04/25/2021
//Vehicle Class

#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;   //member variable to hold maker
	string yearMade;           //variable to hold year made
public:
	//Default constructor
	Vehicle() {
		manufacturer = "";
		yearMade = "";
	}

	//arg constructor
	Vehicle(string maker, string year) {
		manufacturer = maker;
		yearMade = year;
	}

	void setManufacturer(string);
	string getManufacturer();
	void setYearMade(string);
	string getYearMade();
};
#endif // !VEHICLE_H

