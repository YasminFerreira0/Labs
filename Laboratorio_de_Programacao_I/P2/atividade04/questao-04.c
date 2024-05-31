#include <stdio.h>
void main()
/*Faça um programa que leia uma lista de números cujo último número é zero. Ao
final, o programa deverá mostrar a soma de todos os números múltiplos de cinco da
lista.*/
{
    int n, soma;

    soma = 0;
    for (;;) {
        printf("Informe a um numero ou 0 para sair: ");
        scanf("%d", &n);

        if (n == 0) {//se o valor informado for 0 ele sai da estrutura de repetição
            break;
        }

        if (n % 5 == 0) {//se multiplo de 5 realiza a soma
            soma = soma + n;
        }
    }

    printf("\nA soma de todos os numerops multiplos de cinco e: %d\n", soma);
}