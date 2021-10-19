/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg10P1
*/

// This program asks the user for a file name, assumes the file contains a series of numbers,
// each written on a separate line. The program reads the contents of the file into an array and
// then displays the data.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

void getArray(int[], int);
int findLowest(int[], int);
int findHighest(int[], int);
int arraySum(int[], int);
float arrayAverage(int, int);

int main()
{
	int highest, lowest, sum;
	float average;
	int numberSeries[SIZE];

	// Ask user for file name
	getArray(numberSeries, SIZE);

	lowest = findLowest(numberSeries, SIZE);
	cout << "The lowest number in the file is " << lowest << endl;

	highest = findHighest(numberSeries, SIZE);
	cout << "The highest number in the file is " << highest << endl;

	sum = arraySum(numberSeries, SIZE);
	cout << "The total of all the numbers in the file is " << sum << endl;

	average = arrayAverage(SIZE, sum);
	cout << "The average of all the numbers in the file is " << average << endl;

	return 0;
}

void getArray(int numbers[], int size)
{
	
	ifstream inFile;
	string filename;

	cout << "Please enter the name of the file you wish to open: " << endl;
	cin >> filename;
	cout << "Searching for file..." << endl;

	inFile.open(filename.c_str());
	if (inFile)
	{
		cout << "File found." << endl;
		for (int count = 0; count < size; count++)
		{
			inFile >> numbers[count];
		}
	}
	else
	{
		cout << "Error, file not found." << endl;
		exit(0);
	}
}

int findLowest(int numbers[], int size)
{
	int lowest = numbers[0];
	for (int count = 0; count < size; count++)
	{
		if (lowest > numbers[count])
			lowest = numbers[count];
	}
	return lowest;
}

int findHighest(int numbers[], int size)
{
	int highest = numbers[0];
	for (int count = 0; count < size; count++)
	{
		if (highest < numbers[count])
			highest = numbers[count];
	}
	return highest;
}

int arraySum(int numbers[], int size)
{
	int total = 0;
	for (int count = 0; count < size; count++)
	{
		total += numbers[count];
	}
	return total;
}

float arrayAverage(int size, int total)
{
	// Divide total (from arraySum function) by size of array for the average
	float average = static_cast<double>(total) / size;
	return average;
}