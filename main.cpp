#include <SFML/Graphics.hpp>
#include <iostream>
#include "InitialTriangle.h"
#include "ChaosGame.h"

using namespace sf;

int main() {

    ChaosGame *chaosGame = new ChaosGame();
    chaosGame->run();

    return 0;
}
