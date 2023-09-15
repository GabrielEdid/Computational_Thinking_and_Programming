//Codigo de la clase TarjetaCredito
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "TarjetaCredito.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
TarjetaCredito::TarjetaCredito(string tipoIn, int numeroIn, int cvvIn, string caducidadIn) : tipo{tipoIn}, numero{numeroIn}, cvv{cvvIn}, caducidad{caducidadIn} {}
TarjetaCredito::TarjetaCredito() : tipo{"amex"}, numero{12345678}, cvv{123}, caducidad{"09/2027"} {}
//Getters
string TarjetaCredito::getTipo(){return tipo;}
int TarjetaCredito::getNumero(){return numero;}
int TarjetaCredito::getCvv(){return cvv;}
string TarjetaCredito::getCaducidad(){return caducidad;}
//Setters
void TarjetaCredito::setTipo(string tipoIn) {tipo=tipoIn;}
void TarjetaCredito::setNumero(int numeroIn) {numero=numeroIn;}
void TarjetaCredito::setCvv(int cvvIn) {cvv=cvvIn;}
void TarjetaCredito::setCaducidad(string caducidadIn) {caducidad=caducidadIn;}
//Otros metodos
void TarjetaCredito::imprimeTarjetaCredito(){
    cout << "\n*** Tipo: " + getTipo() + " Numero: " + to_string(getNumero()) + " Cvv: " + to_string(getCvv()) + " Caducidad: " + getCaducidad() + " ***" << endl;
}
void TarjetaCredito::cambiarTipo(){
    string cambiar_tipo = "N";
    cout << "\nA que tipo quieres cambiar la tarjeta? "; cin >> cambiar_tipo; 
    setTipo(cambiar_tipo);
}
void TarjetaCredito::cambiarNumero(){
    int cambiar_numero = 0;
    cout << "\nA que numero quieres cambiar la tarjeta? "; cin >> cambiar_numero; 
    setNumero(cambiar_numero);
    cout << "\nEl nuevo numero de tarjeta es: " + to_string(getNumero()) << endl;
}
void TarjetaCredito::cambiarCvv(){
    int cambiar_cvv= 0;
    cout << "\nA que cvv quieres cambiar la tarjeta? "; cin >> cambiar_cvv; 
    setCvv(cambiar_cvv);
}
void TarjetaCredito::cambiarCaducidad(){
    string cambiar_caducidad = "N";
    cout << "\nA que fecha quieres cambiar la caducidad de la tarjeta? "; cin >> cambiar_caducidad; 
    setCaducidad(cambiar_caducidad);
}
