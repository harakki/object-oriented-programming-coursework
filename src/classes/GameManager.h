//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_GAMEMANAGER_H
#define OOP_COURSEWORK_GAMEMANAGER_H


#include "Board.h"
#include "Player.h"

class GameManager {
public:
    GameManager(int X, int Y, short startingPlayer);

    int runMove(int X, int Y);

    void printBoard();

protected:
    int searchForWin();

    bool checkCombination(int startX, int startY, int deltaX, int deltaY, int combinationLength, int digit) const;

private:
    short currentPlayerNumber;
    std::unique_ptr<Board> gameBoard;
    std::unique_ptr<Player> player1;
    std::unique_ptr<Player> player2;
};


#endif //OOP_COURSEWORK_GAMEMANAGER_H
