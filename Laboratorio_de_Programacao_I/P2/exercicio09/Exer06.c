#include <stdio.h> //Inclus�o de biblioteca
#define TAM 5 //Constante 5

void main(void) //Fun��o principal
{
	int mat[TAM][TAM], mat_t[TAM][TAM], i, j; //Declara��o de matriz e vari�veis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
            mat_t[j][i] = mat[i][j]; //Calculando a matriz transposta
    }

    printf("\nMatriz transposta:\n");
    for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
    {
        printf("\n");
		for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
			printf("%d ", mat_t[i][j]); //Escrevendo cada elemento da matriz transposta
    }
    printf("\n\n");
}
