/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Project 1
*/

// This program will calculate the current of a circuit to verify the voltage and other variables are correct.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int VOLTAGE_RUN_ONE = 20;
	const int VOLTAGE_RUN_TWO = 35;
	const int VOLTAGE_RUN_THREE = 15;
	const int VOLTAGE_RUN_FOUR = 6;

	const int RESISTANCE_RUN_ONE = 10;
	const int RESISTANCE_RUN_TWO = 1000;

	const double TIMECONSTANT_RUN_ONE = 0.16;
	const double TIMECONSTANT_RUN_TWO = 0.55;
	const double TIMECONSTANT_RUN_THREE = 2.6;
	const double TIMECONSTANT_RUN_FOUR = 0.044;

	const double EULERS_NUMBER = 2.71828;

	double timeOne, timeTwo, timeThree, timeFour, timeFive, timeSix, timeSeven, timeEight, timeNine;

	double currentOne, currentTwo, currentThree, currentFour, currentFive, currentSix, currentSeven, currentEight, currentNine;

	cout << "Please enter the time (in seconds) that circuit 1 will run: " << endl;
	cin >> timeOne;

	cout << "Please enter the time (in seconds) that circuit 2 will run: " << endl;
	cin >> timeTwo;

	cout << "Please enter the time (in seconds) that circuit 3 will run: " << endl;
	cin >> timeThree;

	cout << "Please enter the time (in seconds) that circuit 4 will run: " << endl;
	cin >> timeFour;

	cout << "Please enter the time (in seconds) that circuit 5 will run: " << endl;
	cin >> timeFive;

	cout << "Please enter the time (in seconds) that circuit 6 will run: " << endl;
	cin >> timeSix;

	cout << "Please enter the time (in seconds) that circuit 7 will run: " << endl;
	cin >> timeSeven;

	cout << "Please enter the time (in seconds) that circuit 8 will run: " << endl;
	cin >> timeEight;

	cout << "Please enter the time (in seconds) that circuit 9 will run: " << endl;
	cin >> timeNine;

	// Formula : i = (voltage/resistance) * pow (eulers, (-time/timeconstant))
	currentOne = (static_cast<double>(VOLTAGE_RUN_ONE) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeOne / TIMECONSTANT_RUN_FOUR)));

	currentTwo = (static_cast<double>(VOLTAGE_RUN_TWO) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeTwo / TIMECONSTANT_RUN_ONE)));

	currentThree = (static_cast<double>(VOLTAGE_RUN_TWO) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeThree / TIMECONSTANT_RUN_ONE)));

	currentFour = (static_cast<double>(VOLTAGE_RUN_TWO) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeFour / TIMECONSTANT_RUN_ONE)));

	currentFive = (static_cast<double>(VOLTAGE_RUN_TWO) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeFive / TIMECONSTANT_RUN_ONE)));

	currentSix = (static_cast<double>(VOLTAGE_RUN_THREE) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeSix / TIMECONSTANT_RUN_TWO)));

	currentSeven = (static_cast<double>(VOLTAGE_RUN_THREE) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeSeven / TIMECONSTANT_RUN_TWO)));

	currentEight = (static_cast<double>(VOLTAGE_RUN_THREE) / RESISTANCE_RUN_ONE) * (pow(EULERS_NUMBER, (-timeEight / TIMECONSTANT_RUN_TWO)));

	currentNine = (static_cast<double>(VOLTAGE_RUN_FOUR) / RESISTANCE_RUN_TWO) * (pow(EULERS_NUMBER, (-timeNine / TIMECONSTANT_RUN_THREE)));

	cout << "\n\n";
	cout << setprecision(3) << fixed << showpoint;
	cout << left <<  setw(12) << "Voltage V" << setw(19) << "Resistance R" << setw(15) << "RC" << setw(11) << "Time t" << setw(12) << "Current i" << endl;
	cout << setw(15) << "(Volts)" << setw(10) << "(Ohms)" << setw(19) << "(Time Constant)" << setw(15) << "(Seconds)" << setw(15) << "(Amps)" << endl;
	cout << right << setw(4) << VOLTAGE_RUN_ONE << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_FOUR << setw(17) << timeOne << setw(14) << currentOne << endl;
	cout << setw(4) << VOLTAGE_RUN_TWO << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_ONE << setw(17) << timeTwo << setw(14) << currentTwo << endl;
	cout << setw(4) << VOLTAGE_RUN_TWO << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_ONE << setw(17) << timeThree << setw(14) << currentThree << endl;
	cout << setw(4) << VOLTAGE_RUN_TWO << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_ONE << setw(17) << timeFour << setw(14) << currentFour << endl;
	cout << setw(4) << VOLTAGE_RUN_TWO << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_ONE << setw(17) << timeFive << setw(14) << currentFive << endl;
	cout << setw(4) << VOLTAGE_RUN_THREE << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_TWO << setw(17) << timeSix << setw(14) << currentSix << endl;
	cout << setw(4) << VOLTAGE_RUN_THREE << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_TWO << setw(17) << timeSeven << setw(14) << currentSeven << endl;
	cout << setw(4) << VOLTAGE_RUN_THREE << setw(15) << RESISTANCE_RUN_ONE << setw(15) << TIMECONSTANT_RUN_TWO << setw(17) << timeEight << setw(14) << currentEight << endl;
	cout << setw(4) << VOLTAGE_RUN_FOUR << setw(15) << RESISTANCE_RUN_TWO << setw(15) << TIMECONSTANT_RUN_THREE << setw(17) << timeNine << setw(14) << currentNine << endl;


	return 0;
}