//Faça um programa que leia um valor em segundos e calcule e mostre o valor correspondente em horas, minutos e segundos.

#include <stdio.h>

void main ()
{
    int valor_seg, horas, minutos, segundos;

    printf("\nInforme o numero de segundos: ");
    scanf("%d", &valor_seg);

    horas = valor_seg / 3600;
    minutos = (valor_seg % 3600) / 60;
    segundos = (valor_seg % 3600) % 60;

    printf("\nNumero de horas: %d\n", horas);
    printf("\nNumero de minutos: %d\n", minutos);
    printf("\nNumero de segundos: %d\n", segundos);
}
