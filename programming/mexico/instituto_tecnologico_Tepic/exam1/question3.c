#include<stdio.h>


int main(){
    int f , c, mayor = 0, pf, pc, num, i, j;
    
    printf("Ingresa el numero de filas de la matriz max(10):\n");
    scanf("%d", &f);
    printf("Ingresa el numero de columnas de la matriz max(10):\n");
    scanf("%d", &c);
    
    int matriz[f][c];

    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            printf("Ingrese el numero en la posicion [%d],[%d]: ",i, j);
            scanf("%d", &num);
            matriz[i][j] = num;

            if (matriz[i][j] > mayor){
                mayor = matriz[i][j];
                pf = i;
                pc = j;
            }
        }
    }
    printf("El numero mayor es %d y se encontro en la fila: [%d] y columna: [%d]", mayor, pf, pc);

    return 0;
}
