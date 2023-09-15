//Archivo de encabezado de la clase Triangulo
//Joseph Shakalo y Gabriel Edid

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Point.hpp"

class Triangulo{
private:
    Point vertex1;
    Point vertex2;
    Point vertex3;
public: 
    Triangulo(Point, Point, Point);
    Triangulo();
    double perimeter();
    double area();
};

#endif