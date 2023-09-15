//Programa que  ejecuta todas las clases/main
//Joseph Shakalo A01784107 y Gabriel Edid A01782146

#include "ProductoSanitizacion.hpp"
#include "PruebaCovid.hpp"
#include "ProteccionPersonal.hpp"
#include "InfoPersonal.hpp"
#include "TarjetaCredito.hpp"
#include "Medicamentos.hpp"
#include "HacerPedido.hpp"
#include <iostream>
using namespace std;

int opcion {0};

void pruebas_covid(){
    //Variables de la funcion
    int cual = 0;
    int que = 0;
    
    //Constructores
    PruebaCovid pruebapcr {"PfizerPcr", 1499.99, 132, 2};
    PruebaCovid pruebaant {"Pruebate de Covid Hoy!", 299.99, 471, 5};

    //Loop para el menu de la funcion
    while(cual != 3){
        cout << "\nQue tipo de prueba de covid quieres?\n" << endl;
        cout << "1- Prueba PCR" << endl;
        cout << "2- Prueba Antigeno" << endl;
        cout << "3- Regresar" << endl;
        cout << "\nOpcion: "; cin >> cual;

    switch (cual){
    case 1: //Para una de las pruebas de covid
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Efectividad" << endl;
        cout << "4- Precio" << endl;
        cout << "5- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            pruebapcr.imprimePruebaCovid();
            }
        else if (que == 2){
            pruebapcr.vende();
            }
        else if (que == 3){
            pruebapcr.efectividad();
            }
        else if (que == 4){
            pruebapcr.precioIVA();
            } 
        break;
    
    case 2: //Para otras de las pruebas de covid
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Efectividad" << endl;
        cout << "4- Precio" << endl;
        cout << "5- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;

        //Llama a los metodos
        if (que == 1){
            pruebaant.imprimePruebaCovid();
            }
        else if (que == 2){
            pruebaant.vende();
            }
        else if (que == 3){
            pruebaant.efectividad();
            }
        else if (que == 4){
            pruebaant.precioIVA();
            }   
        break;
        }
    } 
}

void productos_sanitizacion(){
    //Variables de la funcion
    int cual {0};
    int que {0};

    //Constructores
    ProductoSanitizacion lysol{"Lysol", 119.99, 51, "10x10x30cm 350gr"};
    ProductoSanitizacion cloro{"Clorox", 449.99, 13, "20x20x26cm 10L"};
    ProductoSanitizacion toallitas{"Purell", 219.99, 28, "6x7x10cm 270 Toallas"};
    ProductoSanitizacion gelAlcohol{"Blumen", 189.99, 33, "12x12x30cm 4L"};

    //Loop para el menu de la funcion
    while(cual != 5){
        cout << "\nQue producto de sanitizacion quieres?\n" << endl;
        cout << "1- Spray Desinfectante" << endl;
        cout << "2- Cloro" << endl;
        cout << "3- Toallas con Alcohol" << endl;
        cout << "4- Alcohol en Gel" << endl;
        cout << "5- Regresar" << endl;
        cout << "\nOpcion: "; cin >> cual;

    switch (cual){
    case 1: //Para uno de los productos de sanitizacion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            lysol.informacion();
            }
        else if (que == 2){
            lysol.vende();
            }
        else if (que == 3){
            lysol.precioIVA();
            }   
        break;
    
    case 2: //Para otro de los productos de sanitizacion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            cloro.informacion();
            }
        else if (que == 2){
            cloro.vende();
            }
        else if (que == 3){
            cloro.precioIVA();
            }
        break;

    case 3: //Para otro de los productos de sanitizacion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            toallitas.informacion();
            }
        else if (que == 2){
            toallitas.vende();
            }
        else if (que == 3){
            toallitas.precioIVA();
            }       
        break;

    case 4: //Para el ultimo de los productos de sanitizacion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            gelAlcohol.informacion();
            }
        else if (que == 2){
            gelAlcohol.vende();
            }
        else if (que == 3){
            gelAlcohol.precioIVA();
            }       
        break;
    
        }
    } 
}

