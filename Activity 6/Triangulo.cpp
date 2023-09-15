//Codigo de la clase Triangulo
//Joseph Shakalo y Gabriel Edid

#include "Triangulo.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

double s = 0.0;

Triangulo::Triangulo(Point ver1, Point ver2, Point ver3) : vertex1{ver1}, vertex2{ver2}, vertex3{ver3} {}
Triangulo::Triangulo() : vertex1{0,0}, vertex2{50,30}, vertex3{25,10} {}
double Triangulo::perimeter(){
    return vertex1.distance(vertex2) + vertex2.distance(vertex3) + vertex3.distance(vertex1);
}
double Triangulo::area(){
    double s = perimeter()/2;
    return sqrt(s*(s-vertex1.distance(vertex2))*(s-vertex2.distance(vertex3))*(s-vertex3.distance(vertex1)));
}