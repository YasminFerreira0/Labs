#include <stdio.h>
void main ()
{
    int vet[10], i, soma;
    soma = 0;

    printf("\nInforme os valores do vetor.\n");

    for (i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }

    for (i=0; i<10; i++){
        if (vet[i] % 2 != 0){
            soma = soma + vet[i];
        }
    }

    printf("\nA soma dos numeros impares do vetor sao: %d", soma);
}
