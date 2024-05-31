#include <stdio.h>
void main()
{
    //leaia um valor de horas, minutos e segundos e calcule e mostre quantos segundos se passaram desde o inicio do dia
    float H, M, S, segundosTotal;
    printf("\nInforme as Horas.");
    printf("\nHoras: ");
    scanf("%f", &H);
    printf("Minutos: ");
    scanf("%f", &M);
    printf("Segundos: ");
    scanf("%f", &S);

    segundosTotal = (H*3600) + (M*60) + S;
    printf("\nO total de sehundos da hora informada e %f", segundosTotal);

}
