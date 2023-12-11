//
// Created by harakki on 08.12.2023.
//

#include "Player.h"

int Player::getScore() const {
    return score;
}

void Player::addScore(int quantity) {
    Player::score += quantity;
}

Player::Player(short playerNumber) : Entity(playerNumber) {
}

int Player::getMoves() const {
    return moves;
}

void Player::addMove() {
    Player::moves += 1;
}
