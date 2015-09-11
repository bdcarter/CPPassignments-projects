/**********************************************
 * Author:			Brianna Carter
 * Date Created:		2/6/2015
 * Date Edited:			2/6/2015
 *
 * This fille contains the declarations for the 
 * class Box
 * ********************************************/
#ifndef BOX_HPP
#define BOX_HPP

 
class Box
{
private:

	double height;
	double width;
	double length;

public:

	Box();
	Box(double, double, double);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double getVolume();
	double getSurfaceArea();

};
#endif
