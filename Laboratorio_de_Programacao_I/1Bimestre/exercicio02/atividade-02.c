#include <stdio.h>
void main ()

{
    float deposito, reajuste;
    printf("\nInforme o valor do deposito: ");
    scanf("%f", &deposito);

    reajuste = (deposito * 0.06) + deposito;

    printf("\nO valor com o reajuste e; %f", reajuste);

}
