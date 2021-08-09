#ifndef PUNTOS_H
#define PUNTOS_H
#include <QGraphicsTextItem>
class Puntuacion: public QGraphicsTextItem{
public:
    Puntuacion(QGraphicsItem *parent=0);
    void aumentar(); //Aumentar puntuación
    int obtener(); //Obtener la puntuación
private:
    int puntos; //Guarda puntos
};

#endif // PUNTOS_H
