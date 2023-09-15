//Archivo de Encabezado de la clase ProteccionPersonal
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#ifndef PROTECCIONPERSONAL_H
#define PROTECCIONPERSONAL_H
#include <string>
using namespace std;

class ProteccionPersonal {
    private:
        string nombre;
        float precio;
        int stock;
        int cantidad;
    public:
        //Constructores
        ProteccionPersonal(string, float, int, int);
        ProteccionPersonal();
        //Getters
        string getNombre();
        float getPrecio();
        int getCantidad();
        int getStock();
        //Setters
        void setNombre(string);
        void setPrecio(float);
        void setCantidad(int);
        void setStock(int);
        //Otros metodos
        void imprimeProteccionPersonal();
        void vende();
        void precioIVA(); 
        
};

#endif