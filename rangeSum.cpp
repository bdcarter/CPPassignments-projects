/******************************************************
 * Author:				Brianna Carter
 * Date created:			1/21/15
 * Date modified:			1/25/15
 *
 * This program will ask for two numbers and will add
 * the numbers in the range of those numbers.
 ****************************************************/

#include <iostream>
using namespace std;


int main()
{
int num1, num2, min, max, start, sum = 0;
		//Get numbers from user
	cout << "Please enter a whole number." << endl;
	cin >> num1;
	cout << "Please enter your second whole number." << endl;
	cin >> num2;
		//determine which is max and which is min
	if (num1 < num2)
	{	min = num1;
		max = num2;
	}

	else if (num1 > num2)
	{	max = num1;
		min = num2;
	}

	//If both numbers are equal, set both max and min to the number
	else if (num1 == num2)
	{	max = num1;
		min = num2;
	}

//for testing	cout << "max: " << max << "min: " << min << endl;
//Use for loop to add numbers between min and max
	for (start = min; start <= max; start++)
	{
		sum += start;
	}
		cout << "The sum of the range of numbers is: ";
		cout << sum << endl;
	

return 0; 
}
