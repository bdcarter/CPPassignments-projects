/***********************************************
 * Author:			Brianna Carter
 * Date Created:		2/12/14
 * Date modified:		2/12/14
 *
 * This file contains the class Car. It includes
 * the year, made, and current speed of a car
 * including set methods for those three values
 * and a get method for speed. The methods 
 * brake and accelerate use the set speed
 * method to manipulate the data. 
 * *******************************************/

#ifndef CAR_HPP
#define CAR_HPP
#include <string>
using namespace std;

class Car
{
private:	

	int yearIn;
	string make;
	int speedIn;
	int s;
	
public:

	Car();
	Car(int, string);
	void setYear(int);
	void setMake(string);
	void setSpeed(int);
	int getSpeed();
	void accelerate();
	void brake();

};

#endif


