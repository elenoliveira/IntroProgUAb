#include <stdio.h>
#include <math.h>

int main(){
    int termos;
    double soma = 0.0;
    scanf("%d", &termos);
    for(int k = 0; k <= termos; ++k){
        
        
        double num = tgamma(4 * k + 1) * (1103.0 + 26390.0 * k);
        double den = pow(tgamma(k + 1), 4) * pow(396.0, (4 * k));
        soma += (num/den);
    }
    double invPi = ((2.0 * sqrt(2.0)) / 9801.0) * soma;
    double pi = 1.0 / invPi;
    printf("%.17g\n", pi);
}