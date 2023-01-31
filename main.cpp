#include "juego.h"

#include <QApplication>
//Jorge Sebastián Reinoso Reyes
//Cedula: 1722884655
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
