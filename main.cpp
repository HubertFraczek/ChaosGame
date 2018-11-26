#include <SFML/Graphics.hpp>
#include <iostream>
#include "InitialTriangle.h"
#include "ChaosGame.h"

#define width 1600
#define height 900

using namespace sf;

int main() {

    ChaosGame *chaosGame = new ChaosGame();
    chaosGame->run();

    return 0;
}
