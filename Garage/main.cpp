#include<iostream>
#include<fstream>
#include"ArrayStack.h"
#include "ArrayStack.h"
#include"Garage.h"
#include"StackInterface.h"
using namespace std;


int main() {

	Car tempCar;
	Garage garageCar;
	string carPlate;
	int counter = 0;
	char A_D;

	ifstream myfile;
	myfile.open("Cars.txt");
	if (!myfile) {
		cout << "File not found" << endl;
	}
	else {
		myfile >> A_D >> carPlate;
		cout << A_D << " testing " << endl;
	}




	system("pause");
	return 0;
}
