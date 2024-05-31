#include <stdio.h>
void main()
{
    //leia tres numeros reais, calcule e mostre a soma e suas respectivas medias
    float num1, num2, num3, soma, media;
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &num2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f", &num3);
    soma = num1 + num2 + num3;
    media = (num1 + num2 + num3)/3;
    printf("\nAsoma dos numeros e %f e sua media e %f", soma, media);
}
