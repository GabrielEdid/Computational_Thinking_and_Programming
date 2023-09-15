//Archivo de Encabezado de la clase ProductoSanitizacion
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#ifndef PRODUCTOSANITIZACION_H
#define PRODUCTOSANITIZACION_H
#include <string>
using namespace std;

class ProductoSanitizacion {
    private:
        string marca;
        float precio;
        int stock;
        string tamano;
    public:
        //Constructores
        ProductoSanitizacion(string, float, int, string);
        ProductoSanitizacion();
        //Getters y Setters
        string getMarca();
        float getPrecio();
        int getStock();
        string getTamano();
        void setStock(int);
       //Otros Metodos
        void informacion();
        void vende();
        void precioIVA();
};

#endif