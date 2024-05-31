#include <stdio.h>
void main()
{
    //leia dois numeros reais e calcule e mostre o respectivo produto
    float num1, num2, produto;
    printf("\ninforme o primeiro numero: ");
    scanf("%f", &num1);
    printf("\ninforme o segundo numero: ");
    scanf("%f", &num2);
    produto = num1 * num2;
    printf("\nO produto dos dois numeros e %f", produto);
}
