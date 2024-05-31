#include <stdio.h> //Inclusão de biblioteca
#define TAM 5 //Constante 5

void main(void) //Função principal
{
	int mat[TAM][TAM], somaprinc, somasec, i, j; //Declaração de matriz e variáveis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

	somaprinc = somasec = 0; //Inicializando as variáveis para soma das diagonais (principal e secundaria) com ZERO

	for(i = 0, j = TAM-1; i < TAM; i++, j--) //Laço para endereçar as linhas e colunas da matriz
	{
        somaprinc = somaprinc + mat[i][i]; //Somando a diagonal principal da matriz
        somasec = somasec + mat[i][j]; //Somando a diagonal secundaria da matriz
	}

	if(somaprinc == somasec) //Verificando se a soma das diagonais são iguais
        printf("\nA soma da diagonal principal eh igual a soma da diagonal secundaria");
    else
        printf("\nA soma da diagonal principal eh diferente da soma da diagonal secundaria");

    printf("\n\n");
}

