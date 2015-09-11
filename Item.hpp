/*******************************************************
 * Author:				Brianna Carter
 * Date created:			2/17/15
 * Date modified:			2/17/15
 *
 * This file contains the class declaration for Item.
 * It contains a get and set method for string name, 
 * double price, and int quantity. It also has a default 
 * constructor and a constructor that takes 3 parameters.
 * ********************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;
class Item
{

	private:
		string name;
		double price;
		int quantity;

	public:
		Item();
		Item(string, double, int);
		void setName(string);
		void setPrice(double);
		void setQuantity(int);
		string getName();
		double getPrice();
		int getQuantity();

};
#endif
