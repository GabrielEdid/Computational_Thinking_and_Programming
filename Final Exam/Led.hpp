//Archivo de encabezado de la clase Led
//Gabriel Edid A01782146
#ifndef LED_H
#define LED_H
#include <string>
using namespace std;

class Led{
    private:
    string color;
    bool encendido;
    public:
    //Constructores
    Led();
    Led(string, bool);
    //Getters
    string getColor();
    bool getEncendido();
    //Setters
    void setColor(string);
    void setEncendido(bool);
    //Otros metodos
    bool isEncendido();
    string apagar();
    string encender();
    string print();
};

#endif