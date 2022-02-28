#include <stdio.h>

int main() {
    int matriz[3][5], ceros = 0, positivos = 0, negativos = 0, sumNegativos = 0, productPositivos = 1;

    //lenar matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++){
            printf("Ingresa el elemento en la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //buscar datos
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if(matriz[i][j] < 0) {
                sumNegativos += matriz[i][j];
                negativos ++;
            }
            else if(matriz[i][j] > 0) {
                productPositivos = productPositivos * matriz[i][j];
                positivos ++;
            }
            else ceros ++;
        }
    }

    // mostrar datos
    printf("ceros: %d\n", ceros);
    printf("Negativos: %d\n", negativos);
    printf("positivos: %d\n", positivos);
    printf("suma de negativos: %d\n", sumNegativos);
    printf("producto de positivos: %d\n", productPositivos);


    return 0;
}