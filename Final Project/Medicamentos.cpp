//Codigo de la clase Medicamentos
//Joseph Shakalo A01784107

#include "Medicamentos.hpp"
#include "PruebaCovid.hpp"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

Medicamentos::Medicamentos(string marcaIn, float precioIn, int stockIn, string descripcionIn, int edadIn, PruebaCovid pruebaIn) : marca{marcaIn}, precio{precioIn}, stock{stockIn}, descripcion{descripcionIn}, edad{edadIn}, prueba{pruebaIn} {}
Medicamentos::Medicamentos() : marca{"Producto"}, precio{1.0}, stock{1}, descripcion{1}, edad{1}, prueba{"N",1.0,1,1} {}
//Getters y Setters
string Medicamentos::getMarca() {return marca;}
float Medicamentos::getPrecio() {return precio;}
int Medicamentos::getStock() {return stock;}
string Medicamentos::getDescripcion() {return descripcion;}
int Medicamentos::getEdad() {return edad;}
PruebaCovid Medicamentos::getPrueba() {return prueba;}
void Medicamentos::setStock(int stockIn) {stock=stockIn;}
//Otros metodos
void Medicamentos::imprimeMedicamentos(){
    cout << "\n*** Marca: " + getMarca() + " Precio: " + to_string(getPrecio()) + " Stock: " + to_string(getStock()) + " Descripcion: " + getDescripcion() + " ***" << endl;
}
void Medicamentos::imprimePrueba(){
    prueba.imprimePruebaCovid();
}
void Medicamentos::vendeMedicamento(){
    int cuantas = 0;
    cout << "\nCuantas unidades quieres comprar de " + getMarca() + "? "; cin >> cuantas;
    cout << "\nEl total seria: $" + to_string(getPrecio()*cuantas) << endl;
    setStock(getStock()-cuantas);
    }
void Medicamentos::vendePrueba(){
    prueba.vende();
    }
void Medicamentos::precioIVA(){
    cout << "\nEl precio del producto: " + getMarca() + " con IVA es de: $" + to_string(getPrecio() * 1.16) << endl;
}
void Medicamentos::efectividadVacuna(){
    cout << "\n*** La efectividad de la vacuna segun tu edad de " + to_string(getEdad()) + " años seria del: " + to_string((sqrt(getEdad())+ 85)) + "% ***" << endl;
}
void Medicamentos::riesgoCovid(){
    if (getEdad() > 50){
        cout << "\n*** Ya que tu edad es " + to_string(getEdad()) + " años SI eres considerado parte de los grupos de riesgo. Sigue las medidas de seguridad y cuidate! ***" << endl;
    }
    else if (getEdad() < 50){
        cout << "\n*** Ya que tu edad es " + to_string(getEdad()) + " años NO eres considerado parte de los grupos de riesgo. Sin embargo, sigue las medidas de seguridad y cuida a los que si lo son! ***" << endl;
    }
}

