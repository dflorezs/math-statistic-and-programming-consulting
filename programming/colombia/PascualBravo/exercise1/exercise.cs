using System;
using System.Collections.Generic;

class MainClass {
  public static void Main (string[] args) {
    int numeroBuscado, contador = 0;
    List<int> posicionFila = new List<int>();
    List<int> posicionColumna = new List<int>();

    //Leemos el numero que se quiere buscr en la matriz
    Console.WriteLine("Ingrese el numero que desea buscar en la matriz: ");
    numeroBuscado = int.Parse(Console.ReadLine());
    
    //Declaramos la matriz e instanciamos el objeto que genera el numero aleatorio
    int[,] matriz = new int[4,5];
    Random aleatorio = new Random();
    
    //Llenamos la matriz con numros aletorios
    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 5; j++){
        matriz[i,j] = aleatorio.Next(1,101);
      }
    }
    
    //Mostramos la matriz en pantalla
    Console.WriteLine("La martiz de numeros aletorios generada es:\n");
    for (int i = 0; i < 4; i++){
      Console.WriteLine(matriz[i,0]+"   "+matriz[i,1]+"   "+matriz[i,2]+"   "+matriz[i,3]+"  "+matriz[i,4]);
    }
    
    //Validamos la existencia del numero en la matriz
    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 5; j++){
        if (matriz[i,j] == numeroBuscado){
          contador += 1;
          posicionFila.Add(i);
          posicionColumna.Add(j);
        }
      }
    }
    //Mostrar la informaciòn en pantalla
    if (contador == 0){
      Console.WriteLine("El numero ingresado no se encuentra en la matriz");
    }else{
      Console.WriteLine("El numero " + numeroBuscado+ " se encuentra en la posicion de la fila:");

      foreach (int x in posicionFila){
        Console.WriteLine (x);
      }

      Console.WriteLine("y en la posicion de la columna:");
      
      foreach (int y in posicionColumna){
        Console.WriteLine (y);
      }
      Console.WriteLine("Respectivamente, y su frecuencia en la matriz es de " + contador);
      }
    


    
    
    

    



  }
}