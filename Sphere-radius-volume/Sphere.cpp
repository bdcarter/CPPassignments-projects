/**********************************************
 * Author:			Brianna Carter
 * Date Created:		2/24/15
 * Date Modified:		2/24/15
 *
 * This file contains the methods for the 
 * Sphere class.
 * double radius,
 * Sphere(), Sphere(double), void setRadius(double),
 * double getRadius(); double getVolume.
 * ***************************************************/

#include "Sphere.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

Sphere::Sphere()
{

	double radius = 0.0;

}

Sphere::Sphere(double radiusIn)
{

	setRadius(radiusIn);
}

void Sphere::setRadius(double radiusIn)
{

	radius = radiusIn;
}

double Sphere::getRadius()
{

	return radius;
}


double Sphere::getVolume()
{
//calculate volume
	cout << fixed << showpoint << setprecision(4);
	double volume = (1.3333333) * 3.14159265 * pow(radius, 3);

}

