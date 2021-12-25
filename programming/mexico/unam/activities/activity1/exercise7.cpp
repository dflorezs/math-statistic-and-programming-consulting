#include <iostream>
using namespace std;

void cacularBecaMensual(int e, float p);

int main() {
    int edad;
    float promedio;
    
    cout<<"Digita los siguientes datos:\nEdad alumno: ";
    cin>>edad;
    cout<<"Promedio alumno: "<<endl;
    cin>>promedio;
    
    cacularBecaMensual(edad, promedio);
    return 0;
}

void cacularBecaMensual(int e, float p) {
    if(e > 18) {
        if(9 <= p) cout<<"El valor de la beca es de: $2000.00"<<endl;
        else if(7.5 <= p && p < 9) cout<<"EL valor de la beca es de: $1000.00"<<endl;
        else if(6.0 <= p && p < 7.5) cout<<"El Valor de la beca es de: $500.00"<<endl;
        else cout<<"No te desanimes, sigue estudiando con juicio y lo lograras :)"<<endl;
    }
    else {
        if(9 <= p) cout<<"El valor de la beca es de: $3000.00"<<endl;
        else if(8 <= p && p < 9) cout<<"EL valor de la beca es de: $2000.00"<<endl;
        else if(6 <= p && p < 8) cout<<"El Valor de la beca es de: $100.00"<<endl;
        else cout<<"No te desanimes, sigue estudiando con juicio y lo lograras :)"<<endl;
    }
}