void proteccion_personal(){
    //Variables de la funcion
    int cual {0};
    int que {0};

    //Constructores
    ProteccionPersonal guantes{"Queen", 139.99, 613, 100};
    ProteccionPersonal cubrebocas{"KF94", 124.99, 987, 50};
    ProteccionPersonal caretas{"FaceShield", 99.99, 215, 10};

    while(cual != 4){ //Loop para el menu de la funcion
        cout << "\nQue producto de sanitizacion quieres?\n" << endl;
        cout << "1- Guantes" << endl;
        cout << "2- Cubrebocas" << endl;
        cout << "3- Caretas" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> cual;

    switch (cual){
    case 1: //Para uno de los productos de proteccion personal
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            guantes.imprimeProteccionPersonal();
            }
        else if (que == 2){
            guantes.vende();
            }
        else if (que == 3){
            guantes.precioIVA();
            }   
        break;
    
    case 2: //Para otro de los productos de proteccion personal
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            cubrebocas.imprimeProteccionPersonal();
            }
        else if (que == 2){
            cubrebocas.vende();
            }
        else if (que == 3){
            cubrebocas.precioIVA();
            }   
        break;

    case 3: //Para otro de los productos de proteccion personal
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales" << endl;
        cout << "2- Comprar" << endl;
        cout << "3- Precio" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        //Llama a los metodos
        if (que == 1){
            caretas.imprimeProteccionPersonal();
            }
        else if (que == 2){
            caretas.vende();
            }
        else if (que == 3){
            caretas.precioIVA();
            }   
        break;
        }
    } 
}

void datos_usuario(){
    //Variables de la funcion
    int dime = 0;
    string nombreIn = "N";
    string apellidoIn = "N";
    string correoIn = "N";
    string direccionIn = "N";
    string tipoIn = "N";
    int numeroIn = 0;
    int cvvIn = 0;
    string caducidadIn = "N";

    //Inputs para crear el constructor
    cout << "\n*** Bienvenido a datos de usuario ***" << endl;
    cout << "\nComencemos recopilando tus datos personales" << endl;
    cout << "Cual es tu nombre? "; cin >> nombreIn;
    cout << "Cual es tu apellido? "; cin >> apellidoIn;
    cout << "Cual es tu correo electronico? "; cin >> correoIn;
    cout << "\nExcelente, ahora con tu metodo de pago (igualmente deberas introducir estos datos para hacer tu pedido)" << endl;
    cout << "Que tipo de tarjeta es (VISA, AMEX, MASTERCARD)? "; cin >> tipoIn;
    cout << "Cual es el numero de tarjeta? "; cin >> numeroIn;
    cout << "Cual es el cvv de la tarjeta? "; cin >> cvvIn;
    cout << "Cual es la fecha de vencimiento de la tarjeta? "; cin >> caducidadIn;

    //Constructor
    InfoPersonal UsuarioX{nombreIn, apellidoIn, correoIn,{tipoIn, numeroIn, cvvIn, caducidadIn}};

    while(dime != 5){ //Loop para el menu de la funcion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Ver mis Datos Personales" << endl;
        cout << "2- Ver mi Metodo de Pago" << endl;
        cout << "3- Cambiar mi Nombre de Usuario" << endl;
        cout << "4- Cambiar mi Numero de Tarjeta" << endl;
        cout << "5- Regresar" << endl;
        cout << "\nOpcion: "; cin >> dime;

        //Llama a los metodos
        if (dime == 1){
            UsuarioX.verDatos();
            }
        else if (dime == 2){
            UsuarioX.verPago();
            }
        else if (dime == 3){
            UsuarioX.cambiarNombre();
            }
        else if (dime == 4){
            UsuarioX.cambiarNumeroTarjeta();
            }     
    }
}    
 
