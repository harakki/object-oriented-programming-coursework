cmake_minimum_required(VERSION 3.27)
project(OOP_coursework)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_coursework src/main.cpp
        src/classes/Entity.cpp
        src/classes/Entity.h
        src/classes/Player.cpp
        src/classes/Player.h
        src/classes/Board.cpp
        src/classes/Board.h
        src/classes/Gameplay.cpp
        src/classes/Gameplay.h
        src/classes/GameManager.cpp
        src/classes/GameManager.h
        src/classes/GameSettings.cpp
        src/classes/GameSettings.h
)
