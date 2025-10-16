#include <stdio.h>

int main(){
    double fatK = 1, res = 1;
    int termos;
    scanf("%d", &termos);
    for(int i = 0; i <= termos; i++){
        if(!i)
            continue;
        fatK *= i;
        res += (double)1/fatK;
    }
    printf("%.16g", res);
}