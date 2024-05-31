#include <stdio.h>
void main ()
/*Faça um programa que gere a seguinte saída:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6*/
{
    int i, j;

    printf("\nSaida Gerada:\n\n");

    for(i = 1; i <= 6; i++){
        for(j = 1; j <= i; j++){
            printf("  %d", j);
        }

        printf("\n");
    }
}