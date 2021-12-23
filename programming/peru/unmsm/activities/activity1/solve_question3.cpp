#include<iostream>
using namespace std;

int main(){
    double montoCompra, montoFactura, montoInteres, nuevoMontoFactura,montoCuotaInicial,montoLetra;
    int financiamiento;
    cout<<"¿De cuanto fue el monto de la compra?\n";
    cin>>montoCompra;
    cout<<"*****TIPOS DE FINANCIAMIENTO*****\n1. INTERES: 5%   CUOTA INICIAL: 60%    NUMERO LETRAS: 2\n2. INTERES: 10%   CUOTA INICIAL: 50%    NUMERO LETRAS: 4\n3. INTERES: 15%   CUOTA INICIAL: 35%    NUMERO LETRAS: 6"<<endl;
    cin>>financiamiento;
    
    switch (financiamiento){
    case 1:
        montoFactura = montoCompra + (montoCompra*10)/100;
        montoInteres = (montoCompra * 5)/100;
        nuevoMontoFactura = montoFactura + montoInteres;
        montoCuotaInicial = (montoCompra * 60)/100;
        montoLetra = (nuevoMontoFactura - montoCuotaInicial)/2;
        cout<<"*****INFORMACION*****"<<endl;
        cout<<"Monto factura: "<<montoFactura<<endl;
        cout<<"Monto intereses: "<<montoInteres<<endl;
        cout<<"Nuevo monto factura: "<<nuevoMontoFactura<<endl;
        cout<<"Monto cuota inicial: "<<montoCuotaInicial<<endl;
        cout<<"Monto letra por pagar: "<<montoLetra<<endl;
        break;
       
    case 2:
        montoFactura = montoCompra + (montoCompra*10)/100;
        montoInteres = (montoCompra * 10)/100;
        nuevoMontoFactura = montoFactura + montoInteres;
        montoCuotaInicial = (montoCompra * 50)/100;
        montoLetra = (nuevoMontoFactura - montoCuotaInicial)/4;
        cout<<"*****INFORMACION*****"<<endl;
        cout<<"Monto factura: "<<montoFactura<<endl;
        cout<<"Monto intereses: "<<montoInteres<<endl;
        cout<<"Nuevo monto factura: "<<nuevoMontoFactura<<endl;
        cout<<"Monto cuota inicial: "<<montoCuotaInicial<<endl;
        cout<<"Monto letra por pagar: "<<montoLetra<<endl;
        break;
    case 3:
        montoFactura = montoCompra + (montoCompra*10)/100;
        montoInteres = (montoCompra * 15)/100;
        nuevoMontoFactura = montoFactura + montoInteres;
        montoCuotaInicial = (montoCompra * 35)/100;
        montoLetra = (nuevoMontoFactura - montoCuotaInicial)/6;
        cout<<"*****INFORMACION*****"<<endl;
        cout<<"Monto factura: "<<montoFactura<<endl;
        cout<<"Monto intereses: "<<montoInteres<<endl;
        cout<<"Nuevo monto factura: "<<nuevoMontoFactura<<endl;
        cout<<"Monto cuota inicial: "<<montoCuotaInicial<<endl;
        cout<<"Monto letra por pagar: "<<montoLetra<<endl;
        break;
        cout<<"opcion invalida"<<endl;
    default:
        break;
    }
    return 0;
}