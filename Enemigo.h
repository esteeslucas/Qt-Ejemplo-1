#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QGraphicsRectItem>
#include <QObject>
//Clase Enemigo
class Enemigo: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Enemigo();
};

#endif // MOVIMIENTO_H
