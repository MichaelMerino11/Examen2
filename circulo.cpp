#include "circulo.h"

int Circulo::getTalla() const
{
    return talla;
}

void Circulo::setTalla(int value)
{
    talla = value;
}

int Circulo::getAncho() const
{
    return anchy;
}

void Circulo::setAncho(int value)
{
    anchy = value;
}

int Circulo::getAnchx() const
{
    return anchx;
}

void Circulo::setAnchx(int value)
{
    anchx = value;
}

Circulo::Circulo()
{
    anchy=50;
    anchx=20;
    talla=100;
}

Circulo::Circulo(int xpos, int ypos, int size)
{
    this->anchx=xpos;
    this->anchy=ypos;
    this->talla=size;
}

