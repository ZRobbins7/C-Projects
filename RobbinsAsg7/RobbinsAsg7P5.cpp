/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg7P5
*/

// This program calculates the balance of savings accounts at the end of a month period.
// It uses date from a file, and sends the calculations to a new file.

#include <fstream>
using namespace std;

int main()
{
	// Variables
	int accountNumber, accountType;
	double currentBalance, newBalance, monthlyInterest;
	const double RATE_ONE = 0.06, RATE_TWO = 0.04, RATE_THREE = 0.025, RATE_FOUR = 0.012;

	// Open input file and check for opening errors
	ifstream inFile;
	inFile.open("Text.txt");

	// Open output file to recieve data
	ofstream outFile;
	outFile.open("RobbinsReport.txt");



	return 0;
}