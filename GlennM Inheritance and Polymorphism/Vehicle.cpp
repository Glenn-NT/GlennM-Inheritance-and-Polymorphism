//Glenn Monie
//04/25/2021
//Vehicle Class

#include "Vehicle.h"
#include<iostream>
#include<string>

using namespace std;

void Vehicle::setManufacturer(string maker) {
	manufacturer = maker;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

void Vehicle::setYearMade(string year) {
	yearMade = year;
}

string Vehicle::getYearMade() {
	return yearMade;
}

void Vehicle::displayInfo() {

	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Yeaar Built: " << yearMade << endl;
}