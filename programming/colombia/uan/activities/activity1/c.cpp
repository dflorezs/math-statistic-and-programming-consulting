#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

void esTianguloRectangulo(int, int, int);

int main() {
    int l1, l2, l3;
    do{
        cout << "lado1: ";
        cin >> l1;
        cout << "lado2: ";
        cin >> l2;
        cout << "lado3: ";
        cin >> l3;
        system("cls");
        
        if (l1 > 0 && l2 > 0 && l3 > 0)
            esTianguloRectangulo(l1, l2, l3);
        else 
            cout << "Los lados del triangulo tienen que ser enteros positvos" << endl;
    }while(l1 <= 0 || l2 <= 0 || l3 <= 0);
    return 0;
}
/*
void esTianguloRectangulo(int l1, int l2, int l3) {
    if (l1 > l2 && l1 > l3) 
        if (l1*l1 == l2*l2 + l3*l3)
            cout << "Los tres lados ingresados si forman un triangulo rectangulo" << endl;
        else 
            cout << "Los tres lados ingresados no forman un triangulo rectangulo" << endl;
    else if (l2 > l3)
        if (l2*l2 == l1*l1 + l3*l3)
            cout << "Los tres lados ingresados si forman un triangulo rectangulo" << endl;
        else
            cout << "Los tres lados ingresados no forman un triangulo rectangulo" << endl;    
    else if (true)
        if (l3*l3 == l1*l1 + l2*l2)
            cout << "Los tres lados ingresados si forman un triangulo rectangulo" << endl;
        else
            cout << "Los tres lados ingresados no forman un triangulo rectangulo" << endl;
    else
        cout << "Los tres lados ingresados no forman un triangulo rectangulo" << endl;
}*/

void esTianguloRectangulo(int l1, int l2, int l3) {
    vector <int> lados = {l1, l2, l3};
    sort(lados.begin(), lados.end());
    if (lados[2]*lados[2] == lados[0]*lados[0] + lados[1]*lados[1])
        cout << "Los tres lados ingresados si forman un triangulo rectangulo" << endl;
    else
        cout << "Los tres lados ingresados no forman un triangulo rectangulo" << endl;
}


