#include <iostream>
using namespace std;

void readArray(int*, int);
int isRepeated(int*, int*, int*);
void showArray(int*, int);

int main() {
    int n, sizeTmp = 1;
    cin>>n;
    int A[n], tmp[n];
    readArray(A, n);
    tmp[0] = A[0];
    /* Validate if elements in array A is in array tmp
       if is not so add element in tmp*/
    for(int i = 1; i < n; i++) {
        if(isRepeated(&A[i], tmp, &sizeTmp) == 0) {
            sizeTmp++;
            tmp[sizeTmp - 1] = A[i];
        }
       
    }
    // Copy the element the array tmp in array B
    int B[sizeTmp];
    for(int i = 0; i < sizeTmp; i++) B[i] = tmp[i];
    showArray(B, sizeTmp); 
    return 0;
}
/* Read an array*/
void readArray(int *A, int n) {
    for(int i = 0; i < n; i++) cin>>A[i];
}
/* Find element reapted in array */
int isRepeated(int *num, int *tmp, int *sizeTmp) {
    int flag = 0;
    for(int i = 0; i < *sizeTmp; i++) {
        if(*num == tmp[i]) {
            flag = 1;
            return 1;
        }
    }
    if(flag == 0) return 0;
}
/* Show a array in screen*/
void showArray(int *arr, int size) {
    for(int i = 0; i < size; i++) cout<<arr[i]<<" ";
}
