#ifndef JUEGO_H
#define JUEGO_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Jugador.h"
#include "Puntos.h"
class Juego: public QGraphicsView{
public:
    Juego();
    QGraphicsScene * escena;
    QGraphicsView * vista;
    Jugador * jugador;
    Puntuacion * puntos;
};

#endif // JUEGO_H
