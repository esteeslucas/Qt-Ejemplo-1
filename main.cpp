#include <QApplication>
#include "Juego.h"
////////Global/////////
Juego * juego;
//////////////////////
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    juego = new Juego();
    return a.exec();
}
