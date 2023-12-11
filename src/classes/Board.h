//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_BOARD_H
#define OOP_COURSEWORK_BOARD_H


class Board {
public:
    Board(int sizeX, int sizeY);

    int getSizeX() const;

    int getSizeY() const;

    int getCell(int X, int Y) const;

    void setCell(int X, int Y, short moveOwner) const;

    void printInText() const;

private:
    int sizeX;
    int sizeY;
    int **cell;
};


#endif //OOP_COURSEWORK_BOARD_H
