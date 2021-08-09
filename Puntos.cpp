#include "Puntos.h"
#include <QString>
#include <QFont>
Puntuacion::Puntuacion(QGraphicsItem *parent): QGraphicsTextItem(parent){
    //Inicialmente, la puntuación es 0.
    puntos = 0;
    // Escribir el texto
    setPlainText(QString("Puntos: ") + QString::number(puntos));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Puntuacion::aumentar()
{
    puntos++;
    setPlainText(QString("Puntos: ") + QString::number(puntos));
}

int Puntuacion::obtener()
{
    return puntos;
}
