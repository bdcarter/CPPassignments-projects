/*****************************************************************
 * Author:				Brianna Carter
 * Date Created:			2/13/15
 * Date modified:			2/13/15
 *
 * This file contains the methods for the class Car
 * It also contains a main method that asks the user
 * to input make and year of the car and has them coose 
 * to accelerate or brake or quit. 
 * **************************************************************/
using namespace std;

#include "Car.hpp"
#include <string>
#include <iostream>

/************************************
 * Default Constructor
 * ********************************/

Car::Car()
{

	int yearIn = 0;
	string makeIn = "";
	int speedIn = 0;

}

/**********************************************************
 * Car::Car(int, string)
 * Passes user input into set functions
 * ******************************************************/

Car::Car(int yearIn, string makeIn)
{

	
	 setYear(yearIn);
	 setMake(makeIn);
	 setSpeed(0);
}


/******************************************************
 * setSpeed
 * **************************************************/
void Car::setSpeed(int speedIn)
{	 s = speedIn;

}

/******************************************************
 * setYear
 * *************************************************/

void Car::setYear(int yearIn)
{

	int year = yearIn;
}

/**********************************************
 * setMake
 * ******************************************/

void Car::setMake(string makeIn)
{
	string make = makeIn;
}

/*******************************************
 * getSpeed
 * ****************************************/
int Car::getSpeed()
{ 	
	return s;
}

/***************************************
 * Accelerate
 * ************************************/

void Car::accelerate()
{	
	if (s < 80)
	{Car::setSpeed(s + 10);}


	else
	{cout << "Top speed is 80!" << endl;}
}

/******************************
 * Brake
 * *************************/

void Car::brake()
{
	
	if (s > 0)
	{Car::setSpeed(s- 10);}

	else
	cout << "Car is stationary." << endl;
}

/****************************************
 * Main method
 * ************************************/

int main()
{
Car car1;
int yearIn;
string makeIn;
int speedIn;

	cout << "Please enter the year of the car. " << endl;
	cin >> yearIn;
	cout << "Please enter the make of the car. " << endl;
	cin >> makeIn;
	
// Set variables in class functions
	car1.setYear(yearIn);
	car1.setMake(makeIn);
	car1.setSpeed(speedIn);


int choice;
//while the user chooses 1 or 2, repeat the loop
do
{ 
	cout << "Pleace choose an option: " << endl;
	cout << "1. Accelerate" << endl;
	cout << "2. Brake" << endl;
	cout << "3. Quit" << endl;
	cin >> choice;
	if (choice == 1)
	{car1.accelerate();
	cout << "The current speed is: " << car1.getSpeed() << endl;}

	if (choice == 2)
	{car1.brake();
	 cout << "The current speed is: " << car1.getSpeed()   << endl;}

}
while(choice !=3);//if the user chooses 3, quit


return 0;
}




