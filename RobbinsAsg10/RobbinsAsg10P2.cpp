/*
Zac Robbins
zrobbins@my.athens.edu
00100125
CS317 - Asg10P2
*/

// This program allows two players to play a game of tic-tac-toe.

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;
const int MAX_TURNS = 9;
char gameBoard[ROWS][COLS] = { {'*','*','*'}, {'*','*','*'}, {'*','*','*'} };

void displayBoard(char[][COLS], int, int);
void playerTurn(char[][COLS], char);
bool gameOver(char[][COLS], int, int, char&);
bool winCheck(char[][COLS], int, int, char&);
void displayWinner(char);

int main()
{
	bool keepPlaying = true;
	bool gameEnd = false;
	char playerNum, winner;
	
	displayBoard(gameBoard, ROWS, COLS);

	while (keepPlaying)
	{
		cout << "\nPlayer X: " << endl;
		playerNum = 'X';
		playerTurn(gameBoard, playerNum);

		displayBoard(gameBoard, ROWS, COLS);

		gameEnd = gameOver(gameBoard, ROWS, COLS, winner);

		if (gameEnd == true)
		{
			keepPlaying = false;
		}
		else if (gameEnd == false)
		{
			cout << "\nPlayer O: " << endl;
			playerNum = 'O';
			playerTurn(gameBoard, playerNum);

			displayBoard(gameBoard, ROWS, COLS);
			gameEnd = gameOver(gameBoard, ROWS, COLS, winner);
			if (gameEnd == true)
			{
				keepPlaying = false;
			}
		}
		
	}

	if (winner == 'X' || winner == 'O')
		displayWinner(winner);
	else
		cout << "Tie! Better luck next time!" << endl;

	return 0;
}

void displayBoard(char board[][COLS], int maxRows, int maxCols)
{
	cout << endl;
	for (int row = 0; row < maxRows; row++)
	{
		for (int col = 0; col < maxCols; col++)
		{
			cout << board[row][col];
		}
		cout << endl;
	}
}

void playerTurn(char board[][COLS], char player)
{
	int row, col;
	if (player == 'X')
	{

		cout << "Enter the row (top to bottom) and column (left to right) where you want to place an 'X':" << endl;
		cin >> row >> col;
		// Verify
		while (board[row - 1][col - 1] == 'O' || board[row - 1][col - 1] == 'X')
		{
			cout << "That space is already taken, please choose a new space: " << endl;
			cin >> row >> col;
		}
		board[row - 1][col - 1] = 'X';
	}
	else if (player == 'O')
	{
		cout << "Enter the row (top to bottom) and column (left to right) where you want to place an 'O':" << endl;
		cin >> row >> col;
		// Verify
		while (board[row - 1][col - 1] == 'O' || board[row - 1][col - 1] == 'X')
		{
			cout << "That space is already taken, please choose a new space: " << endl;
			cin >> row >> col;
		}
		board[row - 1][col - 1] = 'O';
	}

}

bool gameOver(char board[][COLS], int maxRow, int maxCol, char& winner)
{
	char playerX = 'X';
	char playerO = 'O';
	
	bool tie = true, endGame = false;

	// Check for win for playerX
	endGame = winCheck(board, ROWS, COLS, playerX);
	if (endGame == true)
	{
		winner = playerX;
		return endGame;
	}

	// Check for win for playerO
	endGame = winCheck(board, ROWS, COLS, playerO);
	if (endGame == true)
	{
		winner = playerO;
		return endGame;
	}
	// Check for tie
	if (endGame == false)
	{
		for (int row = 0; row < maxRow; row++)
		{
			for (int col = 0; col < maxCol; col++)
			{
				if (board[row][col] == '*')
					tie = false;
			}
		}
		if (tie == true)
		{
			endGame = true;
			return endGame;
		}
	}

	return endGame;
}

bool winCheck(char board[][COLS], int maxRow, int maxCol, char& symbol)
{
	int threeInARow = 0;
	bool win = false;

	// Check row 0 for win
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < maxCol; col++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check row 1 for win
	for (int row = 1; row < 2; row++)
	{
		for (int col = 0; col < maxCol; col++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check row 2 for win
	for (int row = 2; row < maxRow; row++)
	{
		for (int col = 0; col < maxCol; col++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check column 0 for win
	for (int col = 0; col < 1; col++)
	{
		for (int row = 0; row < maxCol; row++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check column 1 for win
	for (int col = 1; col < 2; col++)
	{
		for (int row = 0; row < maxCol; row++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check column 2 for win
	for (int col = 2; col < maxCol; col++)
	{
		for (int row = 0; row < maxCol; row++)
		{
			threeInARow += board[row][col];
		}
	}
	if (threeInARow == (symbol + symbol + symbol))
	{
		win = true;
	}

	// Check diagonal 1 for win
	if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
	{
		win = true;
	}

	// Check diagonal 2 for win
	if (board[2][0] == symbol && board[1][1] == symbol && board[0][2] == symbol)
	{
		win = true;
	}
	
	return win;
}

void displayWinner(char winner)
{
	cout << "Congratulations player " << winner << endl;
	cout << "You have won this Tic-Tac-Toe game!" << endl;
}