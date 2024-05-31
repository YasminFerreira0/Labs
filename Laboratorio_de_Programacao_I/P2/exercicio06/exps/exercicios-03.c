#include <stdio.h>
void main ()

/*Faça um programa que dados um número real x e um natural n, exiba a potência xn.*/
{
    int x, n, r, i;
    printf("Infoeme o valor da base: ");
    scanf("%d", &x);

    printf("\nInforme o numero do expoente: ");
    scanf("%d", &n);

    r = 1;
    i = 1;
    while (i<=n)
    {
        r = r*x;
        i++;
    }
    printf("\nresultado: %d", r);

}
