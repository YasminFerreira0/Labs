#include <stdio.h> //Inclus�o de biblioteca
#define TAM 5 //Constante 5

void main(void) //Fun��o principal
{
	int mat[TAM][TAM], somaprinc, somasec, i, j; //Declara��o de matriz e vari�veis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //La�o para endere�ar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //La�o para endere�ar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	somaprinc = somasec = 0; //Inicializando as vari�veis para soma das diagonais (principal e secundaria) com ZERO

	for(i = 0, j = TAM-1; i < TAM; i++, j--) //La�o para endere�ar as linhas e colunas da matriz
	{
        somaprinc = somaprinc + mat[i][i]; //Somando a diagonal principal da matriz
        somasec = somasec + mat[i][j]; //Somando a diagonal secundaria da matriz
	}

	if(somaprinc == somasec) //Verificando se a soma das diagonais s�o iguais
        printf("\nA soma da diagonal principal eh igual a soma da diagonal secundaria");
    else
        printf("\nA soma da diagonal principal eh diferente da soma da diagonal secundaria");

    printf("\n\n");
}

