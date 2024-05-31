#include<stdio.h> //Inclus�o de biblioteca
#define TAM 5

void main (void)//Fun��o principal
{
    char M[TAM]; //Vetor para os modelos dos carros
    float C[TAM]; //Vetor para os consumos dos carros
    int ec, i; //Declara��o de vari�veis auxiliares

    printf("\nInforme a primeira letra de cinco modelos de carros: \n\n");

    for(i = 0; i < TAM; i++) //La�o para percorrer o vetor de modelos de carros
    {
        printf("%d%c modelo: ", i+1, 167);
        fflush(stdin);
        scanf("%c", &M[i]); //Leitura de cada modelo de carro
    }

    printf("\nInforme o consumo (km/l) de cada modelo de carro: \n\n");

    for(i = 0; i < TAM; i++) //La�o para percorrer o vetor de consumo dos carros
    {
        printf("Modelo %c: ", M[i]);
        scanf("%f", &C[i]); //Leitura do consumo de cada modelo de carro
    }

    ec = 0; //Inicializando a vari�vel ec com o �ndice do primeiro modelo de carro
    for(i = 1; i < TAM; i++) //La�o para percorrer o vetor em busca do modelo mais econ�mico
    {
        if(C[i] > C[ec]) //Se o consumo do modelo da posi��o i for melhor que o consumo do modelo da posi��o ec,atualiza ec com i
            ec = i;
    }

    printf("\nModelo mais economico: %c ", M[ec]); //Mostra o modelo de carro mais econ�mico

    printf("\n\nQtde de combustivel que cada modelo consome para percorer 1000 km\n");

    for(i = 0; i < TAM; i++) //La�o para percorrer os vetores de modelo e consumo dos carros
    {
        printf("\nModelo: %c - Litros: %.1f", M[i], (float)1000/C[i]); //Escreve o modelo e a qtde de litros para percorrer 1000 km
    }
    printf("\n\n");
}
