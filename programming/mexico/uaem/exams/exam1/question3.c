#include <stdio.h>
#include <math.h>

int factorial(int);

int main() {
    double x, ans = 0, numerador;
    int denominador, n;
    printf("Ingresa el valor de n: ");
    scanf("%d", &n);
    printf("Ingresa el valor de x: ");
    scanf("%lf", &x);

    for(int i = 0; i < n; i++) {
        numerador = pow(-1*1.0, i*1.0) * pow(x, 2*i);
        denominador = factorial(2*i);
        ans += numerador / denominador;
        printf("%lf %d %lf\n", numerador, denominador, ans);
    } 
    printf("el valor aproximado es cos(%.lf) es: %lf", x, ans);
    return 0;
}

int factorial(int n) {
    if(n == 0) return 1;
    else {
        int ans = n;
        for(int i = n-1; 1 <= i; i--) ans*=i;
        return ans;    
    }
}
