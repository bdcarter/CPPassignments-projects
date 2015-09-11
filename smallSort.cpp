/**************************************************************
 * Author:					Brianna Carter
 * Date Created:				1/30/15
 * Date Modified:				1/30/15
 *
 * This program will ask the user to input 3 integers and 
 * will display the original order and then call a void function
 * to sort the numbers from largest to smallest then display 
 * the sorted order.
 **************************************************************/

#include <iostream>
 
//function prototype


int main()
{

int num1, num2, num3;
//get the numbers
	std::cout << "Please insert the first whole number." << std::endl;
	std::cin >> num1;
	std::cout << "Please insert the second whole number." << std::endl;
	std::cin >> num2;
	std::cout << "Please insert the third whole number." << std::endl;
	std::cin >> num3;
//list the original order
	std::cout << "Original order: "<< std::endl << num1 << std::endl << num2;
	std::cout << std:: endl << num3 << std::endl;
//call the sorting function
	sortNums(num1, num2, num3);
//list sorted order
	std::cout << "Sorted order: " << std::endl << num1 << std::endl;
	std::cout << num2 << std::endl << num3 << std::endl;


return 0;
}
//function header
void sortNums(int &num1, int &num2, int &num3)
{
using namespace std;
//defined a temp int to hold numbers while swapping them
	int temp;
//compare the numbers and put them in correct order
	if (num1 > num3)
	{temp = num1;
	num1 = num3;
	num3 = temp;}

	if (num1 > num2)
	{temp = num1;
	num1 = num2;
	num2 = temp;}

	if (num3 < num2)
	{temp = num3;
	num3 = num2;
	num2 = temp;}

}
	
