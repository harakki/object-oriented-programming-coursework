//
// Created by harakki on 08.12.2023.
//

#include "Entity.h"

int Entity::getOwner() const {
    return owner;
}

Entity::Entity(short owner) : owner(owner) {}
