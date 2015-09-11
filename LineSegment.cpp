/***************************************************
 * Author:			Brianna Carter
 * Date Created:		2/15/15
 * Date Modified:		2/15/15
 *
 * This file contains the method definitions for 
 * the LineSegment class. It includes a main method
 * that creates Point objects from user input and
 * calculates the length and slope. If the line
 * is vertical, the output should state that.
 * **********************************************/

#include "Point.hpp"
#include "LineSegment.hpp"
#include <iostream>
#include "Point.cpp"
#include <math.h>
using namespace std;

/****************************
 * Default constructor
 * ************************/

LineSegment::LineSegment()
{
	Point p1;
	Point p2;

}


/***********************************
 * Constructor
 * *******************************/

LineSegment::LineSegment(Point endPoint1In, Point endPoint2In)
{
	setEnd1(endPoint1In);
	setEnd2(endPoint2In);
}

/**************************************
 * setEnd1(Point)
 * ***********************************/

void LineSegment::setEnd1(Point p1)
{
	end1 = p1;
}

/*************************************
 * setEnd2(Point)
 * **********************************/

void LineSegment::setEnd2(Point p2)
{
	end2 = p2;
}

/*****************
 * getEnd1()
 * *************/

Point LineSegment::getEnd1()
{
	return end1;
}

/***************
 * getEnd2()
 * ***********/

Point LineSegment::getEnd2()
{
	return end2;
}

/******************************************
 * Length(): Use distanceTo to get length
 * ***************************************/

double LineSegment::length()
{

	return end1.distanceTo(end2);

}

/*******************************************
 * slope(): calculate the slope of the line
 * *****************************************/

double LineSegment::slope()
{

	double differenceX;
	double differenceY;

	differenceX = (end1.getXcoord() -  end2.getXcoord());
	differenceY = (end1.getYcoord() - end2.getYcoord());
	double slope = differenceY/differenceX;
	return slope;
}

/***********************************************
 * Main method: get coordinates for two points
 * Create one LineSegment object and calculate 
 * Length and slope.
 * ********************************************/
int main()
{
double xCoordIn;
double yCoordIn;
Point p1;
Point p2;
LineSegment line1;

cout << "What is the first x coordinate?" << endl;
cin >> xCoordIn;
cout << "What is the first y coordinate?" << endl;
cin >> yCoordIn;
//set point1 coordinates
p1.setXcoord(xCoordIn);
p1.setYcoord(yCoordIn);

cout << "What is the second x coordinate?" << endl;
cin >> xCoordIn;
cout << "What is the second y coordinate?" << endl;
cin >> yCoordIn;
//set point2 coordinates
p2.setXcoord(xCoordIn);
p2.setYcoord(yCoordIn);
//set LineSegment points
line1.setEnd1(p1);
line1.setEnd2(p2);


cout << "The length of the line is: " << line1.length() << endl;
//check if the line is vertical
if(isinf(line1.slope()))
cout << "The line is vertical." << endl;
else
cout << "The slope of the line is: " << line1.slope() << endl;


return 0;
}



