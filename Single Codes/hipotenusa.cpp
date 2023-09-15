// Hipotenusa de un Triangulo 
#include <iostream>
using namespace std;
#include <cmath>

float c1;
float c2;

int main() {
    cout << "Dime el tamaño de uno de los lados" << endl; cin >> c1;
    cout << "Dime el tamaño del segundo de los lados" << endl; cin >> c2;
    float hipotenusa = sqrt((c1*c1)+(c2*c2));
    cout << "La hipotenusa con los catetos de tamaño " + to_string(c1) + " y " + to_string(c2) + " es de " + to_string(hipotenusa) << endl;
    return 0;
}