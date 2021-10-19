/*
Zac Robbins
zrobbins@my.athens.edu
0010025
CS317 - Asg7P3
*/

// This program sorts a list of names from a file to display which name will be first and which will be last alphabetically.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Variables
	string firstInLine, lastInLine, name;

	// Open input file and check for errors opening
	ifstream inputFile;
	inputFile.open("LineUp.txt");

	cout << "Locating file..." << endl;

	if (inputFile)
	{
		inputFile >> firstInLine;
		lastInLine = firstInLine;

		while (inputFile >> name)
		{
			if (name < firstInLine)
			{
				firstInLine = name;
			}
			else if (name > lastInLine)
			{
				lastInLine = name;
			}
		}

		// Close the file
		inputFile.close();

		// Display results
		cout << "The first name in line alphabetically is " << firstInLine << endl;
		cout << "The last name in line alphabetically is " << lastInLine << endl;

		cout << "Program completed." << endl;

	}
	else
		cout << "File locating failed." << endl;

	return 0;
}