/***********************************************************************
 * Author:					Brianna Carter
 * Date Created:				2/1/2015
 * Date Modified:				2/1/2015
 *
 * This program will use a function to find the hailstone sequence for a 
 * given integer and will tell the user how many moves it takes to get 
 * to '1'.
 * ******************************************************************/

#include <iostream>
#include <cmath>

int hailstone (int);

int main ()
{
int num;
int iterations;

	std::cout << "Please enter a number." << std::endl;
	std::cin >> num;

	iterations = hailstone(num);
	std::cout << "It took " << iterations << " steps to get to 1." << std::endl;

return 0;
}

int hailstone(int num)
{
// initiate iterations to 0
	int iterations = 0;
//as long as the number is not 1, perform the calculations
	while (num != 1)
	{
		if (num % 2 ==0)
		{	num = num/2;
//increment iterations by 1 after each revolution of the loop
			iterations++;
		}	

		else
		{	num = (num*3) + 1;
			iterations++;
		}
	}
//return the number of iterations needed to reach 1
return iterations;
}
