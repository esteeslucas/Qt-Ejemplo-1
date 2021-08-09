#include "Movimiento.h"
#include "Enemigo.h"
#include "Juego.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
///////////// Global //////////////
extern Juego * juego;
///////////////////////////////////
Movimiento::Movimiento()
{
    //Crear el objeto por moverse
    setRect(0,0,10,50);

    //Conectar el timer, con la señal de que se terminó el cronómetro,
    // con la bala y con el movimiento de la bala
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Moverse()));
    // Un timer que mande una señal cada 50ms
    timer -> start(50);

}
//Mover el objeto para arriba
void Movimiento::Moverse(){
    /////////////////////////
    /// Nuevo ///////////////
    //Si la bala colisiona con el enemigo, destruir la bala;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i<n; i++){
        if (typeid(*(colliding_items[i])) == typeid(Enemigo)){
            //Aumentar la puntuación
            juego->puntos->aumentar();

            //borrar la balaæææ
            scene()->removeItem(this);
            delete this;
        }
    }
    /////////////////////////
    /// /////////////////////

    //Mover la bala
    setPos(x(),y()-10);
    if (pos().y()+rect().height()<0){
        scene()->removeItem(this);
        delete this;
    }
}
