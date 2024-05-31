#include <stdio.h>
void main ()
{
    int x, soma, i, numero;

    printf("\ninforme um valor para n: ");
    scanf("%d", &x);

    soma = 0;
    numero = 2;

    for (i=1; i <=x; i++){
        soma = soma + numero;
        numero = numero + 2;
    }

    printf("\nA soma dos numeros pares e: %d", soma);
}
