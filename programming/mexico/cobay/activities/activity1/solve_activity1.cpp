#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <locale.h>
#define USUARIO "dafcode"
#define PASSWORD "DAF123456"
using namespace std;

bool validarUsuario();
bool validarPassword();
void solucionProblema();

int main() {
	setlocale(LC_CTYPE, "spanish");
    int intentos = 2;
    cout<<"Hola bienvenido, por favor digita tus credenciales, recuerda, tienes 3 intentos"<<endl;
    do {
        bool validacionUsuario = validarUsuario();
        bool validacionPassword = validarPassword();

        if(validacionUsuario && validacionPassword) {
            cout<<"*****HOLA "<<USUARIO<<" BIENVENIDO*****"<<endl;
            solucionProblema();
            break;
        }
        else if(validacionUsuario) cout<<"*****ERROR, CONTRASEÑA INCORRECTA*****\nTienes 3 intentos de los cuales te quedan "<<intentos<<endl;
        else if(validacionPassword) cout<<"*****ERROR, USUARIO INCORRECTO*****\nTienes 3 intentos de los cuales te quedan "<<intentos<<endl;
        else cout<<"*****ERROR, USUARIO Y CONTRASEÑA INCORRECTOS*****\nTienes 3 intentos de los cuales te quedan "<<intentos<<endl;
        if(intentos == 0) cout<<"Gracias por utilizar el sistema, adios :)";
    }while(intentos--);
    return 0;
}

bool validarUsuario() {
    string usuario;
    cout<<"Digita tu usuario: ";
    cin>>usuario;
    return usuario == USUARIO;
}

bool validarPassword() {
    string password;
    cout<<"Digita tu contraseña: ";
    cin>>password;
    return password == PASSWORD;
}

void solucionProblema() {
    int paquetesPapel;
    float costoPaquetePapel, costoPapelMes, costoPapelAnual, impuestoAnual;
    
    cout<<"Digite la cantidad de paquetes de papel de baño que se consumen en casa al mes: ";
    cin>>paquetesPapel;
    cout<<"Digite el costo de cada paquete de papel de baño: ";
    cin>>costoPaquetePapel;

    cout<<"*****CALCULOS y RESULTADOS*****"<<endl;
    costoPapelMes = paquetesPapel*costoPaquetePapel;
    cout<<"Se paga al mes por consumo de papel de baño: "<<costoPapelMes<<endl;
    costoPapelAnual = costoPapelMes * 12;
    cout<<"Se gasta anualmente por consumo papel de baño: "<<costoPapelAnual<<endl;
    impuestoAnual = costoPapelAnual * 0.16;
    cout<<"El impuesto anual sobre el papel de baño consumido es: "<<paquetesPapel*costoPaquetePapel*12*0.16<<endl;
    impuestoAnual > 100 ? cout<<"El gobierno se ha excedido en impuestos" : cout<<"Gobierno justo";
}
