#include <stdio.h>
void main ()
/*Faça um programa que leia um número inteiro positivo N. Calcule e mostre o maior
quadrado menor ou igual a N. Por exemplo, se N for maior ou igual a 38, o menor quadrado
é 36 (quadrado de 6).*/
{
    int i, n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(i = 1; i * i <= n; i++){}

    i--;
    printf("\nO maior quadrado menor que %d e: %d (quandrado de %d)", n, i*i, i);

}
