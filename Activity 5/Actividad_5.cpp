//Programa que se ejecuta para el ejemplo de la clase Alumno
// Joseph Shakalo y Gabriel Edid

#include "Alumno.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Alumno primero {};
    Alumno segundo {"A01782146", "Gabriel", 19, "ITC"};
    segundo.imprimeAlumno();
    segundo.cumpleanios();
    cout << "La matricula es: " + segundo.getMatricula() << endl;
    string nuevoNombre {"N"};
    cout << "Dame el nuevo valor del nombre: " << endl; cin >> nuevoNombre;
    segundo.setNombre(nuevoNombre);
    cout << "El nuevo nombre es: " + segundo.getNombre() << endl;
}