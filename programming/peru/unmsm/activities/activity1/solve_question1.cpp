#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;

int main(){
    double velocidad, largo, radio, tiempo,longitudPista, tiempoDescanso, tiempoTotal, velocidadDescanso;
    cout<<"Digita los siguientes datos:"<<endl;
    cout<<"Velocidad (m/s): ";
    cin>>velocidad;
    cout<<"Largo (mts): ";
    cin>>largo;
    cout<<"Radio (mts): ";
    cin>>radio;

    longitudPista = 2 * (largo + PI * radio);
    tiempo = (2 * longitudPista) / velocidad;
    velocidadDescanso = 50/6;
    tiempoDescanso = (2 * longitudPista) / velocidadDescanso;
    cout<<longitudPista<<" "<<tiempo<<" "<<tiempoDescanso<<endl;
    tiempoTotal = tiempo + tiempoDescanso;
    cout<<"El tiempo que gasta el atleta es de: "<<tiempoTotal<<" segundos";
    return 0;
}

