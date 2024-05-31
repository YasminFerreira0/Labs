#include <stdio.h>
void main ()
/*Construa um programa que imprima a tabela de equivalência de graus Fahrenheit para
centígrados. Os limites são de 50 a 70 graus Fahrenheit com intervalo de 1 grau.
Fórmula: C = 5/9 *(F -32)*/
{
    float fah, cel;

    for (fah = 50; fah <= 70; fah++){
        cel = (5.0 / 9.0) * (fah - 32.0);
        printf("%f\n", cel);
    }
}
