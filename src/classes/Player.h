//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_PLAYER_H
#define OOP_COURSEWORK_PLAYER_H


#include "Entity.h"

class Player : Entity {
public:
    int getScore() const;

    void addScore(int score);

    int getMoves() const;

    void addMove();

    Player(short playerNumber);

private:
    int score; // Количество заработанных очков
    int moves; // Количество выполненных ходов
};


#endif //OOP_COURSEWORK_PLAYER_H
