#include <iostream>
using namespace std;

float sumar(int n1, int n2);
float restar(float n1, float n2);
float multiplicar(float n1, float n2);
float dividir(float n1, float n2);

int main(){
    char simbolo;
    float num1, num2;
    int opc;

    cout<<"Digita un numero: ";
    cin>>num1;
    cout<<"Digita otro numero: ";
    cin>>num2;
    cout<<"Digita el simbolo de la operacion deseas realizar (+, -, *, /)"<<endl;
    cin>>simbolo;
    
    opc = int(simbolo);

    switch (opc) {
        case 43:
            cout<<"La suma de "<<num1<<" y "<<num2<<" es: "<<sumar(num1, num2)<<endl;
            break;
        case 45:
            cout<<"La resta de "<<num1<<" y "<<num2<<" es: "<<restar(num1, num2)<<endl;
            break;
        case 42:
            cout<<"El producto de "<<num1<<" y "<<num2<<" es: "<<multiplicar(num1, num2)<<endl;
            break;
        case 47:
            cout<<"El cociente de "<<num1<<" y "<<num2<<" es: "<<dividir(num1, num2)<<endl;
            break;
        default:
            cout<<"opcion invalida"<<endl;
            break;
    } 
    return 0;
}

float sumar(int n1, int n2) {
    return n1 + n2;
}

float restar(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2) {
    return n1 * n2;
}

float dividir(float n1, float n2) {
    return n1 / n2;
}


