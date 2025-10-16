#include <stdio.h>

int main(){
    int i, N, fib, a1 = 1, a2 = 2;
    printf("Calculo do valor da funcao Fibonacci:\nIndique N: ");
    scanf("%d", &N);
    if(N < 3)
        printf("%d", N);
    for (i = 3; i <= N; ++i){
        fib = a1 + a2;
        printf("Fib(%d)=%d\n", i, fib);
        a1 = a2;
        a2 = fib;
    }
    printf("Resultado: %d\n", fib);
}