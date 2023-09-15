//Codigo de la clase HacerPedido
//Gabriel Edid A01782146

#include "TarjetaCredito.hpp"
#include "HacerPedido.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
HacerPedido::HacerPedido(string ciudadIn, string calleIn, int postalIn, TarjetaCredito pagoIn) : ciudad{ciudadIn}, calle{calleIn}, postal{postalIn}, pago{pagoIn} {}
HacerPedido::HacerPedido() : ciudad{"N"}, calle{"N"}, postal{1}, pago{"N",0,0,"N"} {}
//Getters
string HacerPedido::getCiudad() {return ciudad;}
string HacerPedido::getCalle() {return calle;}
int HacerPedido::getPostal() {return postal;}
TarjetaCredito HacerPedido::getPago() {return pago;}
//Setters
void HacerPedido::setCiudad(string ciudadIn) {ciudad=ciudadIn;}
void HacerPedido::setCalle(string calleIn) {calle=calleIn;}
void HacerPedido::setPostal(int postalIn) {postal=postalIn;}
void HacerPedido::setPago(TarjetaCredito pagoIn) {pago=pagoIn;}
//Otros Metodos
void HacerPedido::imprimeDireccionEnvio(){
    cout << "\n*** Ciudad: " + getCiudad() + " Calle: " + getCalle() + " Codigo Postal: " + to_string(getPostal()) + " ***" << endl;
}
void HacerPedido::verPago(){
    pago.imprimeTarjetaCredito();
    }
void HacerPedido::cambiarCiudad(){
    string nueva_ciudad = "N";
    cin.ignore(32767,'\n');
    cout << "\nCual quieres que sea la nueva ciudad de la direccion de envio? "; getline(cin, nueva_ciudad);
    setCiudad(nueva_ciudad);
    cout << "\nLa nueva ciudad de la direccion de envio es: " + getCiudad() << endl;
}
void HacerPedido::cambiarCalle(){
    string nueva_calle = "N";
    cin.ignore(32767,'\n');
    cout << "\nCual quieres que sea la nueva calle de la direccion de envio? "; getline(cin, nueva_calle);
    setCalle(nueva_calle);
    cout << "\nLa nueva calle de la direccion de envio es: " + getCalle() << endl;
}
void HacerPedido::cambiarPostal(){
    int nuevo_postal = 0;
    cout << "\nCual quieres que sea el nuevo codigo postal de la direccion de envio? "; cin >> nuevo_postal;
    setPostal(nuevo_postal);
    cout << "\nEl nuevo codigo postal de la direccion de envio es: " + to_string(getPostal()) << endl;
}
void HacerPedido::cambiarNumeroTarjeta(){
    pago.cambiarNumero();
}