#include <stdio.h>
void main ()
{
    int soma = 0, cont = 0, n;
    do{
        printf("Entre com um numero: ");
        scanf("%d", &n);

        soma = soma + n;
        cont++;
    }while (n != 0);
    printf("\nA media dos valores e %.2f", (float) soma/cont);

}
