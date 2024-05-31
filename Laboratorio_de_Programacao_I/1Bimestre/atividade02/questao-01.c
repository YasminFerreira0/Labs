#include <stdio.h>
void main()
{
    float s, f;
    printf("Informe o salario: ");
    scanf("%f", &s);
    printf("\ninforme o valor do financeamento: ");
    scanf("%f", &f);
    if (f<=(s*5))
        printf("\nFinanceamento Concedido");
    else
        printf("\nFinanceamento Negado");

}
