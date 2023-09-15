//Archivo de Encabezado de la clase InfoPersonal
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#ifndef INFOPERSONAL_H
#define INFOPERSONAL_H
#include "TarjetaCredito.hpp"
#include <string>
using namespace std;

class InfoPersonal{
    private:
        string nombre;
        string apellido;
        string correo;
        TarjetaCredito pago;
    public:
        //Constructores
        InfoPersonal(string, string, string, TarjetaCredito);
        InfoPersonal();
        //Getters
        string getNombre();
        string getApellido();
        string getCorreo();
        TarjetaCredito getPago();
        //Setters
        void setNombre(string);
        void setApellido(string);
        void setCorreo(string);
        void setPago(TarjetaCredito);
        //Otros metodos
        void verDatos();
        void verPago();
        void cambiarNombre();
        void cambiarNumeroTarjeta();
};

#endif