#include <stdio.h>
void main ()
{
    /*Faça um programa que leia a quantidade atual em estoque, quantidade máxima em estoque e quantidade mínima em estoque de um produto. O programa deve calcular e mostrar a quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual a quantidade média escrever a mensagem “Não efetuar compra”, senão escrever a mensagem “Efetuar compra”.*/

    int quantAt, quantMin, quantMax, quantMedia;

    printf("\nInforme a quantidade atual do estoque: ");
    scanf("%d", &quantAt);

    printf("\nInforme a quantidade minima do estoque: ");
    scanf("%d", &quantMin);

    printf("\nInforme a quantidade maxima do estoque: ");
    scanf("%d", &quantMax);

    quantMedia = (quantMax + quantMin)/2;

    if (quantAt >= quantMedia)
        printf("\nNao efetuar compra");
    else 
        printf("\nEfetuar compra");

}