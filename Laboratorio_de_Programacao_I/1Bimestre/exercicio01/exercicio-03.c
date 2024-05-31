#include <stdio.h>
void main()
{
    //leia dois numeros inteiros e calcule e mostre a soma de seus quadrados
    int num1, num2, somaQuad;
    printf("\nInforme o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &num2);
    somaQuad = num1 * num1 + num2 * num2;
    printf("\nA soma dos quadrados dos dois numeros e %d", somaQuad);
}
