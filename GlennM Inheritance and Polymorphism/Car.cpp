//Glenn Monie
//04/25/2021
//Car Class

#include"Car.h"
#include<string>

using namespace std;

void Car::setNumDoors(int doors) {
	numDoors = doors;
}

int Car::getNumDoors() {
	return numDoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << endl;
}