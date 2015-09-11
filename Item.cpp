/**********************************************************
 * Author:			Brianna Carter
 * Date created:		2/17/15
 * Date modified:		2/17/15
 *
 * This is the definition methods for the class Item.
 * It includes Item(), Item(string, double, int),
 * void setName(string), void setPrice(double),
 * void setQuantity(int), string getName(),
 * double getPrice(), and int getQuantity().
 * **************************************************/

#include "Item.hpp"
#include <string>
#include <iostream>
using namespace std;
/***************************
 * Default constructor
 * ************************/

Item::Item()
{
	string name = "";
	double price = 0.0;
	int quantity = 0;
}

/*****************************
 * Constructor
 * *************************/

Item::Item(string nameIn, double priceIn, int quantityIn)
{

	setName(nameIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
}


/**********************************
 * setName
 * *******************************/

void Item::setName(string nameIn)
{
	name = nameIn;

}

/*****************
 * setPrice
 * *************/

void Item::setPrice(double priceIn)
{
	price = priceIn;

}

/***************
 * setQuantity
 * ***********/

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;

}

/********************
 * getName
 * ***************/

string Item::getName()
{
	return name;

}

/*************
 * getPrice
 * **********/

double Item::getPrice()
{
	return price;

}

/***************
 * getQuantity
 * *************/

int Item::getQuantity()
{
	return quantity;

}


