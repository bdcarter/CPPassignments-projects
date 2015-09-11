/************************************************
 * Author:			Brianna Carter
 * Date Created:		2/25/15
 * Date Modified:		2/25/15
 *
 * This file contains a function that prints
 * the radius and volume of a sphere object. 
 * The main function get the radius of a sphere 
 * from the user and creates a Sphere object 
 * and calls the print functoin.
 * ********************************************/

#include "Sphere.hpp"
#include <iostream>
using namespace std;

//function prototype
void printSphereInfo(Sphere *sphere1);

int main()
{
double radiusIn;
Sphere sphere1;
Sphere *pt;

	pt = &sphere1;
	cout << "What is the radius of the sphere?" << endl;
	cin >> radiusIn;
//set radius	
	sphere1.setRadius(radiusIn);

//pass the pointer to the function
	printSphereInfo(pt);

return 0;
}

/***********************************************
 * printSphereInfo: Uses a Sphere pointer to get the
 * radius and volume from the Sphere functions
 * ********************************************/
void printSphereInfo(Sphere *pt)
{

	cout << "The radius of the sphere is: " << endl;
//use the pointer to get radius
	cout << pt -> getRadius() << endl;

	cout << "The volume of the sphere is: " << endl;
//use pointer to get volume
	cout << pt->getVolume() << endl;


}


