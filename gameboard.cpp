// my_class.cpp
#include "gameboard.h" // header in local directory
#include <iostream>   // header in standard library

using namespace N;
using namespace std;

string board[10] = { "0","1","2","3","4","5","6","7","8" };

void gameboard::drawBoard()
{
	string string1 = " " + board[0] + " | 1 | 2 \n";
	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " " << endl;
	cout << " " << "--|---|---" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " " << endl;
	cout << " " << "--|---|---" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " " << endl;
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
	cout << "Index: " << index << endl;
	cout << "State: " << state << endl;
	switch (state)
	{
		case X:
			board[index] = "X";
			state = State::O;
			break;

		case O:
			board[index] = "O";
			state = State::X;
			break;
	}
}

bool gameboard::checkForGameOver()
{
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

	return false;
}

bool gameboard::checkIndexes(int i, int j, int k)
{
	if(board[i] == "X" && board[j] == "X" && board[k] == "X")
	{
		//X Wins!!
		return true;
	}
	else if (board[i] == "O" && board[j] == "O" && board[k] == "O")
	{
		//O Wins!!
		return true;
	}

	return false;
}