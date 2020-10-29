#include <iostream>
#include "gameboard.h"

using namespace N;
using namespace std;

int main()
{
	gameboard board;
	board.drawBoard();
	int entryValue = board.askUserInput();
	cout << "What value did you enter? " << entryValue << endl;

	return 0;
}
