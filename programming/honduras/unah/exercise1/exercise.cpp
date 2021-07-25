#include <iostream>
#define SIZE 20
using namespace std;

void frequency(int *X, int *Y);
void sort(int *X);
void show(int *X);

int main(){
    int A[SIZE], B[SIZE];
    //fill array A
    cout<<"Ingrese los elementos de A:\n";
    for (int i = 0; i < SIZE; i++){
        cin>>A[i];
    }

    frequency(A, B);
    sort(B);
    cout<<"Elementos del arreglo B:\n";
    show(B);
    return 0;
}

//validates the number of digits of each element in array A and adds the first digit of each element in array B
void frequency(int *X, int *Y){
    for (int i = 0; i < SIZE; i++){
        if (*(X + i)/10000 == 0) *(Y + i) = *(X + i) / 1000; 
        else *(Y + i) = *(X + i) / 10000;
    }
}

//sorts the elements of the array from smallest to largest
void sort(int *X){
    int temp, minPosition;
    for (int i = 0; i < SIZE - 1; i++){
        minPosition = i;
        for (int j = i + 1; j < SIZE; j++){
            if (*(X + minPosition) > *(X + j)){
                minPosition = j;
            }
        }
        //swap
        if (minPosition != i){
            temp = *(X + i);
            *(X + i) = *(X + minPosition);
            *(X + minPosition) = temp;
        }
    }
}

//displays each of the elements of the array
void show(int *X){
    for (int i = 0; i < SIZE; i++){
        cout<<X[i]<<" ";
    }
}