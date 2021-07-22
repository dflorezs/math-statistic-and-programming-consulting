#include<stdio.h>
#include<math.h>
#define PI 3.14159265358

float surface(float R, float H);

int main(){
    float R, H;
    printf("Ingrese el valor del radio (R):\n");
    scanf("%f", &R);

    printf("Ingrese el valor de la hipotenusa (H) del trinagulo:\n");
    scanf("%f", &H);

    printf("El area de la de la figuara A es: %f", surface(R,H));
    return 0;
}

float surface(float R, float H){
    return R*sqrt(pow(H,2)-pow(R,2)) + (PI*pow(R,2))/2;
}

