//
// Created by harakki on 08.12.2023.
//

#include <iostream>
#include "Board.h"

Board::Board(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY) {
    cell = std::make_unique<std::unique_ptr<int[]>[]>(sizeX);
    for (int x = 0; x < sizeX; ++x) {
        cell[x] = std::make_unique<int[]>(sizeY);
    }
}

void Board::printInText() const {
    for (int x = 0; x < Board::sizeX; ++x) {
        for (int y = 0; y < Board::sizeY; ++y) {
            std::cout << Board::cell[x][y] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int Board::getSizeX() const {
    return sizeX;
}

int Board::getSizeY() const {
    return sizeY;
}

int Board::getCell(int X, int Y) const {
    return cell[X][Y];
}

void Board::setCell(int X, int Y, short moveOwner) const {
    if (X >= 0 && X < sizeX && Y >= 0 && Y < sizeY) {
        Board::cell[X][Y] = moveOwner;
    }
}
