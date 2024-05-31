#include <stdio.h> //Inclus�o de biblioteca
#define TAM 5 //Constante 5

void main(void) //Fun��o principal
{
	int mat[TAM][TAM], x, i, j; //Declara��o de matriz e vari�veis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	printf("\nInforme o valor x: ");
	scanf("%d", &x); //Leitura do valor para multiplicar a segunda coluna da matriz

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
        mat[i][1] = mat[i][1] * x; //Multiplicando cada elemento da segunda linha da matriz por x


    printf("\nMatriz modificada:\n");
    for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
    {
        printf("\n");
		for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
			printf("%d ", mat[i][j]); //Escrevendo cada elemento da matriz
    }
    printf("\n\n");
}
