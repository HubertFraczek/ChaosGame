//
// Created by sunil on 11/26/18.
//

#ifndef CHAOSGAME_CHAOSGAME_H
#define CHAOSGAME_CHAOSGAME_H


#include <SFML/Graphics.hpp>
#include "InitialTriangle.h"

class ChaosGame {
private:
    InitialTriangle *triangle = new InitialTriangle();
    int random;
    float x;
    float y;
    sf::Color color;
public:
    ChaosGame();

    ChaosGame(int ax, int ay, int bx, int by, int cx, int cy);

    void check(sf::CircleShape pointA, sf::CircleShape pointB, sf::CircleShape pointC);

    void run();

};


#endif //CHAOSGAME_CHAOSGAME_H
