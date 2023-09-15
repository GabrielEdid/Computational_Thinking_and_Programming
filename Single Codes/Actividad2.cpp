// Actividad 2
// Joseph Shakalo y Gabriel Edid
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

void operaNumeros(){
    int n1 = 0;
    int n2 = 0;
    char letra = 'i';
    int resultado = 0;
    cout<<endl<< "Bienvenido a operaNumeros" << endl;
    cout<<"Dame un numero"<< endl; cin >>n1;
    cout<<"Dame un segundo numero"<< endl; cin >>n2;
    cout<<"Que quieres hacer, sumar(S), restar(R) o multiplicar(M)? "<< endl; cin >> letra;
    switch(letra){
        case 'S':
            resultado = n1 + n2;
            cout<<"El resultado de la suma es: " + to_string(resultado) << endl;
            break;
        case 'R':
            resultado = n1 - n2;
            cout<<"El resultado de la resta es: " + to_string(resultado) << endl;
            break;
        case 'M':
            resultado = n1 * n2;
            cout<<"El resultado de la multiplicacion es: " + to_string(resultado) << endl;
            break;
    }
}

void numeroImpar(){
    int n1 = 0;
    cout<<endl<< "Bienvenido a numeroImpar" << endl;
    cout <<  "Introduce un numero" << endl; cin>> n1;
    while (n1 % 2 != 0) {
        cout <<  "Vuelve a introducir el numero" << endl; cin>> n1;
    } 
    cout <<  "El numero es par" << endl; 
}

void sumaPares(){
    int par = 0;
    int i = 0;
    int resultado = 0;
    
    cout<<endl<< "Bienvenido a sumaPares" << endl;
    cout<< "Aqui veras el resultado de la suma de todos los numeros pares del 0 al 100" << endl;
    for(i=0;i<=100;i++) {
        if (i % 2 == 0) {
            resultado = resultado + i;
        }
    }
    cout << "El resultado es: " + to_string(resultado)<< endl;   
}

void mediaAritmetica(){
    int cuantos = 0;
    int valor = 0;
    int total = 0;
    int resultado = 0;
    cout<<endl<< "Bienvenido a mediaAritmetica" << endl;

    cout<<"Cuantos numeros vamos a usar? "<< endl; cin >> cuantos;

    for (int i=0; i<cuantos; i++){
        cout<<"Dame un valor "<< endl; cin >> valor;
        total = total + valor;
    }   
    
    resultado = total/cuantos;
    cout<<"La media aritmetica de " + to_string(cuantos) + " numeros es: " + to_string(resultado)<< endl;

}

void numeroMagico(){
    int random = (rand() % 100) + 1;
    int num = 0;
    
    cout<<endl<< "Bienvenido a numeroMagico" << endl;
    cout<<"Dame un numero del 1 al 100" << endl; cin >> num;

    while(num != random) {
        if (num < random) {
            cout<<"MAS" << endl; cin >> num;}
        else if (num > random) {
            cout<<"MENOS" << endl; cin >> num;}
    }
    cout<<"Muy bien! Llegaste al Numero Magico!" << endl;
}

void conversionCelsiusFarenheit(){
    float celcius = 0.0;
    float farenheit = 0.0;
    int cuantos = 0;
    int i = 0;

    cout<<endl<< "Bienvenido a conversionesCelsiusFarenheit" << endl;
    cout<<"Cuntas conversiones se van a hacer?" << endl; cin >> cuantos;
    int datosC[cuantos];
    int datosF[cuantos];

    for(i=0;i<cuantos;i++){
        cout<<"Dame el valor en Celcius: " << endl; cin >> celcius;
        datosC[i]=celcius;
        farenheit = (9.0/5.0) * celcius + 32;
        datosF[i]=farenheit;
    }
    for(i=0;i<cuantos;i++){
        if (i == 0){
            cout<<"Celsius"<<"\t\t"<<"Farenheit"<< endl;
        }
        cout<<datosC[i]<<"\t\t"<<datosF[i]<<endl;
    }
}

void serieAritmetica(){
    int a = 1;
    int d = 3;
    int n = 25;
    int operacion = 0;
    int resultado = 0;
    
    cout<<endl<< "Bienvenido a serieAritmetica" << endl;
    cout<< "Aqui veras el resultado de una serie aritmetica de n=25" << endl;
    for(int i=0;i<n;i++){
        operacion = a + i*d;
        resultado = resultado + operacion;
        cout<<"Termino " + to_string(i+1) + ": " + to_string(resultado)<< endl;
    }
}

void mediasGeometricaArmonica(){ 
    int num = 0;
    float finalarm = 0.0;
    float finalgeo = 0.0;
    int counter = 0;
    float suma = 0.0;
    float multiplicacion = 1.0; 

    cout<<endl<< "Bienvenido a mediasGeometricaArmonica" << endl;
    cout<<"Dame un valor" << endl; cin >> num;
    while (num != 0) {
        counter++;
        multiplicacion *= num;
        suma += (1.0/num);
        cout<<"Dame un valor" << endl; cin >> num;
    }
    finalgeo = pow(multiplicacion,1.0/counter);
    finalarm = counter/suma;
    cout<<"La Medida Geometrica de " + to_string(counter) + " datos es: " + to_string(finalgeo)<< endl;
    cout<<"La Medida Armonica de " + to_string(counter) + " datos es: " + to_string(finalarm)<< endl;
}

int main() {
    int op = 0;
    while (op != 9){
        cout<< endl<< "Bienvenido selecciona una opcion" << endl;
        cout << "1- operaNumeros" << endl;
        cout << "2- numeroImpar" << endl;
        cout << "3- sumaPares " << endl;
        cout << "4- mediaAritmetica" << endl;
        cout << "5- numeroMagico" << endl;
        cout << "6- conversionCelsiusFarenheit" << endl;
        cout << "7- serieAritmetica" << endl;
        cout << "8- mediasGeometricaArmonica" << endl;
        cout << "9- Salir " << endl;
        cout << "Selecciona la opcion: "; cin>> op;

        switch (op) {
        case 1:
            operaNumeros();
            break;
        case 2:
            numeroImpar();
            break;
        case 3:
            sumaPares();
            break;
        case 4:
            mediaAritmetica();
            break;
        case 5:
            numeroMagico();
            break;
        case 6:
            conversionCelsiusFarenheit();
            break;
        case 7:
            serieAritmetica();
            break;
        case 8:
            mediasGeometricaArmonica();
            break;
        }
    }
}