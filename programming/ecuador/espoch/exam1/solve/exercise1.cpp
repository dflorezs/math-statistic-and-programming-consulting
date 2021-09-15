 #include <iostream>
 #include <string.h>
 using namespace std;
 
 struct estudiante{
     string nombre;
     string materia;
     int nota;
 };
 

 int main(){
     int n;
     estudiante temp;

     cout<<"Ingrese la cantidad de estudiantes: ";
     cin>>n;
     estudiante arrEstudiantes[n];
     
     for (int i = 0; i < n; i++){
         cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
         cin>>arrEstudiantes[i].nombre;
         cout<<"\nIngrese la materia del estudiante "<<i+1<<": ";
         cin>>arrEstudiantes[i].materia;
         cout<<"\nIngrese la nota del estudiante "<<i+1<<": ";
         cin>>arrEstudiantes[i].nota;
     }
     cout<<"*********tabla1*******\n";
      cout<<"|nombre|    |materia|    |nota|\n";
      for (int i = 0; i < n; i++){
         cout<<"|"<<arrEstudiantes[i].nombre<<"\t\t"<<arrEstudiantes[i].materia<<"\t\t"<<arrEstudiantes[i].nota<<"|\n";
      }
     

      for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arrEstudiantes[j].nota > arrEstudiantes[j+1].nota){
                temp = arrEstudiantes[j+1];
                arrEstudiantes[j+1] = arrEstudiantes[j];
                arrEstudiantes[j] = temp;
            }
        }
    }
    cout<<"*********tabla2**********\n";
     cout<<"|nombre|    |nota|    |equivalencia|\n";
      for (int i = 0; i < n; i++){
          if (arrEstudiantes[i].nota >= 14){
              cout<<"|"<<arrEstudiantes[i].nombre<<"\t\t"<<arrEstudiantes[i].nota<<"\t\t"<< "aprobado"<<"|\n";
          }
          else{
              cout<<"|"<<arrEstudiantes[i].nombre<<"\t\t"<<arrEstudiantes[i].nota<<"\t\t"<< "reprobado"<<"|\n";
          }
      }
}