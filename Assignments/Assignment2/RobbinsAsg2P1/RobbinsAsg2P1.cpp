/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg2P1, CS317
*/

// This program averages a student's assignment and exam grades and calculates the final grade.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, idNumber;
	int asg1, asg2, asg3, exam1, exam2;

	// Ask the user for the student name and ID number, followed by assignment and exam grades.
	cout << "Please enter the student's name: " << endl;
	cin >> name;
	cout << "Please enter the student's ID number: " << endl;
	cin >> idNumber;

	cout << "Please enter the student's three assignment grades, separated by a single space: ";
	cin >> asg1 >> asg2 >> asg3;

	cout << "Please enter the student's two exam grades, separated by a single space: ";
	cin >> exam1 >> exam2;

	const double ASG_WEIGHT = 0.40;
	const double EXAM_WEIGHT = 0.60;
	
	double asgAverage = (static_cast<double>(asg1) + asg2 + asg3) / 3;
	
	double examAverage = (static_cast<double>(exam1) + exam2) / 2;

	double overallGrade = (asgAverage * ASG_WEIGHT) + (examAverage * EXAM_WEIGHT);

	//Display the information and results.
	cout << "\n\n";
	cout << name << ", Student number " << idNumber << endl;
	cout << "Assignment Grades: " << asg1 << " " << asg2 << " " << asg3 << endl;
	cout << "Exam Grades: " << exam1 << " " << exam2 << endl;
	cout << "Overall Final Grade: " << overallGrade;

	return 0;
}