#include <stdio.h>

int main(){
    int n, soma = 0, digito;
    printf("Calculo da soma do quadrado dos digitos de um numero:\n");
    printf("Numero: ");
    scanf("%d", &n);

    while (n > 0){
        digito = n % 10;
        soma += digito * digito;
        printf(" n=%d; soma=%d\n", n, soma);
        n /= 10;
    }
    printf("Resultado: %d\n", soma);
}