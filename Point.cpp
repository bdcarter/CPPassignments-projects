/*****************************************************
 * Author:			Brianna Carter
 * Date Created:		2/15/15
 * Date Modified:		2/15/15
 *
 * This file contains the methods for the class Point.
 * It includes a default constructor, a constructor
 * that sets both variables to 0, set and get methods
 * for both variables, and a distance method that
 * calculates the distance between each point.
 * *************************************************/

#include "Point.hpp"
#include <iostream>
#include <cmath>

using namespace std;

/***********************
 * default constructor
 * ********************/

Point::Point()
{
	xCoord = 0.0;
	yCoord = 0.0;

}


/***************************************
 * Constructor: set x and y coordinates
 * ************************************/

Point::Point(double xCoordIn, double yCoordIn)
{

	setXcoord(xCoordIn);
	setYcoord(yCoordIn);
}


/*************************************************
 * setXcoord(double xCoordIn): set the x coordinate
 * ************************************************/
void Point::setXcoord(double xCoordIn)
{

	xCoord = xCoordIn;
}

/**************************************************
 * setYcoord(double yCoordIn): set the Ycoordinate
 * ***********************************************/

void Point::setYcoord(double yCoordIn)
{
	yCoord = yCoordIn;
}


/**************************************************
 * getXcoord() : return the x coordinate
 * **********************************************/

int Point::getXcoord()
{	return xCoord;	}

/*****************************************************
 * getYcoord() : return the y coordinate
 * *************************************************/
 
int Point::getYcoord()
{	return yCoord;	}

/***************************************************
 * distanceTo(double) const: calculates the distance
 * between two point classes
 * ***********************************************/

double Point::distanceTo(Point p2) const
{
	double xDifference, yDifference, sum, distance;

	xDifference =  (p2.getXcoord() - xCoord);
	yDifference = (p2.getYcoord() - yCoord);
	sum = (pow(xDifference, 2) + pow(yDifference, 2));
	distance = sqrt(sum);
	return distance;
}

/***********************************************
 * Main function: getting values for corrdinates
 * ********************************************

int main()
{
Point p1;
Point p2;

double xCoordIn;
double yCoordIn;

cout << "What is the coordinate for x?" << endl;
cin >> xCoordIn;
cout << "What is the coordinate for y?" << endl;
cin >> yCoordIn;

p1.setXcoord(xCoordIn);
p1.setYcoord(yCoordIn);

cout << "What is the second x coordinate?" << endl;
cin >> xCoordIn;
cout << "What is the second y coordinate?" << endl;
cin >> yCoordIn;

p2.setXcoord(xCoordIn);
p2.setYcoord(yCoordIn);

cout << "The distance between the points is: " << p1.distanceTo(p2) << endl;

return 0;
}
*/



