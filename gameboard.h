#pragma once
// my_class.h
#ifndef GAMEBOARD_H // include guard
#define GAMEBOARD_H

namespace N
{
    class gameboard
    {
    public:
        enum State {X, O};
        State state = X;
        void drawBoard();
        int askUserInput();
        void swapIndexForXO(int);
        bool checkForGameOver();
    private:
        bool checkIndexes(int, int, int);
    };
}

#endif /* BOARD_H */