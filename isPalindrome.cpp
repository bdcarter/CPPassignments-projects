/***************************************************************************************
 * Program name						isPalindrome.cpp
 * Author						Brianna Carter
 * Date created						2/1/2015
 * Date modified					2/1/2015
 * 	This program gets a word from the user, compares it forward and backward and 
 * 	determines if it is a palindrome. 
 ****************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// function prototype
bool isPalindrome(string);

int main()
{
	bool palindrome;
	string word;

	cout << "Please enter a word." << endl;
	cin >> word;
// call function
	isPalindrome(word);
//if function returns true
	if(isPalindrome(word))
	{cout << "This word is a palindrome." << endl;}
//if function returns false
	else
	{cout << "This word is not a palindrome." << endl;}

return 0;
}
//function header
bool isPalindrome(string word)
{
	
	bool palindrome;
//for the length of the word, compare the first and last characters. If they are different, break the
//loop, palindrome is false. If they are the same, palindrome is true.
	for(int c=0; c < word.length(); c++)
	{ 
		if (word.at(c) != word.at(word.length()-1-c))
			{
			palindrome = false;
			break;
			}
		else
			{palindrome = true;
			}

	}
//return the truth value
	return palindrome;
	
}	


