/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg3P1 - CS317
*/

// This program calculates the compound interest on an initial investment after one year in a savings account.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double principal = 1000.00;
	double rate = 4.25;
	double interest, amount;
	int timesCompounded = 12;

	// Convert rate 4.25% to decimal for formula
	rate /= 100;

	amount = principal * (pow((1 + (rate / timesCompounded)), timesCompounded));

	interest = amount - principal;
	
	//Restore rate to original % form
	rate *= 100;

	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20) << "Interest Rate" << right << setw(10) << rate << "%" << endl;
	cout << left << setw(20) << "Times Compounded" << right << setw(10) << timesCompounded << endl;
	cout << left << setw(20) << "Principal" << "$" << right << setw(9) << principal << endl;
	cout << left << setw(20) << "Interest" << "$" << right <<  setw(9) << interest << endl;
	cout << left << setw(20) << "Amount in Savings" << "$" << right <<  setw(9) << amount;

	return 0;
}