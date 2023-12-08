//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_GAMEMANAGER_H
#define OOP_COURSEWORK_GAMEMANAGER_H


#include "Board.h"
#include "Player.h"

class GameManager {
public:
    GameManager(int X, int Y);

    void runGame();

private:
    short moveOwner; // Определяет, чей ход будет сейчас
    Board *gameBoard;
    Player *player1;
    Player *player2;
};


#endif //OOP_COURSEWORK_GAMEMANAGER_H
