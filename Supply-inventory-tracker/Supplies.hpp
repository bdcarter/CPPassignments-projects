/*********************************************************
 * Author:				Brianna Carter
 * Date Created:			2/15/15
 * Date Modified:			2/15/15
 *
 * This file contains the Class declarations for Supplies.
 * *****************************************************/
#ifndef SUPPLIES_HPP
#define SUPPLIES_HPP

#include <string>
using namespace std;

class Supplies
{

private:

	int things;
	int watchas;
	int framistats;

public:

	Supplies();
	Supplies(int, int, int);
	void setNumThingamajigs(int);
	void setNumWatchamacallits(int);
	void setNumFramistats(int);
	void printPartsOrder();
	void produceThing1(int);
	void produceThing2(int);
};

#endif
