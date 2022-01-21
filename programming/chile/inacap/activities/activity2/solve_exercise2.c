#include <stdio.h>
#include <string.h>


struct alumno{
    int cantidadNotas;
    double sumNotas;
    double promedio;
};

int main() {
    int N, contarAlumnos = 0;
    char validarIngreso[3];
    
    do{
        printf("Digita la cantidad de alumnos: ");
        scanf("%d", &N);
        
        if(N > 0){
            struct alumno arrAlumnos[N];
            int flag = 1, posicion = 0; 
            
            do{
                printf("Digita SI, para ingresar y evaluar alumno, de lo contrario digita NO: ");
                scanf("%s", validarIngreso);

                if(strcmp(validarIngreso, "SI") == 0) {
                    printf("Digita La cantidad de tareas que realizo el alumno %d: ", contarAlumnos + 1);
                    scanf("%d", &arrAlumnos[posicion].cantidadNotas);
                   

                    int contarTareas = 0;
                    double nota;
                    
                    do{
                        
                        printf("Digita la nota de la tarea %d: ", contarTareas + 1 );
                        scanf("%lf", &nota);
                        
                        if(0 < nota && nota <= 7) {
                            arrAlumnos[posicion].sumNotas += nota;
                            contarTareas ++;
                        }else printf("Error Nota fuera del rango\n");
                    }while(nota != 0 && contarTareas < arrAlumnos[posicion].cantidadNotas);
                    
                    arrAlumnos[posicion].promedio = arrAlumnos[posicion].sumNotas / arrAlumnos[posicion].cantidadNotas;
                    
                    posicion ++;
                    contarAlumnos ++;
                    
                }else if(strcmp(validarIngreso, "NO") == 0) flag = 0;
                else {
                    printf("Error, la informacion que digitaste no es valida\n");
                }
            }while(flag && contarAlumnos < N);

            //************************Mostrar promedios insuficientes y buenos***********************************************************************
            int contarInsuficientes = 0, contarBuenos = 0, j = 0;
            
            printf("*****Los alumnos con promedios insuficientes y buenos son:*****\n");
            
            while(j < contarAlumnos) {
                if(arrAlumnos[j].promedio <= 4.0) {
                    printf("Alumno %d %.2lf Insufciente :(\n", j + 1, arrAlumnos[j].promedio);
                    contarInsuficientes++;
                    j++;
                }
                
                else if(5.1 <= arrAlumnos[j].promedio && arrAlumnos[j].promedio <= 6.0) {
                    printf("Alumno %d %.2lf Bueno :)\n", j + 1, arrAlumnos[j].promedio);
                    contarBuenos++;
                    j++;
                }

                else j++;
            }

            if (contarInsuficientes == 0 && contarBuenos == 0) printf("0 Alumnos\n");

            
            //*************************Mostrar porcentaje de alumnos suficientes************************************************************************
            int contarSuficientes = 0, k = 0;
            double porcentaje, contarSuficientes_d, contarAlumnos_d;
            
            while(k < contarAlumnos) {
                if( 4.0 < arrAlumnos[k].promedio && arrAlumnos[k].promedio <= 5.0) {
                    contarSuficientes ++;
                    k++;
                }else k++;
            }
            contarSuficientes_d = contarSuficientes;
            contarAlumnos_d = contarAlumnos;
            porcentaje = contarSuficientes_d / contarAlumnos_d * 100.0;
            printf("\nEL porcentaje de alumnos suficientes es %.2lf %%\n", porcentaje);
           

            
            //*************************Mostrar el promedio mas bajo*****************************************************************************************
            double promedioMasBajo = arrAlumnos[0].promedio;
            int c = 0;
            while(c < contarAlumnos) {
                if(promedioMasBajo > arrAlumnos[c].promedio) {
                    promedioMasBajo = arrAlumnos[c].promedio;
                    c++;
                }else c++;
            }
            
            printf("\nEL promedio mas bajo es: %.2lf\n", promedioMasBajo);
            

        }else printf("Error, la cantidad de alumnos tiene que ser mayor a 0\n");

    }while(N <= 0);
    
    return 0;
}


    

