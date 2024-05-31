#include<stdio.h> //Inclusão de biblioteca
#define TAM 10

void main (void)//Função principal
{
    char A[TAM], B[TAM]; //Declaração dos vetores A e B
    char aux; //Declaração de variável auxiliar
    int i, j; //Declaração de variáveis indíces

    printf("\nInforme os vinte caracteres do vetor A: \n\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor A
    {
        printf("%d%c caracter: ", i+1, 167);
        fflush(stdin);
        scanf("%c", &A[i]); //Leitura do vetor A
    }

    printf("\nInforme os vinte caracteres do vetor B: \n\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor B
    {
        printf("%d%c caracter: ", i+1, 167);
        fflush(stdin);
        scanf("%c", &B[i]); //Leitura do vetor B
    }

    printf("\n\nVetor A - Antes da troca:\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor A
        printf("%c ", A[i]); //Escrevendo o vetor A

    printf("\n\nVetor B - Antes da troca:\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor B
        printf("%c ", B[i]); //Escrevendo o vetor B

    for(i = 0, j = TAM-1; i < TAM; i++, j--) //Laço para percorrer os vetores para as trocas
    {
        aux = A[i];
        A[i] = B[TAM-i-1];
        B[TAM-i-1] = aux;
    }

    printf("\n\nVetor A - Depois da troca:\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor A
        printf("%c ", A[i]); //Escrevendo o vetor A

    printf("\n\nVetor B - Depois da troca:\n");

    for(i = 0; i < TAM; i++) //Laço para percorrer o vetor B
        printf("%c ", B[i]); //Escrevendo o vetor B

    printf("\n\n");
}
