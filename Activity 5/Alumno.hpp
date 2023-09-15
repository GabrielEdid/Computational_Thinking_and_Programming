// Archivo de Encabezado de la clase Alumno
// Joseph Shakalo y Gabriel Edid

#ifndef ALUMNO
#define ALUMNO
#include <string>
using namespace std;

class Alumno{
    private:
        string matricula;
        string nombre;
        int edad;
        string carrera;
    public:
        //Constructores
        Alumno(string, string, int, string);
        Alumno();
        //Getters
        string getMatricula();
        string getNombre();
        int getEdad();
        string getCarrera();
        //Setters
        void setMatricula(string);
        void setNombre(string);
        void setEdad(int);
        void setCarrera(string); 
        //Otros metodos
        void imprimeAlumno();
        void cumpleanios();
};

#endif