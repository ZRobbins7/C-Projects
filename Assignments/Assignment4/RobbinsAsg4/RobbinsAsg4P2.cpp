/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg4P2
*/

// This program calculates the run time of three runners from seconds entered. For each runner, their past runs (if applicable)
// will be compared to current time run. The runners will then be ranked from first to third.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string TEAM_NAME = "Team 12:11";
	const int MINUTE_LENGTH = 60, HOUR_LENGTH = 60, DAY_LENGTH = 24;

	string firstRunner, secondRunner, thirdRunner;
	string firstPlace, secondPlace, thirdPlace;
	string runBefore, yes = "Y", no = "N";
	int seconds = 0, minutes = 0, hours = 0, days = 0;
	int runner1Time, runner2Time, runner3Time, previousTime, averageTime;

	cout << "Please enter the name of the first member of your team: " << endl;
	cin >> firstRunner;
	cout << "Please enter the name of the second member of your team: " << endl;
	cin >> secondRunner;
	cout << "Please enter the name of the third member of your team: " << endl;
	cin >> thirdRunner;

	// First runner
	cout << "Has " << firstRunner << " run this race before? (Y/N)" << endl;
	cin >> runBefore;

	if (runBefore == yes)
	{
		cout << "Please enter the current time for " << firstRunner << " in seconds: " << endl;
		cin >> runner1Time;
		if (runner1Time < 0)
		{
			return 0;
		}
		cout << "Please enter the previous time for " << firstRunner << " in seconds: " << endl;
		cin >> previousTime;
		if (previousTime < 0)
		{
			return 0;
		}
		// Did runner improve?
		if (runner1Time < previousTime)
			cout << "Congratulations, you improved your time!" << endl;
		else
			cout << "Don't give up, you'll get faster next time!" << endl;

		averageTime = (runner1Time + previousTime) / 2;
		cout << "Your average time between the two races is: " << endl;
		if (averageTime >= MINUTE_LENGTH)
		{
			minutes = averageTime / MINUTE_LENGTH;
			seconds = averageTime % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else if (runBefore == no)
	{
		cout << "Please enter the current time for " << firstRunner << " in seconds: " << endl;
		cin >> runner1Time;
		if (runner1Time < 0)
		{
			return 0;
		}

		if (runner1Time >= MINUTE_LENGTH)
		{
			minutes = runner1Time / MINUTE_LENGTH;
			seconds = runner1Time % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else
		return 0;

	// Second Runner
	cout << "Has " << secondRunner << " run this race before? (Y/N)" << endl;
	cin >> runBefore;

	if (runBefore == yes)
	{
		cout << "Please enter the current time for " << secondRunner << " in seconds: " << endl;
		cin >> runner2Time;
		if (runner2Time < 0)
		{
			return 0;
		}
		cout << "Please enter the previous time for " << secondRunner << " in seconds: " << endl;
		cin >> previousTime;
		if (previousTime < 0)
		{
			return 0;
		}
		// Did runner improve?
		if (runner2Time < previousTime)
			cout << "Congratulations, you improved your time!" << endl;
		else
			cout << "Don't give up, you'll get faster next time!" << endl;

		averageTime = (runner2Time + previousTime) / 2;
		cout << "Your average time between the two races is: " << endl;
		if (averageTime >= MINUTE_LENGTH)
		{
			minutes = averageTime / MINUTE_LENGTH;
			seconds = averageTime % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else if (runBefore == no)
	{
		cout << "Please enter the current time for " << secondRunner << " in seconds: " << endl;
		cin >> runner2Time;
		if (runner2Time < 0)
		{
			return 0;
		}

		if (runner2Time >= MINUTE_LENGTH)
		{
			minutes = runner2Time / MINUTE_LENGTH;
			seconds = runner2Time % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else
		return 0;

	// Third Runner
	cout << "Has " << thirdRunner << " run this race before? (Y/N)" << endl;
	cin >> runBefore;

	if (runBefore == yes)
	{
		cout << "Please enter the current time for " << thirdRunner << " in seconds: " << endl;
		cin >> runner3Time;
		if (runner3Time < 0)
		{
			return 0;
		}
		cout << "Please enter the previous time for " << thirdRunner << " in seconds: " << endl;
		cin >> previousTime;
		if (previousTime < 0)
		{
			return 0;
		}
		// Did runner improve?
		if (runner3Time < previousTime)
			cout << "Congratulations, you improved your time!" << endl;
		else
			cout << "Don't give up, you'll get faster next time!" << endl;

		averageTime = (runner3Time + previousTime) / 2;
		cout << "Your average time between the two races is: " << endl;
		if (averageTime >= MINUTE_LENGTH)
		{
			minutes = averageTime / MINUTE_LENGTH;
			seconds = averageTime % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else if (runBefore == no)
	{
		cout << "Please enter the current time for " << thirdRunner << " in seconds: " << endl;
		cin >> runner3Time;
		if (runner3Time < 0)
		{
			return 0;
		}

		if (runner3Time >= MINUTE_LENGTH)
		{
			minutes = runner3Time / MINUTE_LENGTH;
			seconds = runner3Time % MINUTE_LENGTH;
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
		if (days > 0)
			cout << days << " day(s) \n";
		if (hours > 0)
			cout << hours << " hour(s) \n";
		if (minutes > 0)
			cout << minutes << " minute(s) \n";
		cout << seconds << " second(s)" << endl;
	}
	else
		return 0;
	
	// Compare three runners and rank them.
	if (runner1Time < runner2Time)
	{
		secondPlace = firstRunner;
		if (runner1Time < runner3Time)
		{
			firstPlace = firstRunner;
			if (runner2Time < runner3Time)
			{
				secondPlace = secondRunner;
				thirdPlace = thirdRunner;
			}
			else if (runner3Time < runner2Time)
			{
				secondPlace = thirdRunner;
				thirdPlace = secondRunner;
			}
		}
		else if (runner3Time < runner1Time)
		{
			firstPlace = thirdRunner;
			thirdPlace = secondRunner;
		}
	}
	else if (runner2Time < runner1Time)
	{
		secondPlace = secondRunner;
		if (runner2Time < runner3Time)
		{
			firstPlace = secondRunner;
			if (runner1Time < runner3Time)
			{
				secondPlace = firstRunner;
				thirdPlace = thirdRunner;
			}
			else if (runner3Time < runner1Time)
			{
				secondPlace = thirdRunner;
				thirdPlace = firstRunner;
			}
		}
		else if (runner3Time < runner2Time)
		{
			firstPlace = thirdRunner;
			thirdPlace = firstRunner;
		}
	}

	cout << "First Place: " << firstPlace << endl;
	cout << "Second Place: " << secondPlace << endl;
	cout << "Third Place: " << thirdPlace << endl;
	

	return 0;
}