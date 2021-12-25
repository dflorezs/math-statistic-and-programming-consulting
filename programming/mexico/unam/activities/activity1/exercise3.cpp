#include <iostream>
#include <math.h>
using namespace std;

void resolverEcuacionCuadratica(double a, double b, double c, double d);

int main() {
    double a, b, c, discriminante;
    cout<<"Digita el valor de a, (recuerda, a debe ser distinto de 0): ";
    cin>>a;
    cout<<"Digita el valor de b: ";
    cin>>b;
    cout<<"Digita el valor de c: ";
    cin>>c;

    discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante > 0) resolverEcuacionCuadratica(a, b, c, discriminante);
    else if (discriminante == 0) resolverEcuacionCuadratica(a, b, c, discriminante);
    else cout<<"La ecuacion cuadratica con coeficicientes "<<a<<" "<<b<<" "<<c<<" no tiene soluciones reales, sus raices son complejas conjugadas"<<endl;
    return 0;
}

void resolverEcuacionCuadratica(double a, double b, double c, double d) {
    double x1, x2;
    x1 = (-1 * b + sqrt(d)) / 2 * a;
    x2 = (-1 * b - sqrt(d)) / 2 * a;

    if(d > 0) cout<<"La ecuacion tiene 2 soluciones reales x1 = "<<x1<<" y x2 = "<<x2<<endl;
    else if(d == 0) cout<<"La ecuacion tiene  soluiones repetidas x = "<<x1<<endl;
}
