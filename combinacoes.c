#include <stdio.h>

int main()
{
    int N, R, i, acumulado=1;
    printf("Calculo das combinacoes de N, R a R:\nIndique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);
    if(N < R || R < 1){
        printf("\nErro: N tem de ser maior que R e este maior que 0.");
    }else{
        for(i = 1; i <= R; i++){
            printf("  %d*%d=", acumulado, N-R+i);
            acumulado *= N - R + i;
            printf("%d, %d/%d=", acumulado, acumulado, i);
            acumulado /= i;
            printf("%d\n", acumulado);
        }
        printf("Resultado: %d", acumulado);
    }
}