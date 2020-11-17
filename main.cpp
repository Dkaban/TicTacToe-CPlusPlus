#include <iostream>
#include "gameboard.h"

using namespace N;
using namespace std;

bool gameOver = false;

int main()
{
	gameboard board;
	//Draw the board for the user (Once on start then always after player makes choice)
	board.drawBoard();

	while (!gameOver)
	{
		//Ask the user to input a value (index from the tic tac toe board)
		int entryValue = board.askUserInput();
		//Change it to an X or an O depending on which state is active
		board.swapIndexForXO(entryValue);
		//Check to see if the game has ended (straights, diagonals, or board filled up)
		gameOver = board.checkForGameOver();
		//Draw the board for the user
		board.drawBoard();
	}

	return 0;
}
