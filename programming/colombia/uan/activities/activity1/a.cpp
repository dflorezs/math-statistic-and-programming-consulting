#include <iostream>
#include <math.h>
using namespace std;

void resolverEcuacionCuadratica(double, double, double);

int main() {
    double a, b, c;
    cout << "Ingresa el valor de a: ";
    cin >>a;
    cout << "Ingresa el valor de b: ";
    cin >>b;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    resolverEcuacionCuadratica(a, b, c);
    return 0;
}

void resolverEcuacionCuadratica(double a, double b, double c) {
    if(a == 0) 
        cout << "Valor no valido, a tiene que se diferente de cero";
    else {
        double x1, x2, d;
        d = pow(b, 2*1.0) - 4*a*c;
        x1 = (-1 * b + sqrt(d)) / 2 * a;
        x2 = (-1 * b - sqrt(d)) / 2 * a;

        if(d < 0) cout << "La ecuacion no tiene soluciones reales";
        else if(d == 0) cout << "La ecuacion tiene dos soluciones iguales x = " << x1;
        else cout << "La ecuciocn tiene dos soluciones reales x1 = " << x1 << " y x2 = " << x2;
    }
}