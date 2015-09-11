/***************************************************************
 * 		findMode.cpp
 * Author:				Brianna Carter
 * Date Created:			2/25/15
 * Date Modified:			2/25/15
 *
 * This file contains a function that takes an array of ints
 * and displays the mode. 
 * ***********************************************************/
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
/*****************************************************
 * Function: Mode
 * Parameters: pointer to array list, list size
 *
 * This function uses nested loops to compare each number
 * and keep track of how often each one appears and adds
 * the most frequent numbers to a vector then prints out
 * the mode. The mode can range from one number to all
 * of the numbers.
 * ***************************************************/
void Mode(int *list, int size)
{
	int modeCount;	// int to hold how many times one number has been encountered
	int highCount=0; //stores the largest modeCount to compare with the next loop
	vector<int> mode; //vector to store the numbers that are considered modes
	sort(list, list + size); // sort the array


// compare each number with all of the others
	for(int x=0; x < size; x++)
	{
	modeCount = 0; //set mode count to zero each time a new number is being compared


		for(int y =0; y < size; y++)//loop comparing all of the numbers
		{
			if(list[x] == list[y]) // if both numbers are the same
			{
				modeCount++; // increase the mode counter

				if(modeCount > highCount) // if the counter is the biggest
				{	highCount = modeCount; //set the high counter
					mode.clear(); //clear the array of the other mode
					mode.push_back(list[x]); //add the new mode
				}

				else if(modeCount == highCount)//if the two appear equally
				{
					mode.push_back(list[x]);//add the new number
				}
			//if the count isn't the highest, break the loop
				else if(modeCount < highCount)
				{ break;}
			}
		}

	}	



	cout << "The mode is: " << endl;
	for(int y = 0; y <mode.size(); y++)
	{
		cout << mode[y] << endl;
	}
		
}

int main()
{
int size;
int *list;

	cout << "How many numbers would you like to enter?" << endl;
	cin >> size;

	list = new int[size];

	cout << "Please enter the numbers: " << endl;

	for(int count = 0; count < size; count++)
	{ cout << "Number " << (count + 1) << ": ";
	  cin >> list[count];
	}

	Mode(list, size);




return 0;
}



