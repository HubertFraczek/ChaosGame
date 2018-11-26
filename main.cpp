#include <SFML/Graphics.hpp>
#include <iostream>
#include "InitialTriangle.h"

#define fps 60
#define width 1600
#define height 900

using namespace sf;

int main() {

    RenderWindow window(sf::VideoMode(width, height), "Chaos Game");
    window.setFramerateLimit(fps);

    CircleShape shape(10.f);
    shape.setFillColor(Color::Green);

    InitialTriangle *triangle = new InitialTriangle();
    //testing
    std::cout << triangle->getAx() << "  " << triangle->getAy() << std::endl;
    std::cout << triangle->getBx() << "  " << triangle->getBy() << std::endl;
    std::cout << triangle->getCx() << "  " << triangle->getCy() << std::endl;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear();
        shape.move(1.0f, 1.0f);
        window.draw(shape);
        window.display();
    }

    return 0;
}
