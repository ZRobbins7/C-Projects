/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS 317 - Project 3
*/

// This program creates a seat reservation chart for employees to be able to properly
// assign seats to people who come to the theater or call to be able to pay ahead of time and reserve their seats.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global variables
const int MAX_ROWS = 7;
const int MAX_COLS = 8;
const float ADULT_MAT = 6.00, ADULT_EVE = 8.00, CHILD_MAT = 4.00, CHILD_EVE = 6.00;
char movieOneMatineeChart[MAX_ROWS][MAX_COLS] = { { '*','*','*','*','*','*','*','*' },{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'} };
char movieOneEveningChart[MAX_ROWS][MAX_COLS] = { { '*','*','*','*','*','*','*','*' },{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'} };
char movieTwoMatineeChart[MAX_ROWS][MAX_COLS] = { { '*','*','*','*','*','*','*','*' },{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'} };
char movieTwoEveningChart[MAX_ROWS][MAX_COLS] = { { '*','*','*','*','*','*','*','*' },{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'},{'*','*','*','*','*','*','*','*'} };
int totalTickets = 0, totalAdultTickets = 0, totalChildTickets = 0;
double totalSales = 0, adultSales = 0, childSales = 0;

// Prototypes
void displayListings();
int movieSelect();
double customerPrice(int, int, int, int);
int ticketCounter(int&, int&, int&, int&, int&);
void displaySeating(char[][MAX_COLS]);
void chooseSeating(char[][MAX_COLS], int);
void blockSeating(char[][MAX_COLS]);
bool administrativeMenu();

int main()
{
	int movieChoice;
	bool endProgram = false;
	double customerSale = 0;
	int numOfTickets, adultTickets, childTickets;

	
	cout << setprecision(2) << fixed << showpoint;

	// Begin loop
	while (endProgram == false)
	{
		displayListings();
		movieChoice = movieSelect();
		if (movieChoice == -99)
		{
			endProgram = administrativeMenu();
		}
		else
		{
			numOfTickets = ticketCounter(totalTickets, totalAdultTickets, totalChildTickets, adultTickets, childTickets);
			customerSale = customerPrice(movieChoice, numOfTickets, adultTickets, childTickets);
			cout << "Your total purchase today is $" << customerSale << endl;
			cout << "Thank you, and enjoy the movie!" << endl << endl << endl;
		}
		
	}

	cout << "Thank you, and have a wonderful evening!" << endl;

	return 0;
}

void displayListings()
{
	cout << "\nWelcome!" << endl;
	cout << "Movie Menu: " << endl;
	cout << "1) Free Birds  3:30" << endl;
	cout << "2) Beethoven   5:30" << endl;
	cout << "3) Free Birds  6:00" << endl;
	cout << "4) Beethoven   7:30" << endl << endl;
	cout << "Adult Tickets are: $6.00 (matinee before 6:00pm)    $8.00 (evening)" << endl;
	cout << "Child Tickets are: $4.00 (matinee before 6:00pm)    $6.00 (evening)" << endl;
}

int movieSelect()
{
	int movieChoice;
	cout << "\nPlease enter the menu number of your movie choice(1-4): " << endl;
	cin >> movieChoice;
	while (movieChoice < 1 && movieChoice != -99 || movieChoice > 4)
	{
		cout << "That is not a valid option, please enter a choice from the menu above: " << endl;
		cin >> movieChoice;
	}
	return movieChoice;
}

int ticketCounter(int &total, int &adults, int &kids, int &adultTickets, int &childTickets)
{
	int numOfTickets = 0;

	cout << "How many adult tickets are needed? " << endl;
	cin >> adultTickets;
	while (adultTickets < 0)
	{
		cout << "That is an invalid choice, please enter a number greater than or equal to zero: " << endl;
		cin >> adultTickets;
	}
	cout << "How many child tickets are needed? " << endl;
	cin >> childTickets;
	while (childTickets < 0)
	{
		cout << "That is an invalid choice, please enter a number greater than or equal to zero: " << endl;
		cin >> childTickets;
	}

	adults += adultTickets;
	kids += childTickets;

	numOfTickets = adultTickets + childTickets;
	total += numOfTickets;

	return numOfTickets;
}

double customerPrice(int choice, int numOfTickets, int adults, int kids)
{
	double totalPurchase = 0;
	double adultCost, childCost;

	switch (choice)
	{
	case(1):
	{
		adultCost = (static_cast<double>(adults) * ADULT_MAT);
		childCost = (static_cast<double>(kids) * CHILD_MAT);
		totalPurchase = adultCost + childCost;
		
		adultSales += adultCost;
		childSales += childCost;
		totalSales += totalPurchase;

		displaySeating(movieOneMatineeChart);

		chooseSeating(movieOneMatineeChart, numOfTickets);
	}
	break;
	case(2):
	{
		adultCost = (static_cast<double>(adults) * ADULT_MAT);
		childCost = (static_cast<double>(kids) * CHILD_MAT);
		totalPurchase = adultCost + childCost;
		
		adultSales += adultCost;
		childSales += childCost;
		totalSales += totalPurchase;

		displaySeating(movieTwoMatineeChart);

		chooseSeating(movieTwoMatineeChart, numOfTickets);
	}
	break;
	case(3):
	{
		adultCost = (static_cast<double>(adults) * ADULT_EVE);
		childCost = (static_cast<double>(kids) * CHILD_EVE);
		totalPurchase = adultCost + childCost;
		
		adultSales += adultCost;
		childSales += childCost;
		totalSales += totalPurchase;

		displaySeating(movieOneEveningChart);

		chooseSeating(movieOneEveningChart, numOfTickets);
	}
	break;
	case(4):
	{
		adultCost = (static_cast<double>(adults) * ADULT_EVE);
		childCost = (static_cast<double>(kids) * CHILD_EVE);
		totalPurchase = adultCost + childCost;
		
		adultSales += adultCost;
		childSales += childCost;
		totalSales += totalPurchase;

		displaySeating(movieTwoEveningChart);

		chooseSeating(movieTwoEveningChart, numOfTickets);
	}
	}
	return totalPurchase;
}

void displaySeating(char seatingChart[][MAX_COLS])
{
	cout << "\nSeats:  1  2  3  4  5  6  7  8" << endl;
	for (int row = 0; row < MAX_ROWS; row++)
	{
		cout << "Row " << (row + 1) << ":  ";
		for (int col = 0; col < MAX_COLS; col++)
		{
			cout << seatingChart[row][col] << "  ";
		}
		cout << endl;
	}
}

void chooseSeating(char seatingChart[][MAX_COLS], int number)
{
	bool openSeat = false;
	int row, col;
	cout << "Please choose the row and column where you would like to seat your " << number << " seats." << endl;
	cout << "An asterisk indicates an available space. A pound sign indicates a seat that is already taken." << endl;
	cout << "An X indicates a seat blocked due to pandemic distancing." << endl;
	
	for (int ticket = 0; ticket < number; ticket++)
	{
		openSeat = false;
		while (openSeat == false)
		{
			cout << "Enter the row for ticket " << (ticket + 1) << ":" << endl;
			cin >> row;
			while (row < 1 || row > MAX_ROWS)
			{
				cout << "That is an invalid row choice, please try again: " << endl;
				cin >> row;
			}
			cout << "Enter the column for ticket " << (ticket + 1) << ":" << endl;
			cin >> col;
			while (col < 1 || col > MAX_COLS)
			{
				cout << "That is an invalid column choice, please try again: " << endl;
				cin >> col;
			}
			if (seatingChart[row - 1][col - 1] == '*')
				openSeat = true;
			else
				cout << "That seat is either taken or blocked for pandemic distancing, please choose another seat." << endl;
		}

		seatingChart[row - 1][col - 1] = '#';
		displaySeating(seatingChart);
	}
	blockSeating(seatingChart);
}

void blockSeating(char seats[][MAX_COLS])
{
	for (int row = 0; row < MAX_ROWS; row++)
	{
		for (int col = 0; col < MAX_COLS; col++)
		{
			if (seats[row][col] == '#')
			{
				// Left seat
				if ((col != 0) && seats[row][col - 1] == '*')
					seats[row][col - 1] = 'X';
				// Seat above
				if ((row != 0) && seats[row - 1][col] == '*')
					seats[row - 1][col] = 'X';
				// Seat below
				if ((row != 6) && seats[row + 1][col] == '*')
					seats[row + 1][col] = 'X';
				// Right Seat
				if ((col != 7) && seats[row][col + 1] == '*')
					seats[row][col + 1] = 'X';
			}
		}
	}

}

bool administrativeMenu()
{
	bool endProgram = false;
	int adminChoice;
	char again = 'y';

	while (again == 'y' || again == 'Y')
	{
		cout << "\nAdministrator Menu: " << endl;
		cout << "1) View tickets sold by ticket type." << endl;
		cout << "2) View total tickets sold." << endl;
		cout << "3) View profit by ticket type." << endl;
		cout << "4) View total profit." << endl;
		cout << "5) Return to Movie Selection Menu." << endl;
		cout << "6) End Program." << endl << endl;

		cout << "Please enter the number of your choice from the menu above: " << endl;
		cin >> adminChoice;
		while (adminChoice < 1 || adminChoice > 6)
		{
			cout << "That is an invalid choice, please choose one of the menu options above: " << endl;
			cin >> adminChoice;
		}

		switch (adminChoice)
		{
		case(1):
		{
			cout << "Total Adult tickets sold today: " << totalAdultTickets << endl;
			cout << "Total Child tickets sold today: " << totalChildTickets << endl;
		}
		break;
		case(2):
		{
			cout << "Total tickets sold today: " << totalTickets << endl;
		}
		break;
		case(3):
		{
			cout << "Total Adult ticket sales today: $" << adultSales << endl;
			cout << "Total Child ticket sales today: $" << childSales << endl;
		}
		break;
		case(4):
		{
			cout << "Total ticket sales today: $" << totalSales << endl;
		}
		break;
		case(5):
		{
			again = 'n';
			return endProgram;
		}
		break;
		case(6):
		{
			endProgram = true;
			return endProgram;
		}
		}
		cout << "View Admin Menu again? Enter 'y' for yes, any other character for no:" << endl;
		cin >> again;
	}
	return endProgram;
}