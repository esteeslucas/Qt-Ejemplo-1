#include "Jugador.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Movimiento.h"
#include "Enemigo.h"
void Jugador::keyPressEvent(QKeyEvent *evento){
    //Si se presiona izquierda, mover 10 pix a la izquierda
    if(evento->key() == Qt::Key_Left){
        setPos(x()-10,y());
    }
    //Si se presiona derecha, mover 10 pix a la derecha
    else if(evento->key() == Qt::Key_Right){
        setPos(x()+10,y());
    }
    else if(evento->key() == Qt::Key_Space){
        //Creación del objeto con la posición y dimenciones
        Movimiento * bloquesito = new Movimiento();
        bloquesito->setPos(x(),y());
        //scene() hace referencia a la escena donde está el objeto
        scene() -> addItem(bloquesito);
    }
}

void Jugador::aparecer()
{
    // Crear un enemigo
    Enemigo * enemigo = new Enemigo();

    scene()->addItem(enemigo);
}
