#include <stdio.h>
void main()
{
    //leia dois numeros reais e calcule e mostre a respectiva media
    float num1, num2, media;
    printf("\nInforme o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("\nA media dos dois numros informados e %f", media);
}
