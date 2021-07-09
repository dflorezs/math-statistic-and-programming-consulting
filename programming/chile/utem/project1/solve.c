#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define F 5
#define C 5
#define tam 50

//Letra faltante en la matriz
char codigo;
char textoCodificado[tam];

//Prototipos de funciones
void leeCodigo(int matriz[][C]);
void leeTexto(char *arr);
void codifica(int matriz[][C], char *arr);
void decodifica(int matirz[][C], char *arr);
void muestraMatriz(int matriz[][C]);
void muestraTexto(char *arr);

int main(){
    int matriz[F][C];
    char textoOriginal[tam];
    
    //char *textoDescodificado = new char;

    leeCodigo(matriz);
    muestraMatriz(matriz);
    leeTexto(textoOriginal);
    muestraTexto(textoOriginal);
    codifica(matriz, textoOriginal);
    muestraTexto(textoCodificado);
    printf("%s", textoCodificado);
    //decodifica(matriz, textoCodificado);
    //muestraTexto(textoDescodificado);
    
    
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
    //Recorre cada fila de la matriz y muestra sus elementos
     for (int f = 0; f < 5; f++){
        printf("%c  %c  %c  %c  %c\n", matriz[f][0], matriz[f][1], matriz[f][2], matriz[f][3], matriz[f][4]);
    }
}

void leeTexto(char *arr){
    printf("Ingrese un texto en mayusculas:\n");
    int i;
	for (i = 0; i < (tam-1) && arr[i-1] != 13 ;i++) arr[i]=getche( );
	if (i==19) arr[i]='\0';
	else arr[i-1]='\0';
}

void muestraTexto(char* arr){
    printf("\n%s",arr);
}    

void codifica(int matriz[][C], char *arr){
    int contador = 0, acumulador = 1, pAscci, sAscci, pmf, pmc, smf, smc;
    char pElemnto, sElemneto, espacio;
    // Recorrer el array
    while (acumulador != (strlen(arr)-1)){
        if (arr[contador] != 32){
            pAscci = arr[contador];
            sAscci = arr[contador+1];

            //Recorrer la matriz
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < 5; j++){
                    if (matriz[i][j] == pAscci){
                        pmf = i;
                        pmc = j;
                    }
                    if (matriz[i][j] == sAscci){
                        smf = i;
                        smc = j;
                    }
                }
            }
            pElemnto = matriz[pmf][smc];
            sElemneto = matriz[smf][pmc];
            textoCodificado[contador] = pElemnto;
            textoCodificado[contador+1] = sElemneto;
            contador += 2;
            acumulador += 1;
        }else{
            espacio = 32;
            textoCodificado[contador] = espacio;
            contador +=1;
        }
        
    }
    textoCodificado[19] = '\0';
}

