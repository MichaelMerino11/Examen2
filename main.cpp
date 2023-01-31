#include "juego.h"

#include <QApplication>
//Michael Andrés Merino Romero
//Cedula: 1750565325
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
