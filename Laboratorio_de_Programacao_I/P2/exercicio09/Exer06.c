#include <stdio.h> //Inclusão de biblioteca
#define TAM 5 //Constante 5

void main(void) //Função principal
{
	int mat[TAM][TAM], mat_t[TAM][TAM], i, j; //Declaração de matriz e variáveis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
            mat_t[j][i] = mat[i][j]; //Calculando a matriz transposta
    }

    printf("\nMatriz transposta:\n");
    for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
    {
        printf("\n");
		for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
			printf("%d ", mat_t[i][j]); //Escrevendo cada elemento da matriz transposta
    }
    printf("\n\n");
}
