/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg8P1
*/

// This program determines which of a company’s four divisions (Northeast, Southeast,
// Northwest, and Southwest) had the greatest sales for a quarter.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	const string NE_DIVISION = "Northeast";
	const string NW_DIVISION = "Northwest";
	const string SE_DIVISION = "Southeast";
	const string SW_DIVISION = "Southwest";

	double salesNE, salesNW, salesSE, salesSW;

	// Set precision for $ output
	cout << setprecision(2) << fixed << showpoint;
	cout << "To determine the winning division for this quarter, we must first compare quarterly sales. \n";

	// Call getSales function for each division
	salesNE = getSales(NE_DIVISION);

	salesNW = getSales(NW_DIVISION);

	salesSE = getSales(SE_DIVISION);

	salesSW = getSales(SW_DIVISION);

	// Call findHighest function to determine which division has highest sales
	cout << "Calculating highest division sales..." << endl;
	findHighest(salesNE, salesNW, salesSE, salesSW);

	cout << "Congratulations to the winning division! Keep up the great work!" << endl;

	return 0;
}

double getSales(string division)
{
	double sales;
	cout << "Please enter the quarterly sales figure for the " << division << " division:" << endl;
	cin >> sales;
	while (sales < 0)
	{
		cout << "Negative sales numbers are not accepted, please enter a sales amount greater than $0.00:" << endl;
		cin >> sales;
	}

	return sales;
}

void findHighest(double salesNE, double salesNW, double salesSE, double salesSW)
{
	// Determine which division's sales is the highest.
	if (salesNE > salesNW && salesNE > salesSE && salesNE > salesSW)
	{
		cout << "The division with the highest sales for this quarter is the Northeast Division, with $" << salesNE << endl;
	}
	else if (salesNW > salesNE && salesNW > salesSE && salesNW > salesSW)
	{
		cout << "The division with the highest sales for this quarter is the Northwest Division, with $" << salesNW << endl;
	}
	else if (salesSE > salesNE && salesSE > salesNW && salesSE > salesSW)
	{
		cout << "The division with the highest sales for this quarter is the Southeast Division, with $" << salesSE << endl;
	}
	else
		cout << "The division with the highest sales for this quarter is the Southwest Division, with $" << salesSW << endl;
}