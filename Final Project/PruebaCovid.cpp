//Codigo de la clase PruebaCovid
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "PruebaCovid.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructore
PruebaCovid::PruebaCovid(string marcaIn, float precioIn, int stockIn, int cantidadIn) : marca{marcaIn}, precio{precioIn}, stock{stockIn}, cantidad{cantidadIn} {}
PruebaCovid::PruebaCovid() : marca{"Prueba"}, precio{1.0}, stock{1}, cantidad{1} {}
//Getters
string PruebaCovid::getMarca(){return marca;}
float PruebaCovid::getPrecio(){return precio;}
int PruebaCovid::getStock(){return stock;}
int PruebaCovid::getCantidad(){return cantidad;}
//Setters
void PruebaCovid::setMarca(string marcaIn) {marca=marcaIn;}
void PruebaCovid::setPrecio(float precioIn) {precio=precioIn;}
void PruebaCovid::setStock(int stockIn) {stock=stockIn;}
void PruebaCovid::setCantidad(int cantidadIn) {cantidad=cantidadIn;}
//Otros metodos
void PruebaCovid::imprimePruebaCovid(){
    cout << "\n*** Marca: " + getMarca() + " Precio: " + to_string(getPrecio()) + " Stock: " + to_string(getStock()) + " Cantidad: " + to_string(getCantidad()) + " ***" << endl;
}
void PruebaCovid::vende(){
    int cuantas = 0;
    cout << "\nCuantas unidades quieres comprar de "  + getMarca() + "? " ; cin >> cuantas;
    cout << "\nEl total seria: $" + to_string(getPrecio()*cuantas) << endl;
    setStock(getStock()-cuantas);
}
void PruebaCovid::efectividad(){
    int edad = 0;
    cout << "\nQue edad tienes? "; cin >> edad;
    cout << "\nLa efectividad seria del: " + to_string((edad * 0.75)) + "%" << endl;
}
void PruebaCovid::precioIVA(){
    cout << "\nEl precio de la prueba de marca: " + getMarca() + " con IVA es de: $" + to_string(getPrecio() * 1.16) << endl;
}


