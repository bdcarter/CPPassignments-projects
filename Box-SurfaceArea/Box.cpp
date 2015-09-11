/***********************************************************
 * Author:				Brianna Carter
 * Date Created:			2/6/2015
 * Date Edited:				2/6/2015
 *
 * This file contains the member function definitions and a
 * program that calculates the volume and surface area for 
 * a box with given dimensions.
 * ********************************************************/
#include <iomanip>
#include <iostream>
#include <cmath>
#include "Box.hpp"
using namespace std;
/****************************************
 * Default constructor
 * ************************************/

Box::Box()
{
	height = 1;
	length = 1;
	width = 1;
}

/****************************************
 * Box::Box(double h, double w, double L)
 * Pass variables to set methods.
***************************************/
Box::Box(double heightIn, double widthIn, double lengthIn)
{
	setHeight(heightIn);
	setWidth(widthIn);
	setLength(lengthIn);
}
/***************************************
 * Box::setHeight(double heightIn)
 * Check for negative input and assign
 * variables
 *************************************/

void Box::setHeight(double heightIn)
{
	if  (heightIn < 0)
	{cout << "Negative numbers not accepted." << endl;
	height = 0;
	}
	else
	{height = heightIn;} 
cout << "Height: " << height << endl;

}

/**************************************
 * Box::setWidth(double widthIn)
 * Test for negative input
 * **********************************/

void Box::setWidth(double widthIn)
{
	if(widthIn < 0)
	{cout << "Negative numbers not accepted." << endl;
	width = 0;
	}
	else
	{width = widthIn;}
cout << "Width: " << width << endl;

}

/**************************************
 * Box::setLength(double lengthIn)
 * Test for negative input
 * **********************************/

void Box::setLength(double lengthIn)
{
	if(lengthIn < 0)
	{cout << "negative numbers not accepted." << endl;
	length = 0;
	}
	else
	{length = lengthIn;}
cout << "Length: " << length << endl;

}


/*****************************************
 * Box::getVolume()
 * Calculates the volume of the box.
 * **************************************/

double Box::getVolume()
{ return (length * height * width);}

/*****************************************
 * Box::getSurfaceArea
 * Calculates surface area of the box.
 * *************************************/

double Box::getSurfaceArea()
{return ((2*length*width) + (2*length*height) + (2*width*height));}

/******************************************
 * Main function
 * **************************************/

main()
{
Box cube;
double heightIn;
 double widthIn;
 double lengthIn;
//get dimensions
	cout << "Please enter the height." << endl;
	cin >> heightIn;
	cout << "Please enter the width." << endl;
	cin >> widthIn;
	cout << "Please enter the length." << endl;
	cin >> lengthIn; 
//Send dimensions to set members
	cube.setHeight(heightIn);
	cube.setWidth(widthIn);
	cube.setLength(lengthIn);
	cout << fixed << setprecision(1) << endl;
//Calculate volume and surface area
	cout << "The volume of the box is: " << cube.getVolume();
	cout  << endl;
	cout << "The Surface Area is: " << cube.getSurfaceArea();
	cout  << endl;

return 0;
}

