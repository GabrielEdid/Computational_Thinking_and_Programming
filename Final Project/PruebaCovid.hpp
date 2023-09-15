//Archivo de Encabezado de la clase PruebaCovid
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#ifndef PRUEBACOVID_H
#define PRUEBACOVID_H
#include <string>
using namespace std;

class PruebaCovid {
    private:
        string marca;
        float precio;
        int stock;
        int cantidad;
    public:
        //Constructores
        PruebaCovid(string, float, int, int);
        PruebaCovid();
        //Getters
        string getMarca();
        float getPrecio();
        int getStock();
        int getCantidad();
        //Setters
        void setMarca(string);
        void setPrecio(float);
        void setStock(int);
        void setCantidad(int);
        //Otros metodos
        void imprimePruebaCovid();
        void vende();
        void efectividad(); 
        void precioIVA();
};

#endif