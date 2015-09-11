/*********************************************************
 * Author:			Brianna Carter
 * Date Created:		2/15/15
 * Date Modified:		2/15/15
 *
 * This file contains the declarations for the Point class.
 * There is a double for the x coordinate, double for the 
 * y coordinate, and get and set methods for both doubles.
 * ********************************************************/ 

#ifndef POINT_HPP
#define POINT_HPP

using namespace std;

class Point
{
private:

	double xCoord;
	double yCoord;

public:

	Point();
	Point(double, double);
	void setXcoord(double);
	void setYcoord(double);
	int getXcoord();
	int getYcoord();
	double distanceTo(Point) const;
};

#endif

