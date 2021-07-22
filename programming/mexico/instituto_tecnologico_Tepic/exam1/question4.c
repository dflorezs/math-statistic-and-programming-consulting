#include<stdio.h>

int factorial(int x);
int potencia(int x, int y);

int main(){
    int a, b, r, opc;
    printf("Elige la operacion que deseas realizar:\n");
    printf("\n1)Factorial\n2) Elevar a una potencia\n");
    scanf("%d", &opc);

    if (opc == 1){
        printf("Digita un numero: \n");
        scanf("%d", &a);
        r = factorial(a);
    }
    else{
        printf("Digita un numero el cual es la base de la potencia:\n");
        scanf("%d", &a);

        printf("A que potencia deseas elevar el numero %d\n", a);
        scanf("%d", &b);
        r = potencia(a,b);
    }
    printf("El resultado es: %d", r);

    return 0;
}

int factorial(int x){
    int i, fact = 1;
    for (i = x; i > 1; i--){
        fact *= i;
    }
    return fact;
}

int potencia(int x, int y){
    int i, res = 1;
    for (i = 1; i <= y; i++){
        res *= x;
    }
    return res;
}