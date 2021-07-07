#include<stdio.h>
#define F 5
#define C 5

//Letra faltante en la matriz
char codigo;

//Prototipos de funciones
void leeCodigo(int matriz[][C]);
void leeTexto();
void codifica(int matriz[][C], char *arr);
void decodifica(int matirz[][C], char *arr);
void muestraMatriz(int matriz[][C]);
void muestraTexto(int *arr);

int main(){
    int matriz[F][C];
    char *textoOriginal = new char;
    char *textoCodificado = new char;
    char *textoDescodificado = new char;

    leeCodigo(matriz);
    muestraMatriz(matriz);
    //leeTexto();
    //muestraTexto(textoOriginal);
    //codifica(matriz, textoOriginal);
    //muestraTexto(textoCodificado);
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