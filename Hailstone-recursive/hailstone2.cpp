/*****************************************************
 * 		hailstone2.cpp
 * Author:				Brianna Carter
 * Date Created:			3/5/15
 * Date Modified:			3/5/15
 *
 * This program uses a recurstive function to find 
 * the hailstone sequencce for a given integer and will
 * tell the user how many moves it takes to get to '1'.
 * ******************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

int hailstone(int num, int iterations)
{

	if(num == 1)
	{

		return iterations;
	}
	else{
		if(num % 2 == 0)
		{ 
			num = num/2;
			hailstone(num, ++iterations);
		}

		else
		{
			
			num = (num * 3) + 1;
			hailstone(num, ++iterations);
		}
	}
}

int main()
{
int num;
int iterations = 0;
	cout << "What number would you like to start with?" << endl;
	cin >> num;
	
	cout << "It took " << hailstone(num, iterations);
	cout << " steps to reach 1." << endl;

return 0;
}
