#include <iostream>
#include "classes/Gameplay.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto game = std::make_unique<Gameplay>();

    game->run();

    return 0;
}
