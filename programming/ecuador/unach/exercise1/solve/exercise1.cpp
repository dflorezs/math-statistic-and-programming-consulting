#include <iostream>
#include <vector>
using namespace std;
int solve(int n);

int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Numero: "<<n<<endl;
    cout<<solve(n)<<endl;
    return 0;
}

int solve(int n){
    vector <int> digits, noPrimo;
    int temp, div = 1, digit, count = 0;
    temp = n;
    //buscamos le número en el cual tenemos que dividir
    while(temp/10 != 0){
        temp = temp / 10;
        div *= 10;   
    }
    //calculamos cada digito y lo guardamos en un array
    while(div != 0){
        digit = n / div;
        n = n % div;
        div = div/10;
        digits.push_back(digit);
        
    }
    //recorremos el array de digitos y contamos los numeros que no sean primos
    for (int i = 0; i < digits.size(); i++) {
        bool flag = true;
        if (digits[i] == 1){
            noPrimo.push_back(digits[i]);
            count++;
        }
        for (int j=2; j < digits[i]; ++j) {
            if (digits[i] % j == 0){
                noPrimo.push_back(digits[i]);
                flag = false;
                break;
            }
        }
        if (flag == false) count++;
    }
    //Mostramos los números que no son primos y cuantos hay
    cout<<"No primos: ";
    for (int i = 0; i < noPrimo.size(); i++) cout<<noPrimo[i]<<" ";
    cout<<endl<<"Cantidad de numeros que no son primos: ";
    return  count;
}