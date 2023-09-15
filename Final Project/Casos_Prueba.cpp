//Programa de casos de prueba de todas las clases
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

int main(){

    //Clase PruebaCovid
    cout << "\n*** Casos de Prueba Clase PruebaCovid ***" << endl;
    //Constructor
    PruebaCovid pruebapcr {"PfizerPcr", 1499.99, 132, 2};
    //Metodos
    pruebapcr.imprimePruebaCovid();
    pruebapcr.vende();
    pruebapcr.efectividad();
    pruebapcr.precioIVA();
    //Getters y Setters
    cout << "La marca es: " + pruebapcr.getMarca() << endl;
    pruebapcr.setCantidad(28);
    cout << "La cantidad es: " + to_string(pruebapcr.getCantidad()) << endl;

    //Clase ProductoSanitizacion
    cout << "\n*** Casos de Prueba Clase ProductoSanitizacion ***" << endl;
    //Constructor
    ProductoSanitizacion lysol{"Lysol", 119.99, 51, "10x10x30cm 350gr"};
    //Metodos
    lysol.informacion();
    lysol.vende();
    lysol.precioIVA();
    //Getters y Setters
    cout << "El tamaño es: " + lysol.getTamano() << endl;
    lysol.setStock(1111);
    cout << "El stock es: " + to_string(lysol.getStock()) << endl;

    //Clase ProteccionPersonal
    cout << "\n*** Casos de Prueba Clase ProteccionPersonal ***" << endl;
    //Constructor
    ProteccionPersonal cubrebocas{"Cubrebocas KF94", 124.99, 987, 50};
    //Metodos
    cubrebocas.imprimeProteccionPersonal();
    cubrebocas.vende();
    cubrebocas.precioIVA();
    //Getters y Setters
    cout << "El stock es: " + to_string(cubrebocas.getStock()) << endl;
    cubrebocas.setNombre("Nuevo Cubrebocas!!!");
    cout << "El nombre es: " + cubrebocas.getNombre() << endl;

    //Clase InfoPersonal
    cout << "\n*** Casos de Prueba Clase InfoPersonal ***" << endl;
    //Constructor
    InfoPersonal UsuarioX{"Juan", "Perez", "juanperez@gmail.com",{"Amex", 123456789, 321, "07/2023"}};
    //Metodos
    UsuarioX.verDatos();
    UsuarioX.verPago();
    UsuarioX.cambiarNombre();
    UsuarioX.cambiarNumeroTarjeta();
    //Getters y Setters
    cout << "El Apellido es: " + UsuarioX.getApellido() << endl;
    UsuarioX.setCorreo("mimail@hotmail.com");
    cout << "El mail es: " + UsuarioX.getCorreo() << endl;

    //Clase TarjetaCredito
    cout << "\n*** Casos de Prueba Clase TarjetaCredito ***" << endl;
    //Constructor
    TarjetaCredito TarjetaX{"Visa", 987654321, 789, "11/2030"};
    //Metodos
    TarjetaX.imprimeTarjetaCredito();
    TarjetaX.cambiarTipo();
    TarjetaX.cambiarNumero();
    TarjetaX.cambiarCvv();
    TarjetaX.cambiarCaducidad ();
    //Getters y Setters
    cout << "El cvv es: " + to_string(TarjetaX.getCvv()) << endl;
    TarjetaX.setCaducidad("08/2028");
    cout << "La caducidad es: " + TarjetaX.getCaducidad() << endl;
    
    //Clase Medicamentos
    cout << "\n*** Casos de Prueba Clase Medicamentos (Clase Individual de Joseph Shakalo A01784107) ***" << endl; //Clase Individual de Joseph Shakalo A01784107
    //Constructor
    Medicamentos vacuna{"Vacuna Pfizer", 3499.99, 32, "Doble dosis para estar protegido ante el Covid-19", 19, {"PfizerPcr", 1499.99, 132, 2}};
    //Metodos
    vacuna.imprimeMedicamentos();
    vacuna.imprimePrueba();
    vacuna.vendeMedicamento();
    vacuna.vendePrueba();
    vacuna.precioIVA();
    vacuna.efectividadVacuna();
    vacuna.riesgoCovid();
    //Getters y Setters
    cout << "La edad es: " + to_string(vacuna.getEdad()) << endl;
    vacuna.setStock(2);
    cout << "El stock es: " + to_string(vacuna.getStock()) << endl;

    //Clase HacerPedido
    cout << "\n*** Casos de Prueba Clase HacerPedido (Clase Individual de Gabriel Edid A01782146) ***" << endl; //Clase Individual de Gabriel Edid A01782146
    //Constructor
    HacerPedido PedidoX{"Ciudad de Mexico", "Calle de Mi Casa #28", 05120,{"MasterCard", 28052003, 101, "04/2031"}};
    PedidoX.imprimeDireccionEnvio();
    PedidoX.verPago();
    PedidoX.cambiarCiudad();
    PedidoX.cambiarCalle();
    PedidoX.cambiarPostal();
    PedidoX.cambiarNumeroTarjeta();
    //Getters y Setters
    cout << "La ciudad es: " + PedidoX.getCalle() << endl;
    PedidoX.setPostal(123456);
    cout << "El codigo postal es: " + to_string(PedidoX.getPostal()) << endl;

}
