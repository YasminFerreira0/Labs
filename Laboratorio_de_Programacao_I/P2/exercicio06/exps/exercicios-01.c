#include <stdio.h>
void main ()

/*Escreva um programa para ler 2 valores (se o segundo valor informado for ZERO, deve ser lido um novo valor) e imprimir o resultado da divisão do primeiro pelo segundo.*/
{
    int n1, n2;
    float res;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    do{
        printf("\nInforme o segundo numero, diferente de zero: ");
        scanf("%d", &n2);
    }while (n2 == 0);
    res = (float) n1/n2;
    printf("\no resultado da divisao e :%g", res);
}
