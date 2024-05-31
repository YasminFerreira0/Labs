#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    printf("informe um numero inteiro: ");
    scanf("%d", &x);
    printf("\nInforme um segundo numero inteiro: ");
    scanf("%d", &y);

    if (x == y)
        printf("\nOs numeros sao iguais");
    else
        printf("\nOs numeros sao diferentes");
}
