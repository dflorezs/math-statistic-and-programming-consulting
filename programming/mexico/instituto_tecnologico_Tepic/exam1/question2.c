#include<stdio.h>
#include<math.h>

float electricalPower(float R, float V);

int main(){
    float R, V;

    printf("Ingrese el valor de R:\n");
    scanf("%f", &R);

    printf("Ingrese el valor de V:\n");
    scanf("%f", &V);

    printf("La potencia electrica P es: %f Watts ", electricalPower(R, V));

    return 0;
}

float electricalPower(float R, float V){
    return pow(V, 2)/R;
}

