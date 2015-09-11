/***********************************************************************
 * Author:					Brianna Carter
 * Date Created:				1/31/15
 * Date Modified:				1/31/15
 * 
 * This program uses a function to determine the distance an object
 * would fall in a time period.
 * **************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

//function prototype
float fallDistance (float seconds);

int main()
{
	float seconds;
	float distance;

	std::cout << "How many seconds is the object falling?" << std::endl;
	std::cin >> seconds;

//call the function
	distance = fallDistance(seconds);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The object would have fallen " << distance;
	std::cout << " meters." << std::endl;
	
return 0;
}

float fallDistance(float seconds)
{
 
	float g = 9.8;
	float distance;

//have the output display 2 decimal places
	std::cout << std::fixed << std::setprecision(2);

//put the values in the equation
	distance = (.5)*((9.8)*(pow(seconds,2)));

//return the value	
	return distance;
}

