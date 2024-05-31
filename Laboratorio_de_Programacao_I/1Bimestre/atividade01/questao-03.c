#include <stdio.h>
void main()
{
    float quilos, preco;
    printf("\nInforme a pes em quilos: ");
    scanf("%f", &quilos);

    preco = quilos * 40;
    printf("\nO valor a pagar e: %f", preco);
}
