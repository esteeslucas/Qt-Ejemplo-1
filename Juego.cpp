#include <QApplication>
#include "Jugador.h"
#include "Juego.h"
#include "Puntos.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFont>
#include <QGraphicsTextItem>
Juego::Juego()
{
    //Crear el objeto de la escena
    QGraphicsScene * escena = new QGraphicsScene();

    //Crear el objeto de un rectángulo
    Jugador * rectangulo = new Jugador();

    //Cambiar el tamaño del rectángulo
    //sectRect(Posx,Posy,TamañoHorizontal,TamañoVertical)
    rectangulo->setRect(0,0,100,100);

    //Hacer el rectángulo seleccionable
    rectangulo->setFlag(QGraphicsItem::ItemIsFocusable);
    rectangulo->setFocus();

    //Crear un objeto vista que permita ver la escena
    QGraphicsView * vista = new QGraphicsView(escena);

    //Quitar el scrollbar horizontal y vertical:
    vista -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    vista -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //Cambiar tamaño de la vista
    vista -> setFixedSize(640,480);

    //Cambiar el tamaño de la escena (por default es infinito)
    escena -> setSceneRect(0,0,640,480);

    //Añadir el item (rectángulo) a la escena
    escena->addItem(rectangulo);
    rectangulo->setPos(vista->width()/2-rectangulo->rect().width()/2,vista->height()-rectangulo->rect().height());

    //Aparecer el enemigo
    rectangulo->aparecer();

    //Agregar texto
    puntos = new Puntuacion();
    escena->addItem(puntos);
    //Mostrar la vista:
    vista->show();
}

