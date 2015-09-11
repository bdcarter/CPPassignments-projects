/*******************************************************
 * Author:			Brianna Carter
 * Date Created:		2/6/2015
 * Date Edited:			2/6/2015
 *
 * This file contains the declarations of the 
 * members of the class Hero
 * ***************************************************/

#ifndef HERO_HPP
#define HERO_HPP
using namespace std;

/***********************
 * Class declaration
 * ********************/

class Hero
{
	public:
		Hero();
		Hero(int, int, int, int);
		int takeDamage(int);
		void setStrength(int);
		int getStrength();
		void setHitPoints(int);
		int getHitPoints();
		void setMoney(int);
		int getMoney();
		void setSpeed(int);
		int getSpeed();

	private:
		int strength;
		int hitPoints;
		int speed;
		int money;
		int damage;

};

#endif
