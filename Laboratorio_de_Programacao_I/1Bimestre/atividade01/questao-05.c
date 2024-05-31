#include <stdio.h>
void main()
{
    float s_fixo, vendas, s_total;

    printf("\nInforme o salario fixo do funcionario: ");
    scanf("%f", &s_fixo);
    printf("\nInforme o valor tatal das vendas por ele efetuadas: ");
    scanf("%f", &vendas);

    s_total = s_fixo + (vendas * 0.05);
    printf("\nO salrio total do vendedor e: %f", s_total);
}
