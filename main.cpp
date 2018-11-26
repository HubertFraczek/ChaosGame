#include <SFML/Graphics.hpp>

using namespace sf;

int main() {

    RenderWindow window(sf::VideoMode(800, 600), "Hello SFML!");
    window.setFramerateLimit(60);
    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

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