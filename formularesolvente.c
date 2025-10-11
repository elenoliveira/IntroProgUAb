#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, K;
    float delta, raizP, raizN;
    printf("Equacao do segundo grau a*x^2+b*x+c=0\nIndique a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b*b - 4*a*c;
    printf("\nDelta: %f", delta);
    
    if(delta < 0){
    }else if(delta == 0){
        raizP = -b / (2*a);
        printf("\nA equacao tem uma raiz unica, x=%f", raizP);
    } else {
        raizP = (-b + sqrt(delta)) / (2*a);
        raizN = (-b - sqrt(delta)) / (2*a);
        printf("\nA equacao tem duas raizes: x=%f, x=%f", raizP, raizN);
    }
    
    printf("\nCalculo de coeficientes entre -K e K inteiros nao nulos, com raizes inteiras.\n");
    printf("Introduza K: ");
    scanf("%d", &K);
    printf("\nCoeficientes de -%d a %d inteiros nao nulos, com raizes inteiras:\n", K, K);
    if(K < 0) K *= -1;
    for(a = -K; a <= K; a++){
        if(a == 0) continue;
        for(b = -K; b <= K; b++){
            if(b == 0) continue;
            for(c = -K; c <= K; c++){
                if(c == 0) continue;
                
                delta = b*b - 4*a*c;
                if(delta < 0) continue;
                raizP = (-b + sqrt(delta)) / (2*a);
                raizN = (-b - sqrt(delta)) / (2*a);
                
                if((raizP - (int)raizP) < 1e-9 && (raizN - (int)raizN) < 1e-9){
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
}