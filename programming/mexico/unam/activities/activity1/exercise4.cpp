#include <iostream>
#include <math.h>
using namespace std;

double resolverEcuacionCuadratica(double a, double b, double c, double d);

int main() {
    double a, b, c, x01, v1, a1, x02, v2, a2, discriminante, tiempo, posicion;
    cout<<"Digita el valor de x01: ";
    cin>>x01;
    cout<<"Digita el valor de v1: ";
    cin>>v1;
    cout<<"Digita el valor de a1: ";
    cin>>a1;
    cout<<"Digita el valor de x02: ";
    cin>>x02;
    cout<<"Digita el valor de v2: ";
    cin>>v2;
    cout<<"Digita el valor de a2: ";
    cin>>a2;

    a = 0.5 * (a1 - a2);
    b = v1 - v2;
    c = x01 - x02;
    discriminante = pow(b, 2) - 4 * a * c;
    
    if (discriminante < 0) cout<<"Los vehiculos no coinciden en ninngun instante de tiempo t ni en ninguna posicion x"<<endl; 
    else {
        cout<<"Los vehiculos se encuantran en el tiempo t = "<<tiempo<<" y en la posicion x = "<<posicion<<endl;
        tiempo = resolverEcuacionCuadratica(a, b, c, discriminante);
        posicion = x01 + v1 * tiempo + 0.5 * a1 * pow(tiempo, 2);
    }
    return 0;
}

double resolverEcuacionCuadratica(double a, double b, double c, double d) {
    double t1, t2;
    
    t1 = (-1 * b + sqrt(d)) / 2 * a;
    t2 = (-1 * b - sqrt(d)) / 2 * a;
    
    if(0 < d){
        if (0 <= t1) return t1;
        else if(0 <= t2) return t2;
    }
    else if(d == 0) {
        if (0 <= t1) return t1;
        else if(0 <= t2) return t2;
    }
}
