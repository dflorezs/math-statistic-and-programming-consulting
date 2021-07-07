#include<stdio.h>
#define F 5
#define C 5

//Prototipos de funciones
void leeCodigo();
void leeTexto();
void codifica(int m[][C], char *arr);
void decodifica(int m[][C], char *arr);
void muestraMatriz(int m[][C]);
void muestraTexto(int *arr);

//Letra faltante en la matriz
char codigo;

int main(){
    int matriz[F][C];
    char *textoOriginal = new char;
    char *textoCodificado = new char;
    char *textoDescodificado = new char;

    //leeCodigo();
    //muestraMatriz(matriz);
    //leeTexto();
    //muestraTexto(textoOriginal);
    //codifica(matriz, textoOriginal);
    //muestraTexto(textoCodificado);
    //decodifica(matriz, textoCodificado);
    //muestraTexto(textoDescodificado);
    
    
    return 0;
}