void medicamentos(){ //Clase Individual de Joseph Shakalo A01784107
    //Variables de la funcion
    int edad {0};
    int cual {0};
    int que {0};
    
    //Un input para el constructor
    cout << "\nCual es tu edad? "; cin >> edad;

    //Constructores
    Medicamentos tylenol{"Tylenol", 159.99, 401, "Ayuda al dolor de cabeza y dolores generales", edad, {"PfizerPcr", 1499.99, 132, 2}};
    Medicamentos vitaminas{"Multicentrum", 199.99, 222, "Vitaminas para estar a la defensa del Covid-19", edad, {"PfizerPcr", 1499.99, 132, 2}};
    Medicamentos vacuna{"Vacuna Pfizer", 3499.99, 32, "Doble dosis para estar protegido ante el Covid-19", edad, {"PfizerPcr", 1499.99, 132, 2}};

    while(cual != 4){ //Loop para el menu de la funcion
        cout << "\nQue medicamento quieres?\n" << endl;
        cout << "1- Tylenol" << endl;
        cout << "2- Multicentrum" << endl;
        cout << "3- Vacuna Pfizer" << endl;
        cout << "4- Regresar" << endl;
        cout << "\nOpcion: "; cin >> cual;

    switch (cual){
    case 1: //Para uno de los productos de medicamentos
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales Tylenol" << endl;
        cout << "2- Datos Generales Prueba Covid" << endl;
        cout << "3- Comprar Tylenol" << endl;
        cout << "4- Comprar Prueba de Covid " << endl;
        cout << "5- Precio" << endl;
        cout << "6- Riesgo Covid" << endl;
        cout << "7- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        if (que == 1){ //Lama a los metodos
            tylenol.imprimeMedicamentos();
            }
        else if(que == 2){
            tylenol.imprimePrueba();
        }
        else if (que == 3){
            tylenol.vendeMedicamento();
            }
        else if (que == 4){
            tylenol.vendePrueba();
            }
        else if (que == 5){
            tylenol.precioIVA();
            }   
        else if (que == 6){
            tylenol.riesgoCovid();
        }
        break;
    
    case 2: //Para otro de los productos de medicamentos
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales Vitaminas" << endl;
        cout << "2- Datos Generales Prueba Covid" << endl;
        cout << "3- Comprar Vitaminas" << endl;
        cout << "4- Comprar Prueba de Covid " << endl;
        cout << "5- Precio" << endl;
        cout << "6- Riesgo Covid" << endl;
        cout << "7- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        if (que == 1){ //Lama a los metodos
            vitaminas.imprimeMedicamentos();
            }
        else if(que == 2){
            vitaminas.imprimePrueba();
        }
        else if (que == 3){
            vitaminas.vendeMedicamento();
            }
        else if (que == 4){
            vitaminas.vendePrueba();
            }
        else if (que == 5){
            vitaminas.precioIVA();
            }   
        else if (que == 6){
            vitaminas.riesgoCovid();
        }
        break;

    case 3: //Para uno de los productos de proteccion personal
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Datos Generales Vacuna" << endl;
        cout << "2- Datos Generales Prueba Covid" << endl;
        cout << "3- Comprar Vacuna" << endl;
        cout << "4- Comprar Prueba Covid" << endl;
        cout << "5- Precio" << endl;
        cout << "6- Efectividad Vacuna" << endl;
        cout << "7- Riesgo Covid" << endl;
        cout << "8- Regresar" << endl;
        cout << "\nOpcion: "; cin >> que;
    
        if (que == 1){ //Llama a los metodos
            vacuna.imprimeMedicamentos();
            }
        else if(que == 2){
            vacuna.imprimePrueba();
        }
        else if (que == 3){
            vacuna.vendeMedicamento();
            }
        else if (que == 4){
            vitaminas.vendePrueba();
            }
        else if (que == 5){
            vacuna.precioIVA();
            }   
        else if (que == 6){
            vacuna.efectividadVacuna();
        }  
        else if (que == 7){
            vacuna.riesgoCovid();
        }
        break;
        }
    }
}

