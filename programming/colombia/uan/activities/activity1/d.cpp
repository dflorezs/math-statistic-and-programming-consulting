#include <iostream>
#include <stdlib.h>
using namespace std;

void pagoGerentes();
void pagoTrabajadoresPorHora();
void pagoTrabajadoresPorComision();
void pagoContratistas();

int main() {
    int code;    
    do{
        cout << "*****Nomina empleados*****" <<endl;
        cout << "1. Gerentes\n2. Trabajadores por hora\n3. Trabajadores a comision\n4. Contratistas\n5. Salir" << endl;
        cin >> code;
        system("clear");
        

        switch (code) {
        case 1:
            pagoGerentes();
            break;
        case 2:
            pagoTrabajadoresPorHora();
            break;
        case 3:
            pagoTrabajadoresPorComision();
            break;
        case 4:
            pagoContratistas();
            break;
        case 5:
            break;
        default:
            cout << "Opcion invalida" <<endl;
            break;
        }
    }while(code != 5);
    return 0; 
}

void pagoGerentes() {
    int cantidadGerentes;
    float salario;

    cout << "Ingrese la cantidad de gerentes" << endl;
    cin >> cantidadGerentes;
    cout << "Ingrese el salario semanal de cada gerente" << endl;
    cin >> salario;

    cout << "Id Gerente\tSalario" << endl;
    for (int gerenteID = 1; gerenteID <= cantidadGerentes; gerenteID++) 
        cout << "\t" << gerenteID << "\t$" << salario << endl;
    cout << "Total a pagar" << "\t$" << cantidadGerentes*salario;
}

void pagoTrabajadoresPorHora() {
    int cantidadTrabajadores, horasExtras = 0;
    float salarioPorHora, salarioDevengado, salarioBasico, pagoTotal = 0.0;

    cout << "Ingrese la cantidad de trabajadores" << endl;
    cin >> cantidadTrabajadores;
    
    int horasTrabajadas[cantidadTrabajadores];

    cout << "Ingrese el salario por hora" << endl;
    cin >> salarioPorHora;
    
    for (int trabajadorID = 0; trabajadorID < cantidadTrabajadores; trabajadorID++) {
        cout << "Ingrese las horas que laboro a la semana el trabajador " << trabajadorID+1 << endl;
        cin >> horasTrabajadas[trabajadorID]; 
    }

    cout << "Id trabajador\t#horas trabajadas\tSalario" << endl;
    for (int trabajadorID = 0; trabajadorID < cantidadTrabajadores; trabajadorID++) {
        if (horasTrabajadas[trabajadorID] > 40) {
            horasExtras = horasTrabajadas[trabajadorID] - 40;
            salarioBasico = salarioPorHora * 40;
            salarioDevengado = salarioBasico + salarioPorHora *2.5 * horasExtras;
            cout << "\t" << trabajadorID+1 << "\t" << horasTrabajadas[trabajadorID] << "\t\t\t$" << salarioDevengado << endl;
            pagoTotal += salarioDevengado;
        }
        else {
            salarioBasico = salarioPorHora * horasTrabajadas[trabajadorID];
            salarioDevengado = salarioBasico;
            cout << "\t" << trabajadorID+1 << "\t" << horasTrabajadas[trabajadorID] << "\t\t\t$" << salarioDevengado << endl;
            pagoTotal += salarioDevengado;
        }
    }
    cout << "Total a pagar: $" << pagoTotal <<endl;
}

void pagoTrabajadoresPorComision() {
    int cantidadTrabajadores;
    float salarioDevengado, pagoTotal = 0.0;

    cout << "Ingrese la cantidad de trabajadores" << endl;
    cin >> cantidadTrabajadores;
    
    float ventasSemanales[cantidadTrabajadores];

    for (int trabajadorID = 0; trabajadorID < cantidadTrabajadores; trabajadorID++) {
        cout << "Ingrese el valor de las ventas por semana brutas correspondientes al trabajador " << trabajadorID+1 << endl;
        cin >> ventasSemanales[trabajadorID]; 
    }

    cout << "Id trabajador\tventa semanal bruta\tSalario" << endl;
    for (int trabajadorID = 0; trabajadorID < cantidadTrabajadores; trabajadorID++) {
            salarioDevengado = 250 + 0.057 * ventasSemanales[trabajadorID];
            cout << "\t" << trabajadorID+1 << "\t" << ventasSemanales[trabajadorID] << "\t\t\t$" << salarioDevengado << endl;
            pagoTotal += salarioDevengado;
    }
    cout << "Total a pagar: $" << pagoTotal <<endl;
}

void pagoContratistas() {
    int cantidadContratistas;
    float salarioFijo, salarioDevengado, pagoTotal = 0.0;

    cout << "Ingrese la cantidad de contratistas" << endl;
    cin >> cantidadContratistas;

    int tareas[cantidadContratistas];

    cout << "Ingrese el salario fijo semana" << endl;
    cin >> salarioFijo;

    for (int contratistaID = 0; contratistaID < cantidadContratistas; contratistaID++) {
        cout << "Ingrese el numero de tareas realizadas por el contratista " << contratistaID+1 << endl;
        cin >> tareas[contratistaID];
    }

    cout << "Id contratista\t# tareas realizadas\tSalario devengado" << endl;
    for (int contratistaID = 0; contratistaID < cantidadContratistas; contratistaID++) {
            salarioDevengado = salarioFijo* tareas[contratistaID];
            cout << "\t" << contratistaID+1 << "\t" << tareas[contratistaID] << "\t\t\t$" << salarioDevengado << endl;
            pagoTotal += salarioDevengado;
    }
    cout << "Total a pagar: $" << pagoTotal <<endl;
}


