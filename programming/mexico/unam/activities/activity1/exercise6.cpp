#include <iostream>
using namespace std;

void cobrarParqueadero(int horas);

int main() {
    int horas;
    
    cout<<"Digita la cantidad de horas: ";
    cin>>horas;

    cobrarParqueadero(horas);
    return 0;
}

void cobrarParqueadero(int horas) {
    float cobro;
    if(0 < horas && horas <= 2) cobro = 5.00 * horas;
    else if(2 < horas && horas <= 5) cobro = 4.00 * horas;
    else if(5 < horas && horas <= 10) cobro = 3.00 * horas;
    else cobro = 2.00 * horas;
    cout<<"La tarifa a cobrar es de: "<<cobro<<endl;
}
