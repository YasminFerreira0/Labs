#include <stdio.h> //Inclusão de biblioteca
#define TAM 5 //Constante 5

void main(void) //Função principal
{
	int mat[TAM][TAM], simetrica, i, j; //Declaração de matriz e variáveis

	printf("\nInforme os elementos da matriz\n");

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
	    {
			printf("Linha %d e Coluna %d: ", i+1, j+1);
		   	scanf("%d", &mat[i][j]); //Leitura dos elementos da matriz
        }
	}

    simetrica = 1; //Inicializando a variável com UM

	for(i = 0; i < TAM; i++) //Laço para endereçar as linhas da matriz
	{
        for(j = 0; j < TAM; j++) //Laço para endereçar as colunas da matriz
        {
            if(mat[i][j] != mat[j][i]) //Verificando se a matriz mantém a propriedade de simetria
                simetrica = 0;
        }
    }

	if(simetrica != 0) //Verificando se a matriz eh simetrica
        printf("\nMatriz Simetrica");
    else
        printf("\nMatriz nao Simetrica");

    printf("\n\n");
}
