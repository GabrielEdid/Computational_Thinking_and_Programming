//Codigo de la clase ProductoSanitizacion
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "ProductoSanitizacion.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructores
ProductoSanitizacion::ProductoSanitizacion(string marcaIn, float precioIn, int stockIn, string tamanoIn) : marca{marcaIn}, precio{precioIn}, stock{stockIn}, tamano{tamanoIn} {}
ProductoSanitizacion::ProductoSanitizacion() : marca{"Producto"}, precio{1.0}, stock{1}, tamano{"1x1"} {}
//Getters y Setters
string ProductoSanitizacion::getMarca(){return marca;}
float ProductoSanitizacion::getPrecio(){return precio;}
int ProductoSanitizacion::getStock(){return stock;}
string ProductoSanitizacion::getTamano(){return tamano;}
void ProductoSanitizacion::setStock(int stockIn) {stock = stockIn;}
//Otros Metodos
void ProductoSanitizacion::informacion(){
    cout << "\n*** Marca: " + getMarca() + " Precio: " + to_string(getPrecio()) + " Stock: " + to_string(getStock()) + " Tamaño: " + getTamano() + " ***" << endl;

}
void ProductoSanitizacion::vende(){
    int cuantas = 0;
    cout << "\nCuantas unidades quieres comprar de " + getMarca() + "? "; cin >> cuantas;
    cout << "\nEl total seria: $" + to_string(getPrecio()*cuantas) << endl;
    setStock(getStock()-cuantas);
}
void ProductoSanitizacion::precioIVA(){
    cout << "\nEl precio del producto: " + getMarca() + " con IVA es de: $" + to_string(getPrecio() * 1.16) << endl;
}
