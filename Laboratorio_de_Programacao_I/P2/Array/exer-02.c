#include <stdio.h>
void main()
/*Leia dois conjuntos (A e B) com 20 números reais cada e monte
um conjunto C, onde cada elemento de C é a subtração do
elemento correspondente de A com B.*/
{
    int i, conjA[20], conjB[20], conjC[20];

    printf("\nInforme os valores para A: \n");
    for (i=0; i < 20; i++){
            scanf("\n%d", &conjA[i]);
    }

    printf("\nInforme os valores para B: \n");
    for (i=0; i < 20; i++){
            scanf("\n%d", &conjB[i]);
    }

    printf("\nOs valores do conjunto C sao: \n");
    for (i=0; i < 20; i++){
        conjC[i] = conjA[i] - conjB[i];
        printf(" %d", conjC[i]);
    }
}
