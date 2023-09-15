//Codigo de prueba de las clases Led y Teclado
//Gabriel Edid A01782146

#include "Led.hpp"
#include "Teclado.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "*** Pruebas de la clase Led ***\n";
    Led led1 {};
    Led led2 {"Rojo",true};
    cout << led1.print() << endl;
    cout << led2.print() << endl;
    cout << "Led 1 es de color: " << led1.getColor() << endl;
    led2.setColor("Azul");
    cout << "Led 2 esta " << led2.isEncendido() << endl;
    led2.apagar();
    led1.encender();
    cout << led1.print() << endl;
    cout << led2.print() << endl;

    cout << "\n--- Pruebas de la clase Teclado ---\n";
    Teclado tec1 {};
    Teclado tec2 {44};
    cout << tec1.print() << endl;
    cout << tec2.print() << endl;
    cout << "Color del indicador del teclado 1: " << tec1.colorLed() << endl;
    cout << "Indicador del teclado 2 esta: " << tec2.prendidoLed() << endl;
    tec1.cambiaColorLed("Naranja");
    cout << "El teclado 1 tiene " + to_string(tec1.getNumTeclas()) + " teclas\n";
    tec1.setNumTeclas(13);
    cout << tec1.print() << endl;
    return 0;
}
