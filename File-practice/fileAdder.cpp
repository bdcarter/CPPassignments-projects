/**********************************************************
 * Author:				Brianna Carter
 * Date created:			1/21/15
 * Date modified			1/25/15
 *
 * This program will open an existing file, read the numbers, add them, 
 * and write the sum in a different file.
 * *******************************************************/

#include <iostream>
#include <fstream> //needed to use files

using namespace std;

int main()
{
	float number, sum = 0.0;
	ifstream inputFile; //declare input file

	inputFile.open("nums.txt"); //open input file
	
	if (inputFile) // if the file was opened successfully, read the nums
	{
		while (inputFile >> number)
		{ sum = sum + number;}
		cout << sum  << endl;
	}

	else // if the file didn't open, give error
	{ cout << "Error opening file." << endl; }

	ofstream outputFile; //declare output file
	outputFile.open("sum.txt"); //open output file
	
	// write data to output file
	outputFile << "The sum of the values is: " << sum << endl;
	//if output was successful, give success message
	if (outputFile) 
	{cout << "The data has been written to the file." << endl;}
	//if output file was not opened, give error
	else
	{cout << "There was an error writing to the file." << endl;}
	//close both files
	inputFile.close();
	outputFile.close();
return 0;
}
