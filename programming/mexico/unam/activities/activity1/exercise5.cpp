#include <iostream>
#include <math.h>
using namespace std;

bool esTrianguloRectangulo(double c1, double c2, double h);

int main() {
    double cateto1, cateto2, hipotenusa;
    cout<<"Digita el cateto1: ";
    cin>>cateto1;
    cout<<"Digita el cateto2: ";
    cin>>cateto2;
    cout<<"Digita la hipotenusa: ";
    cin>>hipotenusa;

    if(esTrianguloRectangulo(cateto1, cateto2, hipotenusa)) cout<<"Los valores ingresados corresponde a un triangulo rectangulo :)";
    else cout<<"Los valores ingresados no corresponde a un triangulo rectangulo :(";
    return 0;
}

bool esTrianguloRectangulo(double c1, double c2, double h) {
    return pow(h, 2) == pow(c1, 2) + pow(c2, 2);
}


