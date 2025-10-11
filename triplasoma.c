#include <stdio.h>

int main(){
    int N, res = 0, n1, n2, n3;
    scanf("%d", &N);
    
    for(n1 = N; n1 >= 1; n1--){
        for(n2 = n1; n2 >= 1; n2--){
            for(n3 = n2; n3 >= 1; n3--){
                if(n1 + n2 + n3 == N){
                    res++;
                }
            }
        }
    }
    printf("%d\n", res);
}