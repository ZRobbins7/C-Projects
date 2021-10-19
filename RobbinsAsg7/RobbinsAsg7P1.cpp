/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg7P1
*/

// This program produces a bar chart for the population growth of Athens at 20 year intervals.
// It uses an input file, and the results produce an output file.

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	// Variables for population values
	int population;
	int year = 1900;
	
	// Open input file to read data and test for errors
	ifstream inputFile;
	inputFile.open("People.txt");

	// Create and open output file to save results
	ofstream outputFile;
	outputFile.open("PeopleResults.txt");

	cout << "Opening file..." << endl;

	if (inputFile)
	{
		outputFile << "Athens Population Growth" << endl;
		outputFile << "(Each * represents 1,000 people)" << endl;

		while (inputFile >> population)
		{
			outputFile << year << " ";
			while (population >= 1000)
			{
				outputFile << "*";
				population -= 1000;
			}
			outputFile << "\n";
			year += 20;
			
		}

		// Close input file
		inputFile.close();

		// Close output file
		outputFile.close();

		cout << "Program complete, data written to file." << endl;
	}
	else
		cout << "Error opening the file." << endl;

	return 0;
}