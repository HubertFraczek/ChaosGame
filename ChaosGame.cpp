//
// Created by sunil on 11/26/18.
//

#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>
#include "ChaosGame.h"
#include "InitialTriangle.h"

#define fps 60
#define width 1600
#define height 900
#define pointRadius 5.f

using namespace sf;

ChaosGame::ChaosGame() {
    srand(time(NULL));
    this->x = rand() % width;
    this->y = rand() % height;
}

ChaosGame::ChaosGame(int ax, int ay, int bx, int by, int cx, int cy) {
    this->triangle->setAx(ax);
    this->triangle->setAy(ay);

    this->triangle->setBx(bx);
    this->triangle->setBy(by);

    this->triangle->setCx(cx);
    this->triangle->setCy(cy);

    srand(time(NULL));
    this->x = rand() % width;
    this->y = rand() % height;
}

void ChaosGame::run() {
    RenderWindow window(sf::VideoMode(width, height), "Chaos Game");
    window.setFramerateLimit(fps);

    srand(time(NULL));

    InitialTriangle *triangle = new InitialTriangle();
    //testing
    std::cout << this->triangle->getAx() << "  " << this->triangle->getAy() << std::endl;
    std::cout << this->triangle->getBx() << "  " << this->triangle->getBy() << std::endl;
    std::cout << this->triangle->getCx() << "  " << this->triangle->getCy() << std::endl;

    CircleShape pointA(pointRadius);
    pointA.setPosition(this->triangle->getAx(), this->triangle->getAy());
    pointA.setFillColor(Color::Red);

    CircleShape pointB(pointRadius);
    pointB.setPosition(this->triangle->getBx(), this->triangle->getBy());
    pointB.setFillColor(Color::Red);

    CircleShape pointC(pointRadius);
    pointC.setPosition(this->triangle->getCx(), this->triangle->getCy());
    pointC.setFillColor(Color::Red);

    std::list<CircleShape> points;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear();

        this->random = rand() % 3;
        if (random == 0) {
            Vector2f pos = pointA.getPosition();
            this->x  = (this->x + pos.x) / 2;
            this->y = (this->y + pos.y) / 2;

        } else if (random == 1) {
            Vector2f pos = pointB.getPosition();
            this->x  = (this->x + pos.x) / 2;
            this->y = (this->y + pos.y) / 2;
        } else if (random == 2) {
            Vector2f pos = pointC.getPosition();
            this->x  = (this->x + pos.x) / 2;
            this->y = (this->y + pos.y) / 2;
        }
        CircleShape tmp(pointRadius);
        tmp.setPosition(this->x, this->y);
        points.push_back(tmp);

        for (auto i : points) {
            window.draw(i);
        }
        window.draw(pointA);
        window.draw(pointB);
        window.draw(pointC);
        window.display();
    }
}
