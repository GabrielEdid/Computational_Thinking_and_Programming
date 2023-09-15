//Archivo de Encabezado de la clase HacerPedido
//Gabriel Edid A01782146

#ifndef HACERPEDIDO_H
#define HACERPEDIDO_H
#include "TarjetaCredito.hpp"
#include <string>
using namespace std;

class HacerPedido{
    private:
    string ciudad;
    string calle;
    int postal;
    TarjetaCredito pago;
    public:
    //Constructores
    HacerPedido(string, string, int, TarjetaCredito);
    HacerPedido();
    //Getters
    string getCiudad();
    string getCalle();
    int getPostal();
    TarjetaCredito getPago();
    //Setters
    void setCiudad(string);
    void setCalle(string);
    void setPostal(int);
    void setPago(TarjetaCredito);
    //Otros Metodos
    void imprimeDireccionEnvio();
    void verPago();
    void cambiarCiudad();
    void cambiarCalle();
    void cambiarPostal();
    void cambiarNumeroTarjeta();
};

#endif