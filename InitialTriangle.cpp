#include "InitialTriangle.h"

#include <stdlib.h>
#include <time.h>

#define width 1600
#define height 900
#define pointRadius 5.f


InitialTriangle::InitialTriangle() {
    srand(time(NULL));

    this->ax = rand() % (int) (width - pointRadius);
    this->ay = rand() % (int) (height - pointRadius);

    this->bx = rand() % (int) (width - pointRadius);
    this->by = rand() % (int) (height - pointRadius);

    this->cx = rand() % (int) (width - pointRadius);
    this->cy = rand() % (int) (height - pointRadius);
}

InitialTriangle::InitialTriangle(int ax, int ay, int bx, int by, int cx, int cy) {
    this->ax = ax;
    this->ay = ay;

    this->bx = bx;
    this->by = by;

    this->cx = cx;
    this->cy = cy;
}

int InitialTriangle::getAx() const {
    return ax;
}

int InitialTriangle::getAy() const {
    return ay;
}

int InitialTriangle::getBx() const {
    return bx;
}

int InitialTriangle::getBy() const {
    return by;
}

int InitialTriangle::getCx() const {
    return cx;
}

int InitialTriangle::getCy() const {
    return cy;
}

void InitialTriangle::setAx(int ax) {
    InitialTriangle::ax = ax;
}

void InitialTriangle::setAy(int ay) {
    InitialTriangle::ay = ay;
}

void InitialTriangle::setBx(int bx) {
    InitialTriangle::bx = bx;
}

void InitialTriangle::setBy(int by) {
    InitialTriangle::by = by;
}

void InitialTriangle::setCx(int cx) {
    InitialTriangle::cx = cx;
}

void InitialTriangle::setCy(int cy) {
    InitialTriangle::cy = cy;
}

