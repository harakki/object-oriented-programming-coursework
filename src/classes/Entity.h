//
// Created by harakki on 08.12.2023.
//

#ifndef OOP_COURSEWORK_ENTITY_H
#define OOP_COURSEWORK_ENTITY_H


class Entity {
public:
    int getOwner() const;

    explicit Entity(short owner);

private:
    short owner; // Номер владельца (0: наблюдатель)
};


#endif //OOP_COURSEWORK_ENTITY_H
