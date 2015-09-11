/*************************************************
 * Author:			Brianna Carter
 * Date Created:		2/15/15
 * Date Modified:		2/15/15
 *
 * This file contains the class declarations for
 * the LineSegment class. It includes the Point
 * class and contains two point objects that
 * represent endpoints. There are set and get
 * methods for both endpoints and methods for 
 * length and slope.
 * ******************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"
using namespace std;

class LineSegment
{

private:

	Point end1;
	Point end2;

public:

	LineSegment();
	LineSegment(Point, Point);
	void setEnd1(Point);
	void setEnd2(Point);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();
};

#endif
