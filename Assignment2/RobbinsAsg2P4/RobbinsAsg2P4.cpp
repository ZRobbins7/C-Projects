/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg2P3, CS317
*/

// This program calculates the amount of weight in kilos from the user entered weight in pounds.

#include <iostream>
using namespace std;

int main()
{
	const double CONVERSION_FACTOR = 2.2046;
	const int FORMULA_HALF = 2;
	const int FORMULA_CONSTANT = 1;
	const int FORMULA_DIVISOR = 10;

	int pounds;

	// Ask the user to enter the weight in pound of their first lift.
	cout << "Enter the weight in pounds of your first competitive lift: " << endl;
	cin >> pounds;

	// Calculate estimated weight in kilos, followed by exact weight.
	double kilosEstimated = (pounds / static_cast<double>(FORMULA_HALF)) - ((pounds / static_cast<double>(FORMULA_HALF)) * (static_cast<double>(FORMULA_CONSTANT) / FORMULA_DIVISOR));

	double kilosExact = pounds / CONVERSION_FACTOR;

	// Display results.
	cout << "The estimated weight of your first lift in kilos is " << kilosEstimated << endl;
	cout << "The exact weight of your first lift in kilos is " << kilosExact;

	return 0;
}