//
// Created by harakki on 08.12.2023.
//

#include "Player.h"

int Player::getScore() const {
    return score;
}

void Player::addScore(int score) {
    Player::score += score;
}

Player::Player(short playerNumber) : Entity(playerNumber) {
    Player::score = 0;
    Player::moves = 0;
}

int Player::getMoves() const {
    return moves;
}

void Player::addMove() {
    Player::moves += 1;
}
