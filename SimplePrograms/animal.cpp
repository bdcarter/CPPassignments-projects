#include <iostream>
#include <string>

// a simple example program
/******************************************************************
 * Author:					Brianna Carter
 * Date:					1/6/2015
 * Last modified:				1/8/2015
 * Purpose:	This program asks a user to input thier favorite animal
 * 	and repeats it.
 *****************************************************************/

  int main()
 {
 	std::string faveAnimal;
 	std::cout << "Please enter your favorite animal" << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
} 
