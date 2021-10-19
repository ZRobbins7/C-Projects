// Zac Robbins
// zrobbins @my.athens.edu
// 00100125
// Assignment 1 Problem 7, CS 317

#include <iostream>
using namespace std;

int main()
{
	double bonusAmount = 360.00;
	int bonusPeriod = 12;
	double annualBonus;

	// Calculate the annual bonus:
	annualBonus = bonusAmount * bonusPeriod;

	// Display the resulting annual bonus amount:
	cout << "The total annual bonus pay is $" << annualBonus << endl;
}