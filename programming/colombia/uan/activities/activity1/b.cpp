#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main() {
    int opc, matricula, semestre;
    float promedio;
    string carrera;
    char query[3];

    do{
        system("cls");
        cout << "Ingresa la siguiente informacion del alumno" << endl;
        cout << "Matricula: ";
        cin >> matricula;
        cout << "Carrera: ";
        cin.ignore();
        getline(cin, carrera);
        cout << "Semestre: ";
        cin >> semestre;
        cout << "Promedio: ";
        cin >> promedio;
        system("cls");  

        cout << "Seleccione la facultad a la que pertenece su carrera\n1.Economia\n2.Computacion\n3.Administracion\n4.Contabilidad\n5.Salir" <<endl;

        cin >> opc;
        system("cls");
        
        switch (opc) {
        case 1:
            if (6 <= semestre && promedio == 8.8) 
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: Aceptado" << endl;
            else 
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: No aceptado" << endl;
            
            cout << "Digite SI para realizar otra consulta, en caso contrario digite NO" << endl;
            cin >> query;

            if (query[0] == 'S') 
                continue;
            else 
                opc = 5;
            break;
        case 2:
             if (6 < semestre && 8.5 < promedio)
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: Aceptado" << endl;
            else 
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: No aceptado" << endl;
            
            cout << "Digite SI para realizar otra consulta, en caso contrario digite NO" << endl;
            cin >> query;

            if (query[0] == 'S') 
                continue;
            else 
                opc = 5;
            break;
        case 3:
             if (5 < semestre && promedio == 8.5)
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: Aceptado" << endl;
            else 
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: No aceptado" << endl;
            
            cout << "Digite SI para realizar otra consulta, en caso contrario digite NO" << endl;
            cin >> query;

            if (query[0] == 'S') 
                continue;
            else 
                opc = 5;
            break;
        case 4:
            if (6 < semestre && 8.5 < promedio)
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: Aceptado" << endl;
            else 
                cout << "Matricula: " << matricula << "\nCarrera: " << carrera << "\nEstado: No aceptado" << endl;
            
            cout << "Digite SI para realizar otra consulta, en caso contrario digite NO" << endl;
            cin >> query;

            if (query[0] == 'S') 
                continue;
            else 
                opc = 5;
            break;
        case 5:
            break;
        default:
            cout << "Opcion invalida" <<endl;
            break;
        }
    }while(opc != 5);
    return 0; 
}