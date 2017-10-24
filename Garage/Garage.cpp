#include "Garage.h"
#include <iostream>
using namespace std;



//Garage::Garage(){
//	ArrayStack<Car> laneOne(10);
//	ArrayStack<Car>laneTwo(10);
//	ArrayStack<Car>street(10);
//
//}


//check lane one to see if it is empty

bool Garage::checkLaneOne() {
	if (laneOne.isEmpty()) {
		return true;
	}
	else {
		return false;
	}
}


// Check Lane Two see if it is empty


bool Garage::checkLaneTwo() {
	if (laneTwo.isEmpty()) {
		return true;
	 }

	else {
		return false;
	}
}


////push car into lane one  if the there's a room

void Garage::toLaneOne( Car& newCar) {
	if (!laneOne.isEmpty()) {
		laneOne.push(newCar);
	}
	else{
		cout << "Lane is full" << endl;
		}

}




//push car into lane two  if the there's a room

void Garage::toLaneTwo( Car& newCar) {

	if (!laneTwo.isEmpty()) {
		laneTwo.push(newCar);
	}
	else {
		cout << "Lane Two is full" << endl;
	}
}



void Garage:: toStreet(Car& newCar) {
	 if(!laneOne.isEmpty()) {

		 street.push(newCar);
  }
	 else if (!laneTwo.isEmpty) {
		 street.push(newCar);
	 }

	 else {
		 street.pop();
	 }
}


void Garage::arrival(Car& newEntry) {

	if (laneOne.isFull() == false) {
		laneOne.push(newEntry);
		cout << newEntry.getPlate() << "has been pushed into lane one" << endl;

  }
	else if (laneTwo.isFull() == false) {
		laneTwo.push(newEntry);
		cout << newEntry.getPlate() << " has been pushed into lane two" << endl;
	}

	else {
		cout << "Both lanes are full" << endl;
	}
}


void Garage:: departure( Car& departure) {
	if (laneOne.search(departure) == true) {

 }

}

//free the memory
Garage::~Garage()
{
}
