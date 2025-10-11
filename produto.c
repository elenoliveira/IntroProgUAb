#include <stdio.h>

int main()
{
    int n, i, produto=1;

    printf("Calculo do produto dos primeiros N numeros.\nIndique N:");
    scanf("%d", & n);
    for(i=1; i<=n; i++){
        produto = produto * i;
        printf("  Factorial(%d)=%d\n", i, produto);
    }
    printf("Resultado: %d", produto);
}