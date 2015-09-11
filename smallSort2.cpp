/**********************************************
 * Author:			Brianna Carter
 * Date Created:		2/24/15
 * Dtae edited:			2/24/15
 *
 * This program contains a function that 
 * sorts values of three numbers into ascending
 * order. The function uses pointers to 
 * modify the numbers so the main function 
 * can print the numbers in order.
 * ******************************************/

#include <iostream>

void Sort(int *, int *, int *);

int main()
{

using namespace std;

int num1in;
int num2in;
int num3in;
int *num1;
int *num2;
int *num3;
//get numbers from user
	cout << "Please enter your first number." << endl;
	cin >> num1in;
	cout << "Please enter your second number." << endl;
	cin >> num2in;
	cout << "Please enter the last number." << endl;
	cin >> num3in;
	cout << endl;
//set pointers 
num1 = &num1in;
num2 = &num2in;
num3 = &num3in;
//print original order
	cout << "Original order:" << endl;
	cout << *num1 << endl;
	cout << *num2 << endl;
	cout << *num3 << endl;
	cout << endl;
//call function
Sort(num1, num2, num3);
//print sorted order
	cout << "Sorted order:" << endl;
	cout << *num1 << endl;
	cout << *num2 << endl;
	cout << *num3 << endl;


return 0;
}

/****************************************************
 * Function: Sort
 * pointers to variables: num1, num2, num3
 *
 * This function uses pointers to sort the user input
 * from lowest to highest.
 * *************************************************/
void Sort(int* num1, int* num2, int* num3)
{
using namespace std;
int temp;
//compare first and third numbers, switch if in wrong order
	if(*num1 > *num3)	
	{ temp = *num1;
	*num1 = *num3;
	*num3 = temp;}
//compare first and second numbers, switch if in wrong order
	if(*num1 > *num2)
	{temp = *num1;
	*num1 = *num2;
	*num2 = temp;}
//compare second and third numbers, switch if in wrong order
	if(*num3 < *num2)
	{temp = *num3;
	*num3 = *num2;
	*num2 = temp;}

}


