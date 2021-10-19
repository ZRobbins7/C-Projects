/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg2P2, CS317
*/

// This program calculates the necessary ingredients for the user defined number of Oreo Balls.
#include <iostream>
using namespace std;

int main()
{
	// Recipe for 30 Oreo Balls:
	const int CUPS_OREO_COOKIES = 10;
	const int CUPS_CREAM_CHEESE = 2;
	const int CUPS_CHOCOLATE_CHIPS = 4;
	const int NUM_OREO_BALLS = 30;

	int desiredOreoBalls;

	// Ask the user how many Oreo Balls they want to make.
	cout << "Please enter the number of Oreo Balls you would like to make: " << endl;
	cin >> desiredOreoBalls;

	double ingredientMultiplier = static_cast<double>(desiredOreoBalls) / NUM_OREO_BALLS;
	int cupsCookies = ingredientMultiplier * CUPS_OREO_COOKIES;
	int cupsCreamCheese = ingredientMultiplier * CUPS_CREAM_CHEESE;
	int cupsChocolateChips = ingredientMultiplier * CUPS_CHOCOLATE_CHIPS;

	// Display results.
	cout << "\n\n";
	cout << "To make " << desiredOreoBalls << " Oreo Balls, you will need: \n";
	cout << cupsCookies << " cups of crushed Oreos \n";
	cout << cupsCreamCheese << " cups of cream cheese \n";
	cout << cupsChocolateChips << " cups of milk chocolate chips";

	return 0;
}