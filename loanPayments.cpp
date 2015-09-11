/**************************************************************
 * loanPayments.cpp
 * Author:				Brianna Carter
 * Date Created:			1/14/15
 * Last Modified:			1/14/15
 * 	This program caluclates total interest paid on a loan 
 * 	using the loan amount, interest rate, and number of
 * 	 payments.
 ************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double loanTotal;
	float percentInterestRate;
	double monthlyInterest;
	int numberOfPayments;
	double monthlyPayments;
	double totalPaid;
	double totalInterest;
	
	cout << "What is the loan amount?" << endl;
	cin >> loanTotal;
	cout << "What is the interest rate?" << endl;
	cin >> percentInterestRate; 
	cout << "What is the number of payments you will make?" << endl;
	cin >> numberOfPayments;
	
		monthlyInterest = percentInterestRate / 100;

		monthlyPayments = ((monthlyInterest * pow(1 + monthlyInterest, numberOfPayments))
			/ (pow(1 + monthlyInterest, numberOfPayments) - 1)) * loanTotal;

		totalPaid = monthlyPayments * numberOfPayments;
	
		totalInterest = totalPaid - loanTotal; 
	
	cout << endl;	
	cout << fixed << setprecision(2);
	cout << "Loan Amount:" << setw(20) << "$" << loanTotal << endl;
	cout << "Monthly Interest Rate:" << setw(13) << percentInterestRate << "%" << endl; 
	cout << "Number of Payments:" << setw(14) << numberOfPayments << endl;
	cout << "Monthly Payment:" << setw(21) << monthlyPayments << endl;
	cout << "Total Amount Paid:" << setw(14) << "$" << totalPaid << endl;
	cout << "Total Interest Paid:" << setw(12) << "$" << totalInterest << endl;



	return 0;

}
