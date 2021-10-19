/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 Asg7P2
*/

// This program calculates the size of a number file, then the sum and average of the numbers within.
// It reads the numbers from a file, and writes the results to a new file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Variables
	double average;
	int total, number;
	int sum = 0;

	// Open input file and check for errors opening
	ifstream inFile;
	inFile.open("Random.txt");

	// Open output file to receive data
	ofstream outFile;
	outFile.open("RandomResults.txt");

	cout << "Searching for file..." << endl;

	if (inFile)
	{
		cout << "File found." << endl << endl;

		for(total = 0; inFile >> number; total++)
		{
			sum += number;
		}

		average = static_cast<double>(sum) / total;

		//Display to the screen
		cout << "The total number of numbers in the input file is: " << total << endl;
		cout << "The sum of all the numbers in the input file is: " << sum << endl;
		cout << "The average of all the numbers in the input file is: " << average << endl;

		// Write to output file
		outFile << "Results from the Random number file driven program: " << endl << endl;
		outFile << "The total number of numbers in the input file is: " << total << endl;
		outFile << "The sum of all the numbers in the input file is: " << sum << endl;
		outFile << "The average of all the number in the input file is: " << average << endl;

		// Close the input and output files
		inFile.close();
		outFile.close();

		cout << "Program complete, results written to new file.";
	}
	else
		cout << "Error 404: File not found.";

	return 0;
}