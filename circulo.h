#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>


class Circulo : public QPoint
{
    int anchx;
    int anchy;
    int talla;
public:
    Circulo();
    Circulo(int xpos, int ypos, int size);
    int getTalla() const;
    void setTalla(int value);
    int getAncho() const;
    void setAncho(int value);
    int getAnchx() const;
    void setAnchx(int value);
};

#endif // CIRCULO_H
