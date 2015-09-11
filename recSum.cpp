/**********************************************************************
 * 			recSum.cpp
 * Author:				Brianna Carter
 * Date Created:			2/5/15
 * Date Modified:			2/15/15
 *
 * Function: Recursively takes an array of doubles and sums the values
 * Main: Asks the user for size of array, asks the user for the values
 * to store in the array, calls function, and prints return value.
 * *****************************************************************/

#include <iostream>
using namespace std;
/**************************************************
 * Sum returns the sum of the array.
 * ********************************************/

double Sum(double *list, int size)
{
	double total = 0;

	if(size >= 0)
	{
	
	return list[size-1] + Sum(list, --size);
	
	}
	
	
}


int main()
{
int size;
double *list;

	cout << "How many numbers would you like to enter?" << endl;
	cin >> size;
	list = new double[size];

	for(int x = 0; x < size; x++)
	{
	cout << "Please enter number " << x+1 << ":" << endl;
	cin >> list[x]; 
	}

	cout << "The sum is: " << Sum(list, size) << endl;

return 0;
}
