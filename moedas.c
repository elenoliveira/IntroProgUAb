#include <stdio.h>
int main()
{
    int m2e=0, m1e=0, m50c=0, m20c=0, m10c=0, m5c=0, m2c=0, m1c=0, mont=0;
    float buffer;
    printf(" Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", &buffer);
    mont = (int)(buffer * 100 + 0.5);
    m2e = mont/200; mont %= 200;
    m1e = mont/100; mont %= 100;
    m50c = mont/50; mont %= 50;
    m20c = mont/20; mont %= 20;
    m10c = mont/10; mont %= 10;
    m5c = mont/5; mont %= 5;
    m2c = mont/2; mont %= 2;
    m1c = mont;
    
    if(m2e) printf("2 euros: %d\n", m2e);
    if(m1e) printf("1 euro: %d\n", m1e);
    if(m50c) printf("50 centimos: %d\n", m50c);
    if(m20c) printf("20 centimos: %d\n", m20c);
    if(m10c) printf("10 centimos: %d\n", m10c);
    if(m5c) printf("5 centimos: %d\n", m5c);
    if(m2c) printf("2 centimos: %d\n", m2c);
    if(m1c) printf("1 centimo: %d\n", m1c);
}