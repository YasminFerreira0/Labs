#include <stdio.h>
void main ()

/*Dada a fórmula: H = 1 + 1/2 + 1/3 + 1/4 + ..... + 1/N. Faça um programa que calcule o número H, dado o número inteiro N.*/
{
    int i, n;
    float h;
    printf("Informe a quantidade de termos para a seguencia: ");
    scanf("%d", &n);
    h = 0;
    i = 1;

    while(i<=n)
    {
        h = h + (float) 1/i;
        i++;
    }

    printf("\nA soma dos termeos e: %g", h);

}