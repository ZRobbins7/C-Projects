/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg5P1
*/

// This program lets the user choose an option from a menu and calculates the area of either a circle, rectangle, or triangle.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	const float TRIANGLE_HALF = 0.5;
	double circleArea, rectangleArea, triangleArea;
	int menuChoice, radius, length, width, base, height;

	cout << "Geometry Calculator" << endl << endl;
	cout << right << setw(38) << "1. Calculate the Area of a Circle" << endl;
	cout << setw(41) << "2. Calculate the Area of a Rectangle" << endl;
	cout << setw(40) << "3. Calculate the Area of a Triangle" << endl;
	cout << setw(12) << "4. Quit" << endl << endl;
	cout << setw(30) << "Enter your choice (1-4): ";
	cin >> menuChoice;

	switch (menuChoice)
	{
	case(1):
	{
		cout << "Please enter the radius of the circle: " << endl;
		cin >> radius;
		if (radius < 0)
		{
			cout << "The radius cannot be negative.";
			return 0;
		}
		circleArea = PI * (pow(radius, 2));
		cout << "The area of this circle is: " << circleArea << endl;
		break;
	}
	case(2):
	{
		cout << "Please enter the length of the rectangle, followed by the width:" << endl;
		cin >> length >> width;
		if (length < 0 || width < 0)
		{
			cout << "The length or width cannot be negative numbers.";
			return 0;
		}
		rectangleArea = static_cast<double>(length) * width;
		cout << "The area of this rectangle is: " << rectangleArea << endl;
		break;
	}
	case(3):
	{
		cout << "Please enter the length of the base of the triangle, followed by the height of the triangle:" << endl;
		cin >> base >> height;
		if (base < 0 || height < 0)
		{
			cout << "The base or height cannot be negative.";
			return 0;
		}
		triangleArea = static_cast<double>(base) * height * TRIANGLE_HALF;
		cout << "The area of this triangle is: " << triangleArea << endl;
		break;
	}
	case(4):
		return 0;
	default:
		cout << "You did not enter a number within the range of 1 through 4.";
	}

	return 0;
}