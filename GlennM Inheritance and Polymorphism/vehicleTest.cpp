//Glenn Monie
//04/25/2021
//Vehicle Class Test

#include"Vehicle.h"
#include"Car.h"
#include<iostream>
#include<string>

using namespace std;

int main() {
	string manufacturer, yearMade;
	int numDoors;

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

	Car car1 = Car();
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
	car1.setNumDoors(numDoors);
	//display data
	car1.displayInfo();
	cout << endl;



	system("pause");
	return 0;
}