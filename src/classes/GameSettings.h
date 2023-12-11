//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_GAMESETTINGS_H
#define OOP_COURSEWORK_GAMESETTINGS_H


class GameSettings {
public:
    int getBoardSizeX() const;

    void setBoardSizeX(int length);

    int getBoardSizeY() const;

    void setBoardSizeY(int length);

private:
    int boardSizeX = 15;
    int boardSizeY = 15;
};


#endif //OOP_COURSEWORK_GAMESETTINGS_H
