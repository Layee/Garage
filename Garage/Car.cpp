#include "Car.h"

//get the car plate

void Car::setPlate(string newPlate) {

	plate = newPlate;
}


// count the number of times the car was moved
void Car::setTurn(){
	counter++;
}

void Car::setCarStatus( char newStatus) {
	carStatus = newStatus;
}

Car::~Car()
{
}


// compare license plate

bool Car:: operator== ( string compareLicense) {
	if (compareLicense == plate.getPlate()) {
		return true;
	}
	else {
		return false;
	}
}

bool Car::operator!= ( string compareLicense) {
	if (compareLicense != plate) {
		return true;
	}
	else {
		return false;
	}
}