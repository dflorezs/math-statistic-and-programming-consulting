#include <iostream>
using namespace std;

int isPrime(int);
int sumDiv(int);

int main() {
    int a, b, sD;
    cin>>a;
    cin>>b;

    for(int i = a; i <= b; i++) {
        if (i != 1) {
            if (isPrime(i)) {
                sD = sumDiv(i);
                if(isPrime(sD)) cout<<i<<endl;
        }
        }
    }
    return 0;
}

int isPrime(int num) {
    for (int i=2; i < num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
        

int sumDiv(int num) {
    int sum = 0, remainder;
    
    do{
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }while(num != 0);
    return sum;
}