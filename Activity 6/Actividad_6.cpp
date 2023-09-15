//Programa que se ejecuta para el ejemplo de la clase Point y Triangulo
//Joseph Shakalo y Gabriel Edid

#include "Point.hpp"
#include "Triangulo.hpp"
#include <iostream>
using namespace std;

int main(){
    Triangulo triangulo1{};
    Triangulo triangulo2{{0.0,0.0},{10.0,25.0},{8.0,30.0}};

    cout<< "El perímetro del triangulo es: " + to_string(triangulo2.perimeter()) << endl;
    cout<< "El área del triangulo es: " + to_string(triangulo2.area()) << endl;
}