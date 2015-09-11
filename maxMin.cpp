/*******************************************************************
 * Author:					Brianna Carter
 * Date created:				1/21/15
 * Date modified:				1/21/15
 *
 * This program will ask the user to enter as many numbers as they want
 * and then will find the max and min of those numbers.
 * *****************************************************************/

#include <iostream>
using namespace std;

int main()
{
double  num;
double max;
double min;
double total;

//How many numbers does the user want to enter?
	cout << "How many numbers would you like to enter? " << endl;
	cin >> total;
//Initiate the max and min
	cout << "Please enter a number." << endl;
	cin >> num;

	min = num;
	max = num;
//As long as there are numbers to enter, continue the loop
	do
	{
		cout << "Please enter a number." << endl;
		cin >> num;
//If the number is the largest, save it as max
		while (num > max)
		{max = num;}
//If the number is the smallest, save it as min
		while (num < min)
		{min = num;}
//decrease total so the program runs the specified number of times
		total--;
	} while (total > 1);
		
	cout << "The highest number is: " << max << endl;
	cout << "The lowest number is: " << min << endl;
return 0;
}
	
