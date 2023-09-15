//Archivo de encabezado de la clase Teclado
//Gabriel Edid A01782146
#ifndef TECLADO_H
#define TECLADO_H
#include "Led.hpp"
#include <string>
using namespace std;

class Teclado{
    private:
    Led indicador;
    int numTeclas;
    public:
    //Constructores
    Teclado();
    Teclado(int);
    Teclado(Led, int);
    //Getters
    Led getIndicador();
    int getNumTeclas();
    //Setters
    void setIndicador(Led);
    void setNumTeclas(int);
    //Otros metodos
    string colorLed();
    bool prendidoLed();
    void cambiaColorLed(string);
    string print();
};

#endif