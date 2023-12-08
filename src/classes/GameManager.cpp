//
// Created by harakki on 08.12.2023.
//

#include <iostream>
#include "GameManager.h"

GameManager::GameManager(int X, int Y) {
    GameManager::moveOwner = 1;
    GameManager::gameBoard = new Board(X, Y);
    GameManager::player1 = new Player(1);
    GameManager::player2 = new Player(2);
}

void GameManager::runGame() {
    int availableMoves = gameBoard->getSizeX() * gameBoard->getSizeY();

    for (int i = 0; i < availableMoves; ++i) {
        //TODO: Имплементацию записи ходов и вызовов их проверки после
    }
}
