/*********************************************************
 * Author:			Brianna Carter
 * Date:			1/14/2015
 * Date Modified		1/14/2015
 *
 * This program generates total income from ticket sales and
 * uses formatting to display the results consistently.
 ******************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double costA = 15, costB = 12, costC = 9;
	double ticketA, ticketB, ticketC;
	double ticketTotal;

	cout << "How many Class A ticktes were sold?" << endl;
	cin >> ticketA;
	cout << "How many Class B tickets were sold?" << endl;
	cin >> ticketB;
	cout << "How many Class C tickets were sold?" << endl;
	cin >> ticketC;

	 ticketTotal = (ticketA*costA) + (ticketB*costB) + (ticketC*costC);

	cout << fixed << setprecision(2);
	cout << "Total ticket sales were: $" << ticketTotal << endl; 
	
	return 0;









}
