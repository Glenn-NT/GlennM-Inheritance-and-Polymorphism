//Glenn Monie
//04/25/2021
//Truck Class

#include"Truck.h"
#include<string>

using namespace std;

void Truck::setTowingCap(int capacity) {
	towingCap = capacity;
}

int Truck::getTowingCap() {
	return towingCap;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCap << endl;
}