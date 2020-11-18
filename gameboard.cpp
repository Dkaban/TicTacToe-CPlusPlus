#include "gameboard.h" // header in local directory
#include <iostream>   // header in standard library

using namespace N;
using namespace std;

void gameboard::drawBoard()
{
	string string1 = " " + board[0] + " | 1 | 2 \n";
	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " " << endl;
	cout << " " << "--|---|---" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " " << endl;
	cout << " " << "--|---|---" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " " << endl;
}

void gameboard::displayResult()
{
	if (winner.compare("Tie"))
	{
		cout << "The game is a Tie" << endl;
	}
	else
	{
		cout << "The winner is " << winner << endl;
	}
}

int gameboard::askUserInput()
{
	int value;
	cout << "Enter your value: " << endl;
	cin >> value;
	return value;
}

void gameboard::swapIndexForXO(int index)
{
	switch (state)
	{
		case State::X:
			board[index] = "X";
			state = State::O;
			break;

		case State::O:
			board[index] = "O";
			state = State::X;
			break;
	}
}

bool gameboard::checkForGameOver()
{
	//Need to check horizontals, verticals and diagonals
	if (checkIndexes(0, 1, 2))
	{
		return true;
	}
	else if (checkIndexes(3, 4, 5))
	{
		return true;
	}
	else if (checkIndexes(6, 7, 8))
	{
		return true;
	}
	else if (checkIndexes(0, 3, 6))
	{
		return true;
	}
	else if (checkIndexes(1, 4, 7))
	{
		return true;
	}
	else if (checkIndexes(2, 5, 8))
	{
		return true;
	}
	else if (checkIndexes(0, 4, 8))
	{
		return true;
	}
	else if (checkIndexes(6, 4, 2))
	{
		return true;
	}
	else if (checkIfBoardFull())
	{
		return true;
	}

	return false;
}

bool gameboard::checkIndexes(int i, int j, int k)
{
	if(board[i] == "X" && board[j] == "X" && board[k] == "X")
	{
		//X Wins!!
		winner = "X";
		return true;
	}
	else if (board[i] == "O" && board[j] == "O" && board[k] == "O")
	{
		//O Wins!!
		winner = "O";
		return true;
	}

	return false;
}

bool gameboard::checkIfBoardFull()
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i] != "X" || board[i] != "O")
		{
			return false;
		}
	}
	return true;
}

void gameboard::gameLoop()
{
	bool gameOver = false;

	while (!gameOver)
	{
		//Ask the user to input a value (index from the tic tac toe board)
		int entryValue = askUserInput();
		//Change it to an X or an O depending on which state is active
		swapIndexForXO(entryValue);
		//Check to see if the game has ended (straights, diagonals, or board filled up)
		gameOver = checkForGameOver();
		//Draw the board for the user
		drawBoard();
	}

	//Display the result to the user (X or O or Tie)
	displayResult();
}