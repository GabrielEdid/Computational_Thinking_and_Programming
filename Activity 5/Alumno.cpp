// Codigo de la clase Alumno
// Joseph Shakalo y Gabriel Edid

#include "Alumno.hpp"
#include <string>
#include <iostream>
using namespace std;
 
//Constructores
Alumno::Alumno(string matriculaIn,string nombreIn,int edadIn,string carreraIn) : matricula{matriculaIn}, nombre{nombreIn}, edad{edadIn}, carrera{carreraIn} {}
Alumno::Alumno() : matricula{"A00"}, nombre{"NN"}, edad{0}, carrera{"NN"} {}
//Getters
string Alumno::getMatricula(){return matricula;}
string Alumno::getNombre(){return nombre;}
int Alumno::getEdad(){return edad;}
string Alumno::getCarrera(){return carrera;}
//Setters
void Alumno::setMatricula(string matriculaIn) {matricula = matriculaIn;}
void Alumno::setNombre(string nombreIn) {nombre = nombreIn;}
void Alumno::setEdad(int edadIn) {edad = edadIn;}
void Alumno::setCarrera(string carreraIn) {carrera = carreraIn;}
//Otros metodos
void Alumno::imprimeAlumno(){
    cout<< "Matricula: " + getMatricula() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Carrera: " + getCarrera()<< endl;
}
void Alumno::cumpleanios(){
    cout<< "Cumepleaños: " + to_string(getEdad() + 1) << endl;
}