/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Assignment 4 Problem 1
*/

// This program calculates time based on the number of seconds entered by the user.

#include <iostream>
using namespace std;

int main()
{
	int days = 0, hours = 0, minutes = 0, seconds;
	const int MINUTE_LENGTH = 60;
	const int HOUR_LENGTH = 60;
	const int DAY_LENGTH = 24;

	cout << "Please enter the number of seconds you wish to calculate: " << endl;
	cin >> seconds;

	if (seconds < 0)
	{
		cout << "Please enter a positive number next time.";
		return 0;
	}
		
	else if (seconds >= MINUTE_LENGTH)
	{
		minutes = seconds / MINUTE_LENGTH;
		seconds %= MINUTE_LENGTH;
		if (minutes >= HOUR_LENGTH)
		{
			hours = minutes / HOUR_LENGTH;
			minutes %= HOUR_LENGTH;
			if (hours >= DAY_LENGTH)
			{
				days = hours / DAY_LENGTH;
				hours %= DAY_LENGTH;
			}
		}
	}

	cout << "The time given by the number of seconds entered is: " << endl;
	if (days > 0)
		cout << days << " day(s) \n";
	if (hours > 0)
		cout << hours << " hour(s) \n";
	if (minutes > 0)
		cout << minutes << " minute(s) \n";
	cout << seconds << " second(s)";

	return 0;
}