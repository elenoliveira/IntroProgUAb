#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("Calculo do numero de segundos desde o inicio do dia. Hora: ");
    scanf("%d", & horas);
    printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);
    horas=60*60*horas;
    minutos=60*minutos;
    printf("Numero de segundos desde o inicio do dia: %d", horas+minutos+segundos);
}