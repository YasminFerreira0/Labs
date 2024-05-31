#include <stdio.h> //Inclusão de biblioteca
#define TAM 5 //Constante 5

void main(void) //Função principal
{
	int mat[TAM][TAM], soma, i, j; //Declaração de matriz e variáveis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	soma = 0; //Inicializando soma com ZERO

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas e colunas da matriz
        soma = soma + mat[i][i]; //Somando a diagonal principal da matriz

    printf("\nSoma da diagonal principal: %d\n", soma); //Escrevendo a soma da diagonal principal da matriz

    printf("\n\n");
}
