/*************************************************
 * Author:			Brianna Carter
 * Date Created:		2/24/15
 * Date Edited:			2/24/15
 *
 * This file contains the class definitions for 
 * the Sphere class.
 * **********************************************/

#ifndef SPHERE_CPP
#define SPHERE_CPP

class Sphere
{

	private:
		double radius;

	public:
		Sphere();
		Sphere(double);
		void setRadius(double);
		double getRadius();
		double getVolume();
};
#endif

