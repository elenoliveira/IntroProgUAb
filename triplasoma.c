#include <stdio.h>

int main(){
    int N, res = 0, n1, n2, n3;
    scanf("%d", &N);
    
    for(n1 = N-2; n1 >= 1; n1--){
        for(n2 = n1; n2 >= 1; n2--){
            n3 = N-n1-n2;
            if(n3 >= 1 && n3<=n2){
                res++;
                //printf("%d+%d+%d\n", n1, n2, n3);
            }
        }
    }

    printf("%d\n", res);
}