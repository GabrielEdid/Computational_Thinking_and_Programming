//Codigo de la clase Led
//Gabriel Edid A01782146

#include "Led.hpp"
#include <string>
using namespace std;

Led::Led() : color{"Verde"}, encendido{false} {}
Led::Led(string col, bool enc) : color{col}, encendido{enc} {}
//Getters
string Led::getColor(){return color;}
bool Led::getEncendido(){return encendido;}
//Setters
void Led::setColor(string col) {color=col;}
void Led::setEncendido(bool enc) {encendido=enc;}
//Otros metodos
bool Led::isEncendido(){
    return encendido;
}
string Led::apagar(){
    encendido = false;
    return "Apagaste el Led";
}
string Led::encender(){
    encendido = true;
    return "Encendiste el Led";
}
string Led::print(){
    return "Led(" + getColor() + "," + to_string(isEncendido()) + ")";
}