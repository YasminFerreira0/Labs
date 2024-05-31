#include <stdio.h>
void main ()
/*Faça um programa que leia o peso de 10 pessoas e que calcula e mostra o menor
peso dentre todos que foram lidos. (Obs: Não usar vetor)*/
{
    int i;
    float  peso, menor;

    menor = 0;
    printf("\nInforme o peso.\n");
    for (i=0; i<10; i++){
        scanf("%f", &peso);
    }

    for (i=0; i<10; i++){
        if (peso > menor){
            menor = peso;
        }
    }
    printf("\nO menor peso e: %g", menor);
}
