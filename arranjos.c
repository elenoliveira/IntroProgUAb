#include <stdio.h>

int main()
{
    int N, R, i, arranjos=1;
    printf("Calculo dos arranjos de N, R a R:\nIndique N:");
    scanf("%d", &N);
    printf("Indique R:");
    scanf("%d", &R);
    if(R > N || !(R > 0)){
        printf("\nErro: N tem de ser maior que R e este maior que 0.");
    }else{
        for(i = N - R + 1; i <= N; i++){
            arranjos *= i;
            printf(" i=%d; arranjos=%d\n", i, arranjos);
        }
        printf("Resultado: %d", arranjos);
    }
}