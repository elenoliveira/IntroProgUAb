#include <stdio.h>

int main()
{
    int K, soma=0, i;
    scanf("%d", &K);
    
    for(i = 1; i < K; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("%d", soma);
}