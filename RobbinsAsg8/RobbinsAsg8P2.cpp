/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg8P2
*/

// This program calculates the average number of days a company’s employees are absent.

#include <iostream>
using namespace std;

int numOfEmployees();
int daysMissed(int);
double averageDaysAbsent(int, int);

int main()
{
	int employees, days;
	double averageAbsences;

	cout << "This program determines the average number of days absent across all employees." << endl;

	employees = numOfEmployees();

	days = daysMissed(employees);

	averageAbsences = averageDaysAbsent(employees, days);

	cout << "The average number of absences across all employees is " << averageAbsences << endl;

	return 0;
}

int numOfEmployees()
{
	int employees;
	cout << "Please enter the number of employees in the company: " << endl;
	cin >> employees;

	// Input validation
	while (employees < 1)
	{
		cout << "There must be 1 or more employees in the company. Please enter the number of employees: " << endl;
		cin >> employees;
	}

	return employees;
}

int daysMissed(int employees)
{
	int days = 0;
	int total = 0;
	
	for (int count = 0; count < employees; count++)
	{
		cout << "Please enter the number of days missed by employee " << (count + 1) << ": " << endl;
		cin >> days;

		// Input validation
		while (days < 0)
		{
			cout << "The number of days missed cannot be negative. Please enter the number of days missed: " << endl;
			cin >> days;
		}

		total += days;
	}

	return total;
}

double averageDaysAbsent(int employees, int days)
{
	double average;

	average = static_cast<double>(days) / employees;

	return average;
}