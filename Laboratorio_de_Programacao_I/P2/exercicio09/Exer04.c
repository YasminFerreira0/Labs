#include <stdio.h> //Inclusão de biblioteca
#define TAM 5 //Constante 5

void main(void) //Função principal
{
	int mat[TAM][TAM], x, i, j; //Declaração de matriz e variáveis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	printf("\nInforme o valor x: ");
	scanf("%d", &x); //Leitura do valor para multiplicar a segunda coluna da matriz

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
        mat[i][1] = mat[i][1] * x; //Multiplicando cada elemento da segunda linha da matriz por x


    printf("\nMatriz modificada:\n");
    for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
    {
        printf("\n");
		for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
			printf("%d ", mat[i][j]); //Escrevendo cada elemento da matriz
    }
    printf("\n\n");
}
