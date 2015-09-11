/*******************************************************
 * Author:				Brianna Carter
 * Date Created:			2/15/15
 * Date Modified:			2/15/15
 *
 * This file contains the methods for class Supplies.
 *There are 6 methods for the class and one main method.
 * The main method asks for values of parts in stock,
 * has the user produce either thing1, thing 2, a parts
 * order, or quit. If the user is producing an item, 
 * it will ask how many they would like to produce
 * and use class methods to deduct the parts totals.
 * If the user would like a parts order, the class
 * method will be called and display how many items
 * should be ordered to get the items to full stock.
 * **************************************************/

using namespace std;

#include "Supplies.hpp"
#include <iostream>

/****************************************************
 * Default Constructor
 * ************************************************/

Supplies::Supplies()
{
	things = 100;
	watchas = 70;
	framistats = 50;
}

/********************************************
 * Constructor
 * ****************************************/

Supplies::Supplies(int thingsIn, int watchasIn, int framistatsIn)
{

	setNumThingamajigs(thingsIn);
	setNumWatchamacallits(watchasIn);
	setNumFramistats(framistatsIn);

}


/*******************************************
 * setNumThingamajigs(int)
 * ****************************************/

void Supplies::setNumThingamajigs(int thingsIn)
{

	things = thingsIn;
}

/******************************************
 * setNumWatchamacallits(int)
 * ***************************************/

void Supplies::setNumWatchamacallits(int watchasIn)
{
	watchas = watchasIn;
}

/***************************************
 * setNumFramistats(int)
 * ***********************************/

void Supplies::setNumFramistats(int framistatsIn)
{

	framistats = framistatsIn;
}


/*************************************
 * printPartsOrder()
 * **********************************/

void Supplies::printPartsOrder()
{

	cout << "Order " << (100-things) << " thingamajigs." << endl;
	cout << "Order " << (70-watchas) << " watchamacallits." << endl;
	cout << "Order " << (50-framistats) << " framistats." << endl;
}

/****************************************
 * produceThing1: deduct 1 from thing,
 * 2 from watchas, and 1 from framistat.
 * **************************************/

void Supplies::produceThing1(int amountThing1)
{
//make sure the supplies are deducted based on the number being produced
	setNumThingamajigs(things-(1*amountThing1));
	setNumWatchamacallits(watchas-(2*amountThing1));
	setNumFramistats(framistats-(1*amountThing1));
}

/*******************************************
 * produceThing2: deduct 2 from things and
 * 1 from framistats.
 * ***************************************/

void Supplies::produceThing2(int amountThing2)
{
//make sure the supplies are deducted based on the number produced
	setNumThingamajigs(things-(2*amountThing2));
	setNumFramistats(framistats-(1*amountThing2));
}

/***************************************
 * Main function: 
 *************************************/

int main()
{
Supplies stock1;
int thingsIn;
int watchasIn;
int framistatsIn;
int amountThing1;
int amountThing2;
int choice;

cout << "How many thingamajigs are in stock?" << endl;
cin >> thingsIn;
cout << "How many watchamacallits are in stock?" << endl;
cin >> watchasIn;
cout << "How many framistats are in stock?" << endl;
cin >> framistatsIn;

	stock1.setNumThingamajigs(thingsIn);
	stock1.setNumWatchamacallits(watchasIn);
	stock1.setNumFramistats(framistatsIn);

do {

 cout << "Please choose an action: " << endl;
 cout << " 1. Produce Thing 1" << endl;
 cout << " 2. Produce Thing 2" << endl;
 cout << " 3. Print a parts orer" << endl;
 cout << " 4. Quit" << endl;
 cin >> choice;

	if(choice == 1)
	{ 
		cout << "How many do you want to produce?" << endl;
		cin >> amountThing1;
		stock1.produceThing1(amountThing1);
	}

	if(choice == 2)
	{
		cout << "How many do you want to produce?" << endl;
		cin >> amountThing2;
		stock1.produceThing2(amountThing2);
	}

	if(choice == 3)
	{
		stock1.printPartsOrder();
	}

}while(choice != 4);

return 0;
}
