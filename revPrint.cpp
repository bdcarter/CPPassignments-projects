/*******************************************************************
 * 		revPrint
 * Author:			Brianna Carter
 * Date Created:		3/5/15
 * Date Modified:		3/5/15
 *
 * Function: revPrint recursively prints an array in reverse order. 
 * Main: Asks the user for the size of the array, has the user enter
 * the numbers, and adds them to the array.
 * ********************************************************************/

#include <iostream>
using namespace std;

void reverse(int List[], int size)
{
int count = 0;

	if(count < size)
	{
		cout <<  List[size-1] << endl;
		++count;
		reverse(List, --size);
	}

}

int main()
{

int size;

	cout << "How many numbers would you like to enter?" << endl;
	cin >> size;
int List[size];

	for(int x =0; x < size; x++)
	{
		cout << "Please enter number " << x+1 << "." << endl;
		cin >>  List[x]; 
	}

	cout << "The reverse order is: " << endl;

	reverse(List, size);

return 0;
}
