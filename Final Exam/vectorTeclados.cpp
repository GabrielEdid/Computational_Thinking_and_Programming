//Codigo de las clases Led y Teclado
//Gabriel Edid A01782146

#include "Led.hpp"
#include "Teclado.hpp"
#include <iostream>
#include <vector>
using namespace std;

void TecladosCasa(Teclado tec1, Teclado tec2, Teclado tec3){
    vector<Teclado> vect;
    vect.push_back(tec1);
    vect.push_back(tec2);
    vect.push_back(tec3);

    for (Teclado i : vect)
        cout << i << " ";
}


int main(){
    Teclado tec1{};
    Teclado tec2{5};
    Teclado tec3{{"Lila", false},10};
    TecladosCasa(tec1,tec2,tec3);
}