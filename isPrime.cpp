/***********************************************************
 *isPrime.cpp
 * Author:				Brianna Carter
 * Date Created:			1/20/15
 * Date Edited:				1/20/15
 *
 * This program will ask for a positive number and will
 * call a function to determine if it is prime.
 *********************************************************/

#include <iostream> 
#include <iomanip>

//function prototype
bool isPrime (int);

int main()
{ 
	
	int num;
	bool prime;

	std::cout << "Please enter a positive number." << std::endl;
	std::cin >> num;

//call function
	isPrime(num);

	if (isPrime(num))
	 std::cout << "The number is prime." << std::endl;
	else
	std::cout << "The number is not prime." << std::endl;	

return 0;
}
/*********************************************************
 * This function uses loops to determine is a value is prime.
 * *****************************************************/
bool isPrime(int num)
{
//declare variables
	bool prime;
	int remain = 1;


//determine if num is divisable by numbers other than 1&itself	
	for (int x=2; x <= num-1; x++)
	{ remain += (num % x)-1;
	std::cout << remain << std::endl;
	if(remain == 0) //as soon as the remainder = 0, break loop
	break;}
//if the number isn't 2, determine if it is prime or not
if (num != 2)
	{	if (remain > 0){
		prime = true;
		}

		else if(remain == 0){
		prime = false;
		}
	}
//if number is 2, it is prime
if (num == 2)
{prime = true;
}
//send value of prime to main function
return prime;	
}

