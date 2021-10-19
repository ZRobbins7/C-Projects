/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg3P3 - CS317
*/

// This program creates a receipt for the customer at Ying Thai Kitchen.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string server, date = "7/4/2013", time = "7:28 PM";
	string foodItem1 = "44 Ginger Lover";
	string flavor = "[pork][2**]";
	string foodItem2 = "Brown Rice";
	const double TAX_RATE = 9.48;
	const double GINGER_LOVER_PRICE = 9.50;
	const double BROWN_RICE_PRICE = 2.00;
	double total, tax, grandTotal;
	double fifteenPercent = 0.15, eighteenPercent = 0.18, twentyPercent = 0.20;
	int tableNumber, itemsOrdered = 2, orderNumber = rand();

	cout << "Please enter the name of your server: " << endl;
	cin >> server;

	cout << "Please enter your table number: " << endl;
	cin >> tableNumber;

	total = GINGER_LOVER_PRICE + BROWN_RICE_PRICE;
	tax = total * (TAX_RATE / 100);
	grandTotal = total + tax;

	cout << "\n\n\n";
	cout << setprecision(2) << fixed << showpoint;
	cout << setw(28) << "Ying Thai Kitchen" << endl << setw(30) << "2220 Queen Anne AVE N" << endl;
	cout << setw(28) << "Seattle WA 98109" << endl;
	cout << " Tel. (206) 285-8424  Fax. (206) 285-8427" << endl;
	cout << setw(31) << "www.yingthaikitchen.com" << endl;
	cout << "Welcome to Ying Thai Kitchen Restaurant." << endl << endl;
	
	cout << "Order#: " << left << setw(20) << orderNumber << right << setw(12) <<  "Table " << tableNumber << endl;
	cout << "Date: " << date << " " << time << endl;
	cout << "Server: " << left << setw(20) << server << right << setw(13) << " (T.4)" << endl;
	cout << "------------------------------------------" << endl;

	cout << left << setw(20) << foodItem1 << right << setw(17) << "$" << GINGER_LOVER_PRICE << endl;
	cout << flavor << endl;
	cout << left << setw(20) << foodItem2 << right << setw(17) << "$" << BROWN_RICE_PRICE << endl;
	cout << "------------------------------------------" << endl;

	cout << "Total " << itemsOrdered << left << setw(14) << " item(s)" << right << setw(15) << "$" << total << endl;
	cout << left << setw(20) << "Sales Tax" << right <<  setw(17) << "$" << tax << endl;
	cout << "------------------------------------------" << endl;
	cout << "------------------------------------------" << endl;
	cout << left << setw(20) << "Grand Total" << right << setw(16) << "$" << grandTotal << endl << endl;

	cout << "Tip Guide" << endl;
	cout << "15% = $" << (grandTotal * fifteenPercent) << "," << setw(10) << "18% = $" << (grandTotal * eighteenPercent) << ",";
	cout << setw(10) << "20% = $" << (grandTotal * twentyPercent) << endl << endl;
	cout << setw(30) << "Thank you very much." << endl << setw(27) << "Come back again";

	return 0;
}