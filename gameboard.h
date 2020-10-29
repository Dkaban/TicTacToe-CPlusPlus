#pragma once
// my_class.h
#ifndef GAMEBOARD_H // include guard
#define GAMEBOARD_H

namespace N
{
    class gameboard
    {
    public:
        void drawBoard();
        int askUserInput();
        void swapIndexForXO(int);
    };
}

#endif /* BOARD_H */