void hacer_pedido(){ //Clase Individual de Gabriel Edid A01782146
    //Variables de la funcion
    int dime = 0;
    string ciudadIn = "N";
    string calleIn = "N";
    int postalIn = 0;
    string tipoIn = "N";
    int numeroIn = 0;
    int cvvIn = 0;
    string caducidadIn = "N";

    //Inputs para crear el constructor
    cout << "\n*** Bienvenido a Hacer Pedido ***" << endl;
    cout << "\nComencemos recopilando tus datos de envio" << endl;
    cin.ignore(32767,'\n');
    cout << "Cual es tu ciudad? "; getline(cin, ciudadIn); 
    cin.ignore(32767,'\n');
    cout << "Cual es tu calle? "; getline(cin, calleIn);
    cout << "Cual es tu codigo postal? "; cin >> postalIn;
    cout << "\nExcelente, ahora con tu metodo de pago" << endl;
    cout << "Que tipo de tarjeta es (VISA, AMEX, MASTERCARD)? "; cin >> tipoIn;
    cin.ignore(32767,'\n');
    cout << "Cual es el numero de tarjeta? "; cin >> numeroIn;
    cout << "Cual es el cvv de la tarjeta? "; cin >> cvvIn; 
    cin.ignore(32767,'\n');
    cout << "Cual es la fecha de vencimiento de la tarjeta? "; getline(cin, caducidadIn);

    //Constructor
    HacerPedido PedidoX{ciudadIn, calleIn, postalIn,{tipoIn, numeroIn, cvvIn, caducidadIn}};

    while(dime != 7){ //Loop para el menu de la funcion
        cout << "\nQue quieres hacer/saber?\n" << endl;
        cout << "1- Ver mi Direccion de Envio" << endl;
        cout << "2- Ver mi Metodo de Pago" << endl;
        cout << "3- Cambiar la Ciudad de Envio" << endl;
        cout << "4- Cambiar la Calle de Envio" << endl;
        cout << "5- Cambiar el Codigo Postal de Envio" << endl;
        cout << "6- Cambiar mi Numero de Tarjeta" << endl;
        cout << "7- Confirmar Pedido" << endl;
        cout << "\nOpcion: "; cin >> dime;
        
        if (dime == 1){ //Llama a los metodos
            PedidoX.imprimeDireccionEnvio();
            }
        else if (dime == 2){
            PedidoX.verPago();
            }
        else if (dime == 3){
            PedidoX.cambiarCiudad();
            }
        else if (dime == 4){
            PedidoX.cambiarCalle();
            }
        else if (dime == 5){
            PedidoX.cambiarPostal();
            }
        else if (dime == 6){
            PedidoX.cambiarNumeroTarjeta();
        }
        else if (dime == 7){
            cout << "\n*** Su Pedido ha sido confirmado! Llegara a la comodidad de su hogar en 3 a 5 dias habiles ***" << endl;
        }     
    }
}    


int main(){ 
    while(opcion != 7){ //Loop para el menu principal
        cout << "\n*** Bienvenido a la Mejor Tienda en Linea de Productos y Seguridad para el Covid-19 ***\n" << endl;
        cout << "1- Pruebas de Covid-19" << endl;
        cout << "2- Productos de Sanitizacion" << endl;
        cout << "3- Productos de Proteccion Personal" << endl;
        cout << "4- Informacion Covid-19, Medicamentos y Vacunas (Clase Individual de Joseph Shakalo A01784107)" << endl;
        cout << "5- Hacer Pedido (Clase Individual de Gabriel Edid A01782146)" << endl;
        cout << "6- Datos de Usuario" << endl;
        cout << "7- Salir" << endl;
        cout << "\nPor favor escoge una opcion de producto o que quieres hacer: "; cin>> opcion;

        switch(opcion) { //Llama a las funciones dependiendo el producto/necesidad
            case 1:
                pruebas_covid();
                break;
            case 2:
                productos_sanitizacion();
                break;
            case 3:
                proteccion_personal();
                break;
            case 4:
                medicamentos(); //Clase Individual de Joseph Shakalo A01784107
                break;
            case 5:
                hacer_pedido(); //Clase Individual de Gabriel Edid A01782146
                break;
            case 6:
                datos_usuario();
                break;
            }
        }
    }
    

