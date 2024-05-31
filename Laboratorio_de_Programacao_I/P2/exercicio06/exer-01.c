#include <stdio.h>
void main ()
/*Faça um programa que imprima os valores pares de 0 (zero) a 10 (dez).*/
{
    int i;

    i = 0;

    printf("\nNumeros pares de zero a dez: \n");
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
}
