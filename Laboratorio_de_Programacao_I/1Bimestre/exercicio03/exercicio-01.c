#include <stdio.h>
#include <conio.h>
void main()
{
    int x, resto;
    printf("informe um numero inteiro: ");
    scanf("%d", &x);
    resto = x%2;
    if (resto == 0)
        printf("\no numero informado e par");
    else
        printf("\nO numero informado e impar");

}
