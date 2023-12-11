//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_PLAYER_H
#define OOP_COURSEWORK_PLAYER_H


#include "Entity.h"

class Player : public Entity {
public:
    int getScore() const;

    void addScore(int quantity);

    int getMoves() const;

    void addMove();

    explicit Player(short playerNumber);

private:
    int score = 0; // Количество заработанных очков
    int moves = 0; // Количество выполненных ходов
};


#endif //OOP_COURSEWORK_PLAYER_H
