#pragma once
#pragma once
#include<string>
using namespace std;



class Car
{


private:
	string plate;  // car plate
	int counter;   // numbers of time the car changed lanes
	char carStatus;		// arrive or departure

public:

	string getPlate() { return plate; }
	int getCounter() { return counter; }
	char getCarStatus() { return carStatus; }

	void setPlate( string newPlate);
	void setCarStatus( char newStatus);
	void setTurn();
	~Car();

	bool operator == (string compareLicense);
	bool operator != (string compareLicense);
};

#include "Car.cpp"

