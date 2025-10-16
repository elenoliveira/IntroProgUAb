#include <stdio.h>

int main(){
    double fatK = 1.0, soma = 0.0;
    int termos;
    scanf("%d", &termos);
    for(int i = 0; i <= termos; i++){
        for (int j = 1; j <= i; j++){
            fatK *= j;
        }
        soma += 1/fatK;
    }
    printf("%.16g", soma);
}