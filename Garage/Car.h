#pragma once
#include<string>
using namespace std;



class Car
{


private:
	string plate;  // car plate
	int counter = 0;   // numbers of time the car changed lanes
	char carStatus;		// arrive or departure

public:
	 string getPlate() { return plate; };
	int getCounter() { return counter; }
	char getCarStatus() { return carStatus; }
	~Car();
	void setPlate( string newPlate);
	void setCarStatus( char newStatus);
	void incrementCount();
	bool operator == (Car& compareLicense);
	bool operator != (Car& compareLicense);
};

#include "Car.cpp"

