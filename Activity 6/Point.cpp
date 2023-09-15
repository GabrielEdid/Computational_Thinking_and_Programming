//Codigo de la clase Point
//Joseph Shakalo y Gabriel Edid
#include "Point.hpp"
#include <cmath>

Point::Point(double xIn,double yIn) : x{xIn},y{yIn} {}
Point::Point() : x{0.0},y{0.0} {}
//Getters
double Point::getX(){return x;}
double Point::getY(){return y;}
//Setters
void Point::setX(double xIn){x = xIn;}
void Point::setY(double yIn){y = yIn;}
//Otros metodos
double Point::distance(Point p){
    return sqrt(pow(x - p.getX(),2) + pow(y - p.getY(),2));
}