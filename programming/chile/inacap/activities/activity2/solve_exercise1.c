#include <stdio.h>
#include <math.h>

void resolverEcuacionCuadratica(double a, double b, double c, double *x1, double *x2);
void vertice(double a, double b, double c, double *vx, double *vy);
double discriminante(double a, double b, double c);

int main() {
    double a, b, c, d, x1, x2, vx, vy;

    do{
    printf("Digita el valor de a: ");
    scanf("%lf", &a);
    
    printf("Digita el valor de b: ");
    scanf("%lf", &b);
    
    printf("Digita el valor de c: ");
    scanf("%lf", &c);
    
    if (a != 0) {
        d = discriminante(a, b, c);
        vertice(a, b, c, &vx, &vy);
        
        if(d > 0) {
            resolverEcuacionCuadratica(a, b, c, &x1, &x2);
            printf("La ecuacion tiene 2 soluciones x1 = %lf x2 = %lf y la coordenada de su vertice es vx = %lf, vy = %lf ", x1, x2, vx, vy);
        } else if(d == 0) {
            resolverEcuacionCuadratica(a, b, c, &x1, &x2);
            printf("La ecuacion tiene 2 soluciones iguales x1 = x2 = %lf y la coordenada de su vertice es vx = %lf, vy = %lf ", x1, vx, vy);
        }else printf("La ecuacion no tiene soluciones reales y la coordenada de su vertice es vx = %lf, vy = %lf ", vx, vy);

    }else printf("Error, a tiene que ser diferente de 0\n");
    
    }while(a == 0);
    
    return 0;
}

void resolverEcuacionCuadratica(double a, double b, double c, double *x1, double *x2) {
    *x1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    *x2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}

void vertice(double a, double b, double c, double *vx, double *vy) {
    *vx = -1 * b / (2 * a);
    *vy = (pow((-1 * b), 2) + 4 * a * c) / (4 * a);
}

double discriminante(double a, double b, double c) {
    return pow(b, 2) - 4 * a * c;
}


