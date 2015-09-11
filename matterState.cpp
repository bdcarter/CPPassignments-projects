/***********************************************************************
 * Author:					Brianna Carter
 * Date Created:				1/21/15
 * Date Edited:					1/21/15
 *
 * This program will as the user for a temperature and will list
 * what state each substance will be at that temperature. 
 * *******************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;


 int main()
{
	int temp;

		cout << "Please enter a temperature." << endl;	//Get the temp from the user
		cin >> temp;
		cout << "At that temperature the substances are:" << endl;

	if (temp <= -173)		// Use an if/else statement for each substance to compare matter state at given temp
		{ cout << "Ethyl Alcohol:" << setw(15) << "Solid" << endl;}

	else if ((temp > -173) && (temp < 172)) 
		{ cout << "Ethyl Alcohol:" << setw(15) << "Liquid" << endl;}

	else if (temp >= 172)
		{ cout << "Ethyl Alcohol:" << setw(15) << "Gas" << endl;}
	
	if (temp <= -38)	// if/else statement for Mercury
		{cout << "Mercury:" << setw(21) << "Solid" << endl;}
		
	else if ((temp > -38) && (temp < 676))
		{cout << "Mercury:" << setw(21) << "Liquid" << endl;}

	else if (temp >= 676)
		{cout << "Mercury:" << setw(21) << "Gas" << endl;}
	
	if (temp <= -362)	// if/else statement for Oxygen
		{cout << "Oxygen:" << setw(22) << "Solid" << endl;}
	
	else if ((temp > -362) && (temp < -306))
		{cout << "Oxygen:" << setw(22) << "Liquid" << endl;}
	
	else if (temp >= -306)
		{cout << "Oxygen:" << setw(22) << "Gas" << endl;}
	
	if (temp <= 32)	// if/else statement for Water
		{cout << "Water:" << setw(23) << "Solid" << endl;}

	else if ((temp > 32) && (temp < 212))
		{cout << "Water:" << setw(23) << "Liquid" << endl;}

	else if (temp >= 212)
		{cout << "Water:" << setw(23) << "Gas" << endl;}
		
return 0;
}
