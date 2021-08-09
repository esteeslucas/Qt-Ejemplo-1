#ifndef JUGADOR_H
#define JUGADOR_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
class Jugador: public QObject, public QGraphicsRectItem{ //Se añade el rect básico
    Q_OBJECT
public:
    //Crear un método público dentro de QGraphicsRectItem
    //Que a su vez está dentro de Jugador.
    //El método se encarga de detectar si se presionan teclas
    void keyPressEvent(QKeyEvent * evento);
public slots:
    void aparecer();
};

#endif // JUGADOR_H
