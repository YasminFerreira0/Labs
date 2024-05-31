#include<stdio.h> //Inclusão de biblioteca
#define TAM 10

void main (void)//Função principal
{
    int V[TAM], voto, eleito, i; //Declaração do vetor e de variáveis

    for(i = 0; i < TAM; i++) //Inicializando o vetor com ZERO
        V[i] = 0;

    printf("\nPara votar informe o codigo do candidato (de 0 a 99). Para encerrar digite -1\n");

    do{
        printf("\nCodigo do Candidato: ");
        scanf("%d", &voto); //Lendo o voto

        if(voto >= 0 && voto < TAM) //Verificando se o voto é válido
        {
            V[voto]++; //Computando o voto do candidato
            printf("Voto computado com sucesso!\n");
        }
        else
        {
            if(voto >= TAM)
                printf("Voto invalido!\n");
            else
                printf("Votacao Encerrada!\n");
        }
    }while(voto >= 0); //Encerrando a votação

    eleito = 0; //Inicializando a variável eleito com o primeiro candidato
    for(i = 1; i < TAM; i++) //Percorrendo o vetor de votos
    {
        if(V[eleito] < V[i]) //Determinando o candidato mais votado
            eleito = i;
    }

    printf("\n\nO candidato %d foi eleito", eleito); //Mostrando o candidato eleito

    printf("\n\n");
}
