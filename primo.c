#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, primo = 1;
    printf("Indique N:");
    scanf("%d", &n);
    for(i=2; i <= sqrt(n); i++){
        if ( n % i == 0){
            primo = 0;
            printf("\n%d", i);
            break;
        }
    }
    
    if(primo == 1){
        printf("\n0");
    }
}