/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg7P4
*/

// This program creates a square of asterisks on the screen using a user entered number no greater than 15.

#include <iostream>
using namespace std;

int main()
{
	// Variables
	int number, horizontalCount, verticalCount;
	int minimum = 1;
	int maximum = 15;

	// User input
	cout << "Enter a positive integer in the range of 1 - 15: ";
	cin >> number;

	while (number < minimum || number > maximum)
	{
		cout << "\nERROR: Invalid number." << endl;
		cout << "Enter a positive integer in the range of 1 - 15: ";
		cin >> number;
	}

	for (verticalCount = number; verticalCount >= 1; verticalCount -= 1)
	{
		for (horizontalCount = number; horizontalCount >= 1; horizontalCount -= 1)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n\n";
	return 0;
}