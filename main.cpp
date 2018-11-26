#include <SFML/Graphics.hpp>
#include <iostream>
#include "InitialTriangle.h"
#include "ChaosGame.h"

#define width 1600
#define height 900

using namespace sf;

int main() {

    //the equilateral triangle
    //ChaosGame *chaosGame = new ChaosGame(width/2, 0, 0, height-10.f, width-10.f, height-10.f);
    ChaosGame *chaosGame = new ChaosGame();
    chaosGame->run();

    return 0;
}
