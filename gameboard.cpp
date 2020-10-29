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

}