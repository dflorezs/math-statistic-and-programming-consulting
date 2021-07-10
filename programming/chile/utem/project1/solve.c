#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define F 5
#define C 5
#define tam 50

//declaraciòn de estrucuturas globales
char codigo;
char textoCodificado[tam];
char textoDecodificado[tam];

//Prototipos de funciones
void leeCodigo(int matriz[][C]);
void leeTexto(char *arr);
void codifica(int matriz[][C], char *arr);
void decodifica(int matirz[][C], char *arr);
void muestraMatriz(int matriz[][C]);
void muestraTexto(char *arr);

int main(){
    //Declaracion de estructuras
    int matriz[F][C];
    char textoOriginal[tam];
    //Lllamado a funciones
    leeCodigo(matriz);
    muestraMatriz(matriz);
    leeTexto(textoOriginal);
    muestraTexto(textoOriginal);
    codifica(matriz, textoOriginal);
    muestraTexto(textoCodificado);
    decodifica(matriz, textoCodificado);
    muestraTexto(textoDecodificado);
   
    return 0;
}

void leeCodigo(int matriz[][C]){
    int ascciCodigo, entrada = 65;
    //lee el codigo
    printf("Ingrese el codigo de la matriz: ");
    scanf("%c", &codigo);
    ascciCodigo = codigo;
    //Genera la matriz
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (entrada != ascciCodigo){
                matriz[i][j] = entrada;
                entrada += 1;
            }
            else{
                matriz[i][j] = entrada + 1;
                entrada += 2;
            }
        }
    }
}

void muestraMatriz(int matriz[][C]){
    printf("\nPara el codigo: %c la representacion de la matriz es la siguiente:\n ", codigo);
    //Recorre cada fila de la matriz y muestra sus elementos
     for (int f = 0; f < 5; f++){
        printf("\n%c    %c    %c    %c    %c\n", matriz[f][0], matriz[f][1], matriz[f][2], matriz[f][3], matriz[f][4]);
    }
}

void leeTexto(char *arr){
    printf("\nIngrese un texto en mayusculas: ");
    int i;
    //lee un texto con espacios y lo alamacena en un array
	for (i = 0; i < (tam - 1) && arr[i - 1] != 13 ; i++) arr[i] = getche( );
	if (i == 19) arr[i] = '\0';
	else arr[i - 1] = '\0';
    printf("\nEl texto ingresado es:\n");
}

void muestraTexto(char* arr){
    printf("%s", arr);
}  

void codifica(int matriz[][C], char *arr){
    int contador = 0, acumulador = 1, pAscci, sAscci, pmf, pmc, smf, smc;
    char pElemnto, sElemneto, espacio;
    // Recorrer el array hasta la penultima posicion
    while (acumulador != (strlen(arr) - 1)){
        //Validar que el elemento de la matriz no sea el caracter espacio
        if (arr[contador] != 32){
            //Parejas de elementos del array
            pAscci = arr[contador];
            sAscci = arr[contador + 1];
            //valida si cada palabra en el texto ingresado todos los elementos tienen pareja o no es decir si el numero de elementos es par o impar si es impar conserva la ultima letra en el textoCodificado
            if (arr[contador + 1] == 32 || arr[contador + 1] == '\0'){
                textoCodificado[contador] = arr[contador];
                contador += 1;
                acumulador += 1;
            }else{
                 //validar si el codigo de la matriz se encuentra en el array 
                if (codigo == arr[contador]){
                    //Guardar la pareja de elemento conservando el codigo de la matriz en el array textoCodificado
                    textoCodificado[contador] = arr[contador];
                    textoCodificado[contador + 1] = arr[contador + 1];
                    contador += 2;
                    acumulador += 1;
                }else{
                    //Recorrer la matriz y buscar la pareja en la matriz
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 5; j++){
                            if (matriz[i][j] == pAscci){
                                //Guardar los indices del primer elemento de la pareja
                                pmf = i;
                                pmc = j;
                            }
                            if (matriz[i][j] == sAscci){
                                //Guardar los indices del segundo elemento de la parjea
                                smf = i;
                                smc = j;
                            }
                        }
                    }
                    //Pareja de elementos codificados
                    pElemnto = matriz[pmf][smc];
                    sElemneto = matriz[smf][pmc];
                    //Guardar la pareja de elementos codificados en el array textoCodificado
                    textoCodificado[contador] = pElemnto;
                    textoCodificado[contador + 1] = sElemneto;
                    contador += 2;
                    acumulador += 1;
                }
            }
           
          //Cuando el elemento de la matriz sea el caracter espacio entonces añande un espacio en el array textoCodificado  
        }else{
            espacio = 32;
            textoCodificado[contador] = espacio;
            contador += 1;
        }
    }
    //Para finalizar la cadena carcteres texto codificado añade el caracter 0
    textoCodificado[strlen(arr)] = '\0';
    printf("\nEl texto codificado es:\n");
}

void decodifica(int matriz[][C], char *arr){
    int contador = 0, acumulador = 1, pAscci, sAscci, pmf, pmc, smf, smc;
    char pElemnto, sElemneto, espacio;
    // Recorrer el array hasta la penultima posicion
    while (acumulador != (strlen(arr) - 1)){
        //Validar que el elemento de la matriz no sea el caracter espacio
        if (arr[contador] != 32){
            //Parejas de elementos del array
            pAscci = arr[contador];
            sAscci = arr[contador + 1];
            //valida si cada palabra en el texto ingresado todos los elementos tienen pareja o no es decir si el numero de elementos es par o impar si es impar conserva la ultima letra en el textoCodificado
            if (arr[contador + 1] == 32 || arr[contador + 1] == '\0'){
                textoDecodificado[contador] = arr[contador];
                contador += 1;
                acumulador += 1;
            }else{
                 //validar si el codigo de la matriz se encuentra en el array 
                if (codigo == arr[contador]){
                    //Guardar la pareja de elemento conservando el codigo de la matriz en el array textoCodificado
                    textoDecodificado[contador] = arr[contador];
                    textoDecodificado[contador + 1] = arr[contador + 1];
                    contador += 2;
                    acumulador += 1;
                }else{
                    //Recorrer la matriz y buscar la pareja en la matriz
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 5; j++){
                            if (matriz[i][j] == pAscci){
                                //Guardar los indices del primer elemento de la pareja
                                pmf = i;
                                pmc = j;
                            }
                            if (matriz[i][j] == sAscci){
                                //Guardar los indices del segundo elemento de la parjea
                                smf = i;
                                smc = j;
                            }
                        }
                    }
                    //Pareja de elementos codificados
                    pElemnto = matriz[pmf][smc];
                    sElemneto = matriz[smf][pmc];
                    //Guardar la pareja de elementos codificados en el array textoCodificado
                    textoDecodificado[contador] = pElemnto;
                    textoDecodificado[contador + 1] = sElemneto;
                    contador += 2;
                    acumulador += 1;
                }
            }
           
          //Cuando el elemento de la matriz sea el caracter espacio entonces añande un espacio en el array textoCodificado  
        }else{
            espacio = 32;
            textoDecodificado[contador] = espacio;
            contador += 1;
        }
    }
    //Para finalizar la cadena carcteres texto codificado añade el caracter 0
    textoDecodificado[strlen(arr)] = '\0';
    printf("\nEl texto Decodificado es:\n");
}



