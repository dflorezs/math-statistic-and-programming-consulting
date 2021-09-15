 #include <iostream>
 #include <string.h>
 using namespace std;
 
 struct persona{
     string nombre;
     string apellido;
     int dia;
     int mes;
     int anio;
 };
 
 int main(){
     int edad;
     int mesActual = 9;
     persona arrPersona[4];
     for (int i = 0; i < 4; i++){
         cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
         cin>>arrPersona[i].nombre;
         cout<<"\nIngrese el apellido de la persona "<<i+1<<": ";
         cin>>arrPersona[i].apellido;
         cout<<"\nIngrese el dia de nacimiento de la persona "<<i+1<<": ";
         cin>>arrPersona[i].dia;
         cout<<"\nIngrese el mes de nacimiento de la persona "<<i+1<<": ";
         cin>>arrPersona[i].mes;
         cout<<"\nIngrese el anio de nacimniento de la persona "<<i+1<<": ";
         cin>>arrPersona[i].anio;
     }

    cout<<"*********tabla1*******\n";
    cout<<"|nombre|    |apellido|       |dia|       |mes|       |anio|\n";
     for (int i = 0; i < 4; i++){
         cout<<"|"<<arrPersona[i].nombre<<"\t\t"<<arrPersona[i].apellido<<"\t\t"<<arrPersona[i].dia<<"\t\t"<<arrPersona[i].mes<<"\t\t"<<arrPersona[i].anio<<"|\n";
     }


    cout<<"*********tabla2*******\n";
    cout<<"|nombre|    |apellido|    |edad|\n";
     for (int i = 0; i < 4; i++){
         edad = 2021 - arrPersona[i].anio;
         if (arrPersona[i].mes > mesActual){
             edad = edad - 1;
             cout<<"|"<<arrPersona[i].nombre<<"\t\t"<<arrPersona[i].apellido<<"\t\t"<<edad<<"|\n";
         }
         cout<<"|"<<arrPersona[i].nombre<<"\t\t"<<arrPersona[i].apellido<<"\t\t"<<edad<<"|\n";
     }

     return 0;
 }