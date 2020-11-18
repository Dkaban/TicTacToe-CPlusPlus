#pragma once
#ifndef GAMEBOARD_H // include guard
#define GAMEBOARD_H

#include <string>

namespace N
{
    class gameboard
    {
    public:
        enum class State {X, O};
        State state = State::X;
        void drawBoard();
        int askUserInput();
        void swapIndexForXO(int);
        bool checkForGameOver();
        void displayResult();
        void gameLoop();
    private:
        std::string board[10] = { "0","1","2","3","4","5","6","7","8" };
        std::string winner;
        bool checkIndexes(int, int, int);
        bool checkIfBoardFull();
    };
}

#endif /* BOARD_H */