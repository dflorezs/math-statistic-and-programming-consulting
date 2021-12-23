#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){   
    int opc, de = 0, dc = 0, nr = 0;
    char letra;
    string nombre;
    double saldoInicial, cantidad, nuevoSaldo, acumuladoRetiros = 0;
    vector<double> vectorRetiros;
    vector<double> vectorDepositos;

    cout<<"Ingrese los siguientes datos:"<<endl;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Saldo: ";
    cin>>saldoInicial;
    nuevoSaldo = saldoInicial;

    do{
        cout<<"*****MENU DE OPCIONES*****\nDeposito (D)\nRetiro (R)\nFin (F)"<<endl;
        cin>>letra; 

        switch (letra){
            case 68:
                cout<<"Efectivo (1)\ncheque (2)\n"<<endl;
                cin>>opc;
                if (opc == 1){
                    cout<<"Digita la cantidad: ";
                    cin>>cantidad;
                    vectorDepositos.push_back(cantidad);
                    nuevoSaldo = saldoInicial + cantidad;
                    cout<<"Tu nuevo saldo es: "<<nuevoSaldo<<endl;
                    de++;
                }

                else if(opc == 2){
                    cout<<"Digita la cantidad: ";
                    cin>>cantidad;
                    cantidad = (cantidad*99)/100;
                    vectorDepositos.push_back(cantidad);
                    nuevoSaldo = saldoInicial + cantidad;
                    cout<<"Tu nuevo saldo es: "<<nuevoSaldo<<endl;
                    dc++;
                }
                break;

            case 82:
                cout<<"Digita la cantidad:";
                cin>>cantidad;
                
                if (cantidad <= nuevoSaldo){
                    vectorRetiros.push_back(cantidad);
                    nuevoSaldo -= cantidad;
                    acumuladoRetiros += cantidad;
                    cout<<"Tu nuevo saldo es: "<<nuevoSaldo<<endl;
                    nr++; 
                } 

                else {
                    cout<<"Sobregiro"<<endl; 
                }
                break;

            case 70:
            sort(vectorRetiros.begin(), vectorRetiros.end());
            sort(vectorDepositos.begin(), vectorDepositos.end());
            cout<<"Nombre: "<<nombre<<", "<<"Saldo inicial: "<<saldoInicial<<endl;
            cout<<"Saldo final; "<<nuevoSaldo<<endl;
            cout<<"Numero de depositos en efectivo: "<<de<<" con cheque: "<<dc<<endl;
            cout<<"Monto promedio de retiros: "<<acumuladoRetiros/nr<<endl;
            cout<<"Monto minimo depositado: "<<vectorDepositos[0]<<" monto maximo retirado: "<<vectorRetiros[vectorRetiros.size()-1];
            break; 

            default:
                cout<<"Opcion invalida";
                break;
        }   
    }while(letra != 'F');
    return 0;  
}
    
