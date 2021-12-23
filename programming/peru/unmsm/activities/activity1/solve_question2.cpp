#include<iostream>
#include<vector>
using namespace std;

int main(){
    int alumnos, valorAgencia, valorAlumno;
    cout<<"Digite los siguientes datos:"<<endl;
    cout<<"Cantidad de alumnos: ";
    cin>>alumnos;
    if (alumnos >= 100){
        valorAlumno = 65;
        valorAgencia = valorAlumno * alumnos;
    }
    else if (50 <= alumnos && alumnos <= 99){
        valorAlumno = 70;
        valorAgencia = valorAlumno * alumnos;
    }
    else if (30 <= alumnos && alumnos <= 49){
        valorAlumno = 95;
        valorAgencia = valorAlumno * alumnos;
    }
    else{
        valorAlumno = 4000 / alumnos;
        valorAgencia = 4000;
    }
    cout<<"El valor a pagar a la agencia por el viaje es: "<<valorAgencia<<" soles";
    cout<<" y cada alumno debe pagar por el viaje aproximadamente: "<<valorAlumno<<" soles";
    return 0 ;
}
