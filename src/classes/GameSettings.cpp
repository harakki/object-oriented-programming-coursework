//
// Created by harakki on 08.12.2023.
//

#include "GameSettings.h"

int GameSettings::getBoardSizeX() const {
    return boardSizeX;
}

void GameSettings::setBoardSizeX(int length) {
    GameSettings::boardSizeX = length;
}

int GameSettings::getBoardSizeY() const {
    return boardSizeY;
}

void GameSettings::setBoardSizeY(int length) {
    GameSettings::boardSizeY = length;
}
