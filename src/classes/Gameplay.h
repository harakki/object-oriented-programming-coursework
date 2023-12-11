//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_GAMEPLAY_H
#define OOP_COURSEWORK_GAMEPLAY_H


#include "GameManager.h"

class Gameplay {
public:
    int run();

    int getWinner() const;

protected:
    static bool permissionToMove(const std::shared_ptr<GameManager> &game, int x, int y);

private:
    int winner = 0;
};


#endif //OOP_COURSEWORK_GAMEPLAY_H
