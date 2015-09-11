/***********************************************************
 * Author:				Brianna Carter
 * Date Created:			1/14/15
 * Last Modified:			1/14/15
 * 	This program converts Celsius temps to Fahrenheit.
 * ******************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double tempC;
	double tempF;

	cout << "Insert a temperature in Celsius." << endl;
	cin >> tempC;
	

	tempF = 1.8 * tempC + 32;

	cout << "The temperature in Fahrenheit is " << tempF << " degrees.";
	cout << endl;



return 0; 
}
