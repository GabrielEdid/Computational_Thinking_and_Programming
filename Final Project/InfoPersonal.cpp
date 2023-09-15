//Codigo de la clase InfoPersonal
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "InfoPersonal.hpp"
#include "TarjetaCredito.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
InfoPersonal::InfoPersonal(string nombreIn, string apellidoIn, string correoIn, TarjetaCredito pagoIn) : nombre{nombreIn}, apellido{apellidoIn}, correo{correoIn}, pago{pagoIn} {}
InfoPersonal::InfoPersonal() : nombre{"N"}, apellido{"N"}, correo{"N"}, pago{"N",0,0,"N"} {}
//Getters
string InfoPersonal::getNombre(){return nombre;}
string InfoPersonal::getApellido(){return apellido;}
string InfoPersonal::getCorreo(){return correo;}
TarjetaCredito InfoPersonal::getPago(){return pago;}
//Setters
void InfoPersonal::setNombre(string nombreIn) {nombre=nombreIn;}
void InfoPersonal::setApellido(string apellidoIn) {apellido=apellidoIn;}
void InfoPersonal::setCorreo(string correoIn) {correo=correoIn;}
void InfoPersonal::setPago(TarjetaCredito pagoIn) {pago=pagoIn;}
//Otros metodos
void InfoPersonal::verDatos(){
    cout << "\n*** Nombre: " + getNombre() + " Apellido: " + getApellido() + " Correo: " + getCorreo() + " ***" << endl;
}
void InfoPersonal::verPago(){
    pago.imprimeTarjetaCredito();
    }
void InfoPersonal::cambiarNombre(){
    string nuevo_nombre = "N";
    cout << "\nCual quieres que sea el nuevo nombre? "; cin >> nuevo_nombre;
    setNombre(nuevo_nombre);
    cout << "\nEl nuevo nombre es: " + getNombre() << endl;
}
void InfoPersonal::cambiarNumeroTarjeta(){
    pago.cambiarNumero();
}
