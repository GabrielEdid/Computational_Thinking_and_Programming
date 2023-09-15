//Archivo de Encabezado de la clase Medicamentos
//Joseph Shakalo A01784107

#ifndef MEDICAMENTOS_H
#define MEDICAMENTOS_H
#include "PruebaCovid.hpp"
#include <string>
using namespace std;

class Medicamentos{
    private:
    string marca;
    float precio;
    int stock;
    string descripcion;
    int edad;
    PruebaCovid prueba;
    public:
    Medicamentos(string, float, int, string, int, PruebaCovid);
    Medicamentos();
    //Getters y Setters
    string getMarca();
    float getPrecio();
    int getStock();
    string getDescripcion();
    int getEdad();
    PruebaCovid getPrueba();
    void setStock(int);
    //Otros metodos
    void imprimeMedicamentos();
    void imprimePrueba();
    void vendeMedicamento();
    void vendePrueba();
    void precioIVA(); 
    void efectividadVacuna();
    void riesgoCovid();
};

#endif