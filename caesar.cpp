/*************************************************
 * Author:		Brianna Carter
 * Date created:	2/17/15
 * Date modified:	2/17/15
 *
 * This program contains a function that acts as 
 * a Caesar cipher. It shifts letters forward
 * a certain number of spaces in the alphabet.
 * The function takes a C-style string and the
 * offset number as parameters. The main method 
 * gets both parameters from the user. 
 * *********************************************/

/************************************************
 * Caesar function. This shifts the letters in 
 * the user input, keeping case the same.
 * ********************************************/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encipher(string message, int offset)
{
int length = message.length();//get the length of the message
int count;


	for(count = 0; count < length; count++)//loop through each letter
	{
		if (isalpha(message[count])) //only shift the letters
		//loop through all shifts for one letter at a time
		{ for(int move = 0; move < offset; move++)
			{//check if the letter is 'z' and move it to 'a'
			if (message[count] == 'z')
			{message[count] = 'a';}
			else if(message[count] =='Z')//include upper case
			{message[count] = 'A';}
			else //shift letters 'a-y'
			{message[count]++;}
			}
		}
	}return message;
}

int main()
{
	string message;
	int offset;

	cout << "Please enter a sentance to encipher." << endl;
	getline(cin, message);
	cout << "How many spaces would you like to shift?" << endl;
	cin >> offset;

	cout << "The new message is " << encipher(message, offset) << endl;

return 0;
}





