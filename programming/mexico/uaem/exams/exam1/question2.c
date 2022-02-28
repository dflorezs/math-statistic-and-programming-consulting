#include <stdio.h>
#include <math.h>

void resolverEcuacionCuadratica(double a, double b, double c);

int main() {
    double a, b, c;
    printf("Ingresa el valor de a: ");
    scanf("%lf", &a);
    printf("Ingresa el valor de b: ");
    scanf("%lf", &b);
    printf("Ingresa el valor de c: ");
    scanf("%lf", &c);
    resolverEcuacionCuadratica(a, b, c);
    return 0;
}

void resolverEcuacionCuadratica(double a, double b, double c) {
    if(a == 0) printf("Valor no valido, a tiene que se diferente de cero");
    else {
        double x1, x2, d;
        d = pow(b, 2*1.0) - 4*a*c;
        x1 = (-1 * b + sqrt(d)) / 2 * a;
        x2 = (-1 * b - sqrt(d)) / 2 * a;

        if(d < 0) printf("La ecuacion no tiene solicones reales");
        else if(d == 0) printf("La ecuacion tiene dos soluciones iguales x = %lf", x1);
        else printf("La ecuciocn tiene dos soluciones reales x1 = %lf y x2 = %lf", x1, x2);
    }
}
       