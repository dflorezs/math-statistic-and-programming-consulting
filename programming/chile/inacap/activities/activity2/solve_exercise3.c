#include <stdio.h>

int main() {
    int primero, segundo, contarIntentosPrimero = 0, contarIntentosSegundo = 0, contarIntentosTercero = 0;
    float tercero;

    do{
        printf("Ingresa el primer valor, este debe ser un número entero par: ");
        scanf("%d", &primero);

        if(primero % 2 == 0) {
            do{
                printf("Ingresa el segundo valor, este debe ser un número negativo impar: ");
                scanf("%d", &segundo);

                if (segundo % 2 != 0 && segundo < 0) {
                    do{
                        printf("Ingresa el tercer valor, este debe ser un número perteneciente al intervalo [-3, 7): ");
                        scanf("%f", &tercero);

                        if(-3 <= tercero && tercero < 7) break;
                        else{
                            printf("El número ingresado no es valido\n");
                            contarIntentosTercero++;
                        }
                    }while(tercero < -3 || 7 <= tercero);
                }else{
                    printf("El número ingresado no es valido\n");
                    contarIntentosSegundo++;
                }
            }while(segundo % 2 == 0 || 0 <= segundo);
        }else {
            printf("El número ingresado no es valido\n");
            contarIntentosPrimero++;
        }

    }while(primero % 2 != 0);

    //Estadistica
    printf("*****ESTADISTICA RESULTADOS*****\n");
    printf("%d intentos fallidos para ingresar un numero par\n", contarIntentosPrimero);
    printf("%d intentos fallidos para ingresar un numero negativo impar\n", contarIntentosSegundo);
    printf("%d intentos fallidos para ingresar un numero perteneciente al intervalo [-3, 7)\n", contarIntentosTercero);
    printf("Total intentos: %d\n", contarIntentosPrimero + contarIntentosSegundo + contarIntentosTercero);

    return 0;
}