#include <stdio.h>
int main() {
    double p1, p2, p3, examFinal, proyecto, notaParcialMedia, notaFinal, porNotaPArcial, porExamenFinal, PorProyectoFinal;
    printf("Ingresa la nota parcial 1: ");
    scanf("%lf", &p1);
    printf("Ingresa la nota parcial 2: ");
    scanf("%lf", &p2);
    printf("Ingresa la nota parcial 3: ");
    scanf("%lf", &p3);
    printf("Ingresa la nota del proyecto: ");
    scanf("%lf", &proyecto);
    printf("Ingresa la nota del examen final: ");
    scanf("%lf", &examFinal);
    
    notaParcialMedia = (p1 + p2 + p3) / 3;
    porNotaPArcial = (45*notaParcialMedia)/100;
    porExamenFinal = (30*examFinal)/100;
    PorProyectoFinal = (25*proyecto)/100;

    notaFinal = porExamenFinal + porNotaPArcial + PorProyectoFinal;
    printf("La nota final es: %lf", notaFinal);
}