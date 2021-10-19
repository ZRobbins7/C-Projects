/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg3P2 - CS317
*/

// This program calculates the number of slices that can be made from a pizza with a user defined diameter.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159;
	const double SLICE_AREA = 14.125;
	double radius, area;
	int diameter, slices;

	cout << "Please enter the diameter of the pizza in inches: " << endl;
	cin >> diameter;

	radius = static_cast<double>(diameter) / 2;

	area = PI * (pow(radius, 2));

	slices = area / SLICE_AREA;

	cout << "The number of slices that can be made from a " << diameter << " inch pizza is " << slices << " slices.";

	return 0;
}