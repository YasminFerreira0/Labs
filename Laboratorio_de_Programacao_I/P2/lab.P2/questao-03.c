#include <stdio.h>
void main (){
    int maior, menor, i;
    float vet[10], media, soma;
    maior = 0;
    menor = 0;
    soma = 0;
    media = 0;

    printf("\nInforme os valore do vetor.\n");
    for (i=0;i<10;i++){
        scanf("%f", &vet[i]);
        soma = soma + vet[i];//vai somar os valoes do vetor
    }

    media = soma /10;

    for (i=0;i<10;i++){
        //comparar os valores com a media
        if(vet[i]<media){
            menor++;//se for menor q a media soma o menor
        }else{
            maior++;//se for maior ou igual a media soma  maior
        }
    }

    printf("\nA media e; %f", media);
    //mostra a quantidade de valores menor q a media
    printf("\nA quantidade de numeros menores que a media e: %d", menor);
    //mostra a quantidade de valores maior que a media
    printf("\nA quantidade de numeros maiores que a media e: %d", maior);

}
