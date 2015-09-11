/******************************************************
 * Author:				Brianna Carter
 * Date Created:			2/6/2015
 * Last Edited:				2/6/2015
 *
 * This file contains the members of the Hero class
 * and a function that gets hitpoint damage from the
 * user and displays when the hitpoints are gone.
 * ***********************************************/
#include <iostream>
#include "Hero.hpp"
using namespace std;

/**********************************
 * Default constructor Hero::hero()
 * ******************************/
Hero::Hero()
{
	strength = 1;
	hitPoints = 1;
	speed = 1;
	money = 1;
}
//Constructor that passes to set methods

Hero::Hero(int strengthIn, int hitPointsIn, int speedIn, int moneyIn)
{
	setStrength(strengthIn);
	setHitPoints(hitPointsIn);
	setSpeed(speedIn);
	setMoney(moneyIn);
}
/************************************
 * void Hero::setStrength(int strengthIn)
 * set the strength input to the variable
 * ***********************************/

void Hero::setStrength(int strengthIn)
	{strength = strengthIn;}

/****************************************
 * void Hero::setHitPoints(int hitPointsIn);
* Set the hit point input to the variable 
* ***************************************/

void Hero::setHitPoints(int hitPointsIn)
	{hitPoints = hitPointsIn;}

/******************************************
 * void Hero::setSpeed(int speedIn)
 * Set the speed input to the speed variable
 * **************************************/

void Hero::setSpeed(int speedIn)
	{speed = speedIn;}


/******************************************
 * void Hero::setMoney(int moneyIn)
 * set the money input to the money variable
 * ***************************************/

void Hero::setMoney(int moneyIn)
	{money = moneyIn;}


/**********************************************
 * int getStrength()
 * set the strength input to the strength variable
 * *******************************************/

int Hero::getStrength()
{ return strength;}

/*********************************************
 * getHitPoints()
 * recall the number of hit points
 * *****************************************/

int Hero::getHitPoints()
{return hitPoints;}

/*******************************************
 * getMoney()
 * recall the amount of money
 * ****************************************/

int Hero::getMoney()
{return money;}

/*****************************************
 * getSpeed()
 * recall the speed
 * *************************************/

int Hero::getSpeed()
{return speed;}

/***************************************
 * takeDamage(int damage)
 * This loop will decrease the hitPoints
 * by the amount of damage and display 
 * when there are none left.
 * **************************************/

int Hero::takeDamage(int damage)
{

bool alive;

	hitPoints = (Hero::getHitPoints());
	hitPoints -= damage;
//set hitPoints to new hitPoints value
	setHitPoints(hitPoints);
	//If Hero survived the damage, return true, if not return false
		if (hitPoints > 0)
		{alive = true;}
		if (hitPoints < 0)
		{alive = false;}
	return alive;
}

/*******************************************************
 * Main function: Displays Hero's attributes and runs
 * loop dealing damage until hitPoints are gone.
 * ***************************************************/
#include <iomanip>
int main()
{
Hero hero1;
int strengthIn, hitPointsIn, moneyIn, speedIn, damageIn;
int damage;
//Get Hero's specs
cout << "Strength total?" << endl;
cin >> strengthIn;
cout << "HitPoint total?" << endl;
cin >> hitPointsIn;
cout << "Money total?" << endl;
cin >> moneyIn;
cout << "Speed total?" << endl;
cin >> speedIn;

//set specs in variables
hero1.setStrength(strengthIn);
hero1.setHitPoints(hitPointsIn);
hero1.setMoney(moneyIn);
hero1.setSpeed(speedIn);
//List the specs
	cout << "Strength: " << setw(10) << hero1.getStrength() << endl;
	cout << "HitPoints: " << setw(9) << hero1.getHitPoints() << endl;
	cout << "Money: "<< setw (13) << hero1.getMoney() << endl;
	cout << "Speed: " << setw(13) << hero1.getSpeed() << endl;	

//Loop to decrease damage. While Hit points > 0, continue to ask for damage
while(hero1.getHitPoints() > 0)
{
cout << "How much damage was dealt?" << endl;
cin >> damage; 
//if take damage is true
if(hero1.takeDamage(damage))
{
	
	cout << "The hero survived!" << endl;
	cout << "Strength: " << setw(10) << hero1.getStrength() << endl;
	cout << "HitPoints: " << setw(9) << hero1.getHitPoints() << endl;
	cout << "Money: "<< setw (13) << hero1.getMoney() << endl;
	cout << "Speed: " << setw(13) << hero1.getSpeed() << endl;	
}
//If take damage is false
else
{

	cout << "The hero was defeated." << endl;
	cout << "Strength: " << setw(10) << hero1.getStrength() << endl;
	cout << "HitPoints: " << setw(9) << hero1.getHitPoints() << endl;
	cout << "Money: "<< setw (13) << hero1.getMoney() << endl;
	cout << "Speed: " << setw(13) << hero1.getSpeed() << endl;	
	break;
} 
}
	
return 0;
}



