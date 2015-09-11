/*************************************************
 * Author:			Brianna Carter
 * Date Created:		2/17/15
 * Date modified:		2/17/15
 *
 * This file contains the declaration for the class
 * ShoppingCart. This class contains a vector of 
 * the Item class. It includes an addItem method
 * that takes an Item and adds it to the vector.
 * There is a method that lists all information for
 * items in the cart and a function that lists the 
 * total price for all items. 
 * ************************************************/

#ifndef SHOPCART_HPP
#define SHOPCART_HPP

#include "Item.hpp"
#include <string>
#include <vector>

using namespace std;

class ShoppingCart
{
	private:
		vector<Item> contents;
			
	public:
		void addItem(Item);
		void listContents();
		double totalPrice();
};

#endif
