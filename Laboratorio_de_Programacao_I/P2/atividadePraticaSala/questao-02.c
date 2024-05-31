#include <stdio.h>
void main()
/*Faça um programa para ler um vetor de 10 números inteiros e depois exibi-lo em
ordem inversa.*/
{
    int i, j, vetor[10], vetorIn[10];

    printf("\nInforme os valores do vetor: \n");
    for (i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    for (i=0, j= 9; i<10; i++, j--){
        vetorIn[i] = vetor[j];
    }

    printf("\nOs valores em forma inversa sao:\n");
    for (i=0; i<10;i++){
        printf("%d ", vetorIn[i]);
    }
}
