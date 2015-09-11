/**********************************************************
 * Author:				Brianna Carter
 * Date Created:			2/6/2015
 * Date Modified:			2/6/2015
 *
 * This function uses the class DiceCup to simulate a dice
 * roll with given number of dice and sides.
 * *******************************************************/


using namespace std;
#include "DiceCup.hpp"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>

/**************************************
 * Constructor DiceCup::DiceCup       *
 *                                    *
 * Initializes numDice to 1           *
 * and numFaces to 2                  *
 *************************************/

DiceCup::DiceCup()
{        numDice = 1;
        numFaces = 2;
}

//call set members
DiceCup::DiceCup(int dice, int faces)
{
	setNumDice(dice);
	setNumFaces(faces);
}
/************************************
 * DiceCup::set_numDice             *
 * Sets numDice to the user input   *
 ***********************************/
int DiceCup::setNumDice(int dice)
{
        if (dice > 0)
        { numDice = dice;}
	else
	{cout << "Invalid number of dice. Default to 1" << endl;
	numDice = 1;
	}
return numDice;
}

/**********************************
 * DiceCup::set_numFaces          *
 * Sets numFaces to user input    *
 *********************************/
int DiceCup::setNumFaces(int faces)
{
        if (faces > 1)
        { numFaces = faces;}
	else
	{cout << "Invalid number of faces. Default to 2." << endl;
	numFaces = 2;}
return numFaces;
}
/**************************************************
 * DiceCup::rollDice(int numDice, int numFaces);  *
 *Simulates the rolling of the dice and returns   *
 *total of the dice.                              *
 *************************************************/

int DiceCup::rollDice(int numDice, int numFaces)
{
	int total=0;

        srand(time(0)); //sets seed number to time

        for(int x =0; x < numDice; x++)
        {
        total += ((rand()%(numFaces))+1); //subtracts the max and min for range
        
		
        }
	
	return total;
}



/*******************************************************
 * Main function asking for user input
 * ****************************************************/

main()
{

DiceCup diceRoll1;
int dice, total;
int faces;


	cout<< "How many dice would you like to use?" << endl;
	cin >> dice;
	cout << "How many sides do the dice have?" << endl;
	cin >> faces;
	int numDice = diceRoll1.setNumDice(dice);
	int numFaces = diceRoll1.setNumFaces(faces);
	
	total = diceRoll1.rollDice(numDice, numFaces);
	cout << "You rolled a " << total << "." << endl;

return 0;
}
