#include <iostream>
#include "gameboard.h"

using namespace N;
using namespace std;


int main()
{
	//Create the board object
	gameboard board;

	//Draw the board for the user (Once on start then always after player makes choice)
	board.drawBoard();

	//Run the game Loop
	board.gameLoop();

	return 0;
}
