//Archivo de Encabezado de la clase TarjetaCredito
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#ifndef TARJETACREDITO_H
#define TARJETACREDITO_H
#include <string>
using namespace std;

class TarjetaCredito {
    private:
        string tipo;
        int numero;
        int cvv;
        string caducidad;
    public:
        //Constructores
        TarjetaCredito(string, int, int, string);
        TarjetaCredito();
        //Getters
        string getTipo();
        int getNumero();
        int getCvv();
        string getCaducidad();
        //Setters
        void setTipo(string);
        void setNumero(int);
        void setCvv(int);
        void setCaducidad(string);
        //Otros metodos
        void imprimeTarjetaCredito();
        void cambiarTipo();
        void cambiarNumero();
        void cambiarCvv();
        void cambiarCaducidad ();
};

#endif


