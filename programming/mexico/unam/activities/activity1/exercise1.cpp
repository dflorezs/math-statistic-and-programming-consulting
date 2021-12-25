#include <iostream>
using namespace std;

void convertirKelvin();
void convertirCelsius();
void convertirFahrenheit();

int main(){
    int opc;
    
    do {
        cout<<"*****MENU PRINCIPAL*****\nQue tipo de convesion deseas realizar?\n1. De kelvin a celsius y fahrenheit\n2. De celsius a kelvin y fahrenheit\n3. De fahrenheit a celsius y kelvin\n4. Salir"<<endl;
        cin>>opc;

        switch (opc) {
        case 1:
            convertirKelvin();
            return 0;
        case 2:
            convertirCelsius();
            return 0;
        case 3:
            convertirFahrenheit();
            return 0;
        case 4:
            return 0;
        default:
            cout<<"opcion invalida"<<endl;
            break;
        } 
    }while (opc != 4);
    return 0;
}

void convertirKelvin() {
    float k, c, f;
    
    cout<<"Digita la temperatura en kelvin: ";
    cin>>k;

    c = k - 273.15;
    f = 9 * (k - 273.15) / 5 + 32;
    
    cout<<"La temperatura en celsius es: "<<c<<"\nLa temperatura en fahrenheit es: "<<f<<endl;
}

void convertirCelsius() {
    float k, c, f;
    
    cout<<"Digita la temperatura en celsius: ";
    cin>>c;

    k = c + 273.15;
    f = 9 * c / 5 + 32;
    
    cout<<"La temperatura en kelvin es: "<<k<<"\nLa temperatura en fahrenheit es: "<<f<<endl;
}

void convertirFahrenheit() {
    float k, c, f;
    
    cout<<"Digita la temperatura en Fahrenheit: ";
    cin>>f;

    c = 5 * (f - 32) / 9;
    k = 5 * (f - 32) / 9 + 273.15;
    
    cout<<"La temperatura en celsius es: "<<c<<"\nLa temperatura en kelvin es: "<<k<<endl;
}

