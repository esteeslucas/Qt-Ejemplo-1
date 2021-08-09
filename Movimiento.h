#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

#include <QGraphicsRectItem>
#include <QObject>
//Clase movimiento, que tiene objetosQ y crea rectángulos.
class Movimiento: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Movimiento();
    //Un slot sirve para cuando hay una señal que lo tiene que activar
    //Se conectan los slots con las señales mediante connect(arg)
public slots:
    void Moverse();
};

#endif // MOVIMIENTO_H
