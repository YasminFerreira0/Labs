#include <stdio.h>
void main ()
/*Faça um programa que gere a saída abaixo:
    6
    6 5
    6 5 4
    6 5 4 3
    6 5 4 3 2
    6 5 4 3 2 1*/
{
    int i, j;

    printf("\nSaida Gerada:\n\n");

    for(i = 6; i >= 1; i--){
        for(j = 6; j >= i; j--){
            printf("  %d", j);
        }

        printf("\n");
    }
}