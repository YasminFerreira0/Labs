#include <stdio.h>
void main()
{
    int n1, n2, i, produto;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n1);

    printf("\nInforme um segundo numero: ");
    scanf("%d", &n2);

    i = 0;
    produto = 0;

    do{
        produto = produto + n1;
        i++;
    }while(i != n2);

    printf("\nO produto dos dois numero e: %d", produto);

}
