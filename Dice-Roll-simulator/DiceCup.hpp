
/*****************************************************************
 * Author:				Brianna Carter
 * Date Created:			2/6/2015
 * Last Edited:				2/6/201
 *
 *  This file contains the declarations of the members of 
 *  the class DiceCup.
 * *************************************************************/
#ifndef DICECUP_HPP
#define DICECUP_HPP
using namespace std;

/****************************************
 * Class declaration  			*
 * ************************************/

class DiceCup
{public:
	DiceCup();
	int setNumDice(int);
	int setNumFaces(int);
	DiceCup(int, int);
	int rollDice(int, int);
private:
	
	int numDice;
	int numFaces;
	int roll;
};

#endif
