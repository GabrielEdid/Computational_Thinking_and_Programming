//Codigo de la clase Teclado
//Gabriel Edid A01782146

#include "Led.hpp"
#include "Teclado.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
Teclado::Teclado() : indicador{"Morado", false}, numTeclas{77} {}
Teclado::Teclado(int num) : numTeclas{num} {}
Teclado::Teclado(Led indc, int num) : indicador{indc}, numTeclas{num} {}
//Getters
Led Teclado::getIndicador() {return indicador;}
int Teclado::getNumTeclas() {return numTeclas;}
//Setters
void Teclado::setIndicador(Led indc) {indicador=indc;}
void Teclado::setNumTeclas(int num) {numTeclas=num;}
//Otros metodos
string Teclado::colorLed(){
    return indicador.getColor();
}
bool Teclado::prendidoLed(){
    return indicador.isEncendido();
}
void Teclado::cambiaColorLed(string p){
    indicador.setColor(p);
}
string Teclado::print(){
    return "Teclado(Led(" + indicador.getColor() + "," + to_string(indicador.getEncendido()) + ")," + to_string(getNumTeclas()) + ")";
}