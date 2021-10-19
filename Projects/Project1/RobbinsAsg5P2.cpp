/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg5P2
*/

// This program gives the user option of English phrases, then displays the Spanish counterpart.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int menuChoice;

	cout << "Welcome to learning basic Spanish!" << endl;
	cout << "Please select the phrase you would like to learn today from the following choices:" << endl << endl;
	cout << right << setw(20) << "1. Good morning." << endl;
	cout << setw(20) << "2. Good evening." << endl;
	cout << setw(24) << "3. Nice to meet you." << endl;
	cout << setw(18) << "4. I am sorry." << endl;
	cout << setw(27) << "5. I do not understand." << endl;
	cout << setw(12) << "6. Quit." << endl << endl;
	cout << setw(28) << "Enter your choice (1-6): ";
	cin >> menuChoice;

	switch (menuChoice)
	{
	case(1):
		cout << "Buenos dias.";
		break;
	case(2):
		cout << "Buenas noches.";
		break;
	case(3):
		cout << "Mucho gusto.";
		break;
	case(4):
		cout << "Lo siento.";
		break;
	case(5):
		cout << "Yo no comprendo.";
		break;
	case(6):
		return 0;
	default:
		cout << "You did not enter a number in the range of 1 through 6.";
	}

	return 0;
}