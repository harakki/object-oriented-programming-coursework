//
// Created by harakki on 08.12.2023.
//

#include <iostream>
#include "Gameplay.h"
#include "GameSettings.h"

int Gameplay::run() {
    auto settings = std::make_unique<GameSettings>();
    auto gameProcess = std::make_shared<GameManager>(settings->getBoardSizeX(), settings->getBoardSizeY(), 1);
    int endGame = 0;

    while (!endGame) {
        int x = 0;
        int y = 0;

        std::cout << "Write coordinates for move: ";
        std::cin >> x >> y;

        if (permissionToMove(gameProcess, x, y)) {
            endGame = gameProcess->runMove(x, y);
            gameProcess->printBoard();

            std::cout << "Now it's Player " << gameProcess->getCurrentPlayerNumber() << "'s turn" << std::endl;
        } else {
            std::cout << "  This cell is already occupied" << std::endl;
        }
    }
    winner = endGame;
    std::cout << "Player " << winner << " won!" << std::endl;
    return endGame;
}

int Gameplay::getWinner() const {
    return winner;
}

bool Gameplay::permissionToMove(const std::shared_ptr<GameManager> &game, int x, int y) {
    return game->getCell(x, y) == 0;
}
