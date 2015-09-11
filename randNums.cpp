/***************************************************************
 * Program file				randNum2.cpp
 * Author				Brianna Carter
 * Date created				1/14/2015
 * Date modified			1/14/2015
 * 	This program asks for two numbers from the user input,
 * 	these numbers are used as the max and min for the random
 * 	number generator. It will then generate a number and 
 * 	assign it to a variable and print it 5 times.
 *************************************************************/
#include <iostream>
#include <cstdlib> //to use srand
#include <ctime> //to use time
using namespace std;

int main()
{
	int min, max;

	cout << "Please input a whole number for the minimum value." << endl;
	cin >> min;//get the minimum value for the number range
	cout << "Please input a whole number for the maximum value." << endl;
	cin >> max; //get the maximum value for the number range

		srand(time(0));// sets the seed number to time
			
			for(int x = 0; x < 5; x++)
			{
			int num = (rand()%(max-min)+1)+ min;//subtracts the max and min to get the range
			cout << num << " was the random number generated." << endl;
			}
return 0;
}
