//Archivo de encabezado de la clase Point
//Joseph Shakalo y Gabriel Edid
#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x;
    double y;
public:
    //Constructores
    Point(double,double);
    Point();
    //Getters
    double getX();
    double getY();
    //Setters
    void setX(double);
    void setY(double);
    //Otros metodos
    double distance(Point);
};

#endif