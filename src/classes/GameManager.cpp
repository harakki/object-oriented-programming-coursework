//
// Created by harakki on 08.12.2023.
//

#include <iostream>
#include "GameManager.h"

GameManager::GameManager(int X, int Y, short startingPlayer) : currentPlayerNumber(startingPlayer) {
    GameManager::gameBoard = std::make_unique<Board>(X, Y);
    GameManager::player1 = std::make_unique<Player>(1);
    GameManager::player2 = std::make_unique<Player>(2);
}

int GameManager::runMove(int X, int Y) {
    // Запись выбранного значения в ячейку
    GameManager::gameBoard->setCell(X, Y, currentPlayerNumber);

    // Проверка на выигравшего игрока
    if (int win = searchForWin(); win != 0) {
        return win;
    }

    GameManager::currentPlayerNumber =
            GameManager::currentPlayerNumber == 1 ? 2 : 1; // Смена очередности хода игрока
    return 0;
}

void GameManager::printBoard() const {
    GameManager::gameBoard->printInText();
}

int GameManager::searchForWin() const {
    int combinationLength = 5; // Минимально необходимая длина комбинации для победы

    for (auto x = 0; x < gameBoard->getSizeX(); ++x) {
        for (auto y = 0; y < gameBoard->getSizeY(); ++y) {
            if (x < 0 || y < 0) {
                continue;
            }

            int currentDigit = gameBoard->getCell(x, y);

            // Пропуск итерации проверок для '0'
            if (currentDigit == 0) {
                continue;
            }

            if (checkCombination(x, y, 1, 0, combinationLength, currentDigit) ||  // По горизонтали
                checkCombination(x, y, 0, 1, combinationLength, currentDigit) ||  // По вертикали
                checkCombination(x, y, 1, 1, combinationLength, currentDigit) ||  // По диагонали вправо-вниз
                checkCombination(x, y, -1, 1, combinationLength, currentDigit)) { // По-диагонали влево-вниз
                return currentDigit;
            }
        }
    }
    return 0;
}

bool
GameManager::checkCombination(int startX, int startY, int deltaX, int deltaY, int combinationLength, int digit) const {
    if (startY <= gameBoard->getSizeY() - combinationLength * deltaY &&
        startX <= gameBoard->getSizeX() - combinationLength * deltaX) {
        for (int i = 1; i < combinationLength; ++i) {
            int x = startX + i * deltaX;
            int y = startY + i * deltaY;

            if (x < 0 || y < 0) {
                return false;
            }

            if (gameBoard->getCell(x, y) != digit) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int GameManager::getCell(int x, int y) const {
    return gameBoard->getCell(x, y);
}

short GameManager::getCurrentPlayerNumber() const {
    return currentPlayerNumber;
}
