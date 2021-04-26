//Glenn Monie
//04/25/2021
//Vehicle Class Test

/**This is a driver to test class inheritance and polymorthism by creating objects and calling methods from the derived classes and the base class**/ 

#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include<iostream>
#include<string>

using namespace std;

int main() {
	string manufacturer, yearMade;
	int numDoors, towingCapacity;

	//Vehicle class
	Vehicle vehicle1 = Vehicle();  //Declare new Vehicle object
	cout << "Vehicle:\n";
	//get manufacturer and assign it to obj
	cout << "Enter the manufaturer: ";
	getline(cin, manufacturer);
	vehicle1.setManufacturer(manufacturer);
	//get year built and assign it to obj
	cout << "Enter the year built: ";
	cin >> yearMade;
	cin.ignore();
	vehicle1.setYearMade(yearMade);
	//display data
	vehicle1.displayInfo();
	cout << endl;

	//Car class
	Car car1 = Car();   //new Car object
	cout << "Car:\n";
	cout << "Enter the manufaturer: ";
	getline(cin, manufacturer);
	car1.setManufacturer(manufacturer);
	cout << "Enter the year built: ";
	cin >> yearMade;
	cin.ignore();
	car1.setYearMade(yearMade);
	cout << "Enter number of doors: ";
	cin >> numDoors;
	cin.ignore();
	car1.setNumDoors(numDoors);
	//display data
	car1.displayInfo();
	cout << endl;
	
	//Truck class
	Truck truck1 = Truck();
	cout << "Truck:\n";
	cout << "Enter the manufaturer: ";
	getline(cin, manufacturer);
	truck1.setManufacturer(manufacturer);
	cout << "Enter the year built: ";
	cin >> yearMade;
	cin.ignore();
	truck1.setYearMade(yearMade);
	cout << "Enter Towing capacity: ";
	cin >> towingCapacity;
	truck1.setTowingCap(towingCapacity);
	//display data
	truck1.displayInfo();



	system("pause");
	return 0;
}