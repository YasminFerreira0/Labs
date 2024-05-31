#include <stdio.h>
#include <conio.h>
void main()
{
    //Leia dois números inteiros n1 e n2 e que verifica e mostra se n1 é ou não múltiplo de n2
    int n1, n2, d;
    printf("informe um numero inteiro: ");
    scanf("%d", &n1);
    printf("informe mais um numero inteiro: ");
    scanf("%d", &n2);
    d = n1%n2;
    if (d == 0)
        printf("\nn1 e multiplo de n2");
    else
        printf("\nn1 nao e multiplo de n2");

}