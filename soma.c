#include <stdio.h>

int main()
{
    int n, i, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    /* ler um número inteiro */
    scanf("%d", & n);
    /* na variável soma, será acumulado o resultado */
    soma = 0;
    for(i = 1; i <= n; i++){
        soma+=i;
        printf("adicionar %d, parcial %d\n", i, soma);
    }
    /* mostrar resultado final */
    printf("\nTotal: %d\n", soma);
}