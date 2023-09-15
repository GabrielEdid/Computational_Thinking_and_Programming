//Codigo de la clase ProteccionPersonal
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "ProteccionPersonal.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
ProteccionPersonal::ProteccionPersonal(string nombreIn, float precioIn, int stockIn, int cantidadIn) : nombre{nombreIn}, precio{precioIn}, stock{stockIn}, cantidad{cantidadIn} {}
ProteccionPersonal::ProteccionPersonal() : nombre{"N"}, precio{0.0}, stock{0}, cantidad{0} {}
//Getters
string ProteccionPersonal::getNombre(){return nombre;}
float ProteccionPersonal::getPrecio(){return precio;}
int ProteccionPersonal::getStock(){return stock;}
int ProteccionPersonal::getCantidad(){return cantidad;}
//Setters
void ProteccionPersonal::setNombre(string nombreIn) {nombre=nombreIn;}
void ProteccionPersonal::setPrecio(float precioIn) {precio=precioIn;}
void ProteccionPersonal::setStock(int stockIn) {stock=stockIn;}
void ProteccionPersonal::setCantidad(int cantidadIn) {cantidad=cantidadIn;}
//Otros metodos
void ProteccionPersonal::imprimeProteccionPersonal(){
    cout << "\n*** Marca: " + getNombre() + " Precio: " + to_string(getPrecio()) + " Stock: " + to_string(getStock()) + " Cantidad: " + to_string(getCantidad()) + " ***" << endl;
}
void ProteccionPersonal::vende(){
    int cuantas = 0;
    cout << "\nCuantas unidades quieres comprar de " + getNombre() + "? "; cin >> cuantas;
    cout << "\nEl total seria: $" + to_string(getPrecio()*cuantas) << endl;
    setStock(getStock()-cuantas);
}

void ProteccionPersonal::precioIVA(){
    cout << "\nEl precio del producto con IVA es de: $" + to_string(getPrecio() * 1.16) << endl;
}


