/****************************************************************************
 * File name						numGuess.cpp
 * Author						Brianna Carter
 * Date created						1/25/2015
 * Date modified					1/25/2015
 *
 * 	This program will be a number guessing game. It will generate a random 
 * 	number between 1-100 and have the user guess. 
 * 	It will track number of guesses, if the guess is too high, low, or
 * 	correct. If the guess is incorrect, the program will give a new range 
 * 	based on the previous guess. 
 ****************************************************************************/

#include <iostream>
#include <cstdlib> //needed to use srand
#include <ctime> //needed to use time
#include <cmath>
#include <string>
using namespace std;

int main()
{
	
	
	cout << "Welcome to the number guessing game!" << endl;
//	cout << "Please guess a number between 1-100." << endl;
//	cin >> guess;


		// Generating random number
	int max = 100, min = 1, guesses = 1, num;

	srand(time(0)); //sets seed number to time

		for(int x = 0; x < 1; x++)
		{
		num = (rand()%(max-min)+1)+ min; //subtracts max and min to get range
// used for testing	cout << "Random number:" << num << endl;
		} 	
		
		int guess;	//Have user guess number
		cout << "Please guess a number between 1-100." << endl;
		cin >> guess;

			while (guess != num) //While the guess isn't the same as the number
		{	
			if (guess > num) //If the guess is too high
			{
				cout <<"Your number is too high. ";
				cout << "Guess a lower number." << endl;
				cin >> guess;
				guesses++;
			}
			else if (guess < num) //If the guess is too low
			{
				cout << "Your number is too low. ";
				cout << "Guess a higher number." << endl;
				cin >> guess;
				guesses++;
			}

		}
		  if (guess == num) //When the number is guessed
		{
			cout <<"Congratulations! You guessed the correct number. " << endl;
			cout << "It took you " << guesses << " guesses." << endl;
			 	
		}			
			
		
	return 0;
}

