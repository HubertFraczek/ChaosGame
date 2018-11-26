//
// Created by sunil on 11/26/18.
//

#ifndef CHAOSGAME_INITIALTRIANGLE_H
#define CHAOSGAME_INITIALTRIANGLE_H


class InitialTriangle {
private:
public:
    int getAx() const;

    int getAy() const;

    int getBx() const;

    int getBy() const;

    int getCx() const;

    int getCy() const;

private:
public:
    void setAx(int ax);

    void setAy(int ay);

    void setBx(int bx);

    void setBy(int by);

    void setCx(int cx);

    void setCy(int cy);

private:
    int ax;
    int ay;

    int bx;
    int by;

    int cx;
    int cy;

public:
    InitialTriangle();

    InitialTriangle(int ax, int ay, int bx, int by, int cx, int cy);

};


#endif //CHAOSGAME_INITIALTRIANGLE_H
