#include <stdio.h> //Inclus�o de biblioteca
#define TAM 5 //Constante 5

void main(void) //Fun��o principal
{
	int mat[TAM][TAM], soma, i, j; //Declara��o de matriz e vari�veis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	soma = 0; //Inicializando soma com ZERO

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas e colunas da matriz
        soma = soma + mat[i][i]; //Somando a diagonal principal da matriz

    printf("\nSoma da diagonal principal: %d\n", soma); //Escrevendo a soma da diagonal principal da matriz

    printf("\n\n");
}
