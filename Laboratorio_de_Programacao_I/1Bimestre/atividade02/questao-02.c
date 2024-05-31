#include <stdio.h>
void main()
{
    int h, s, r;
    printf("Informe as horas trabalhadas em anos: ");
    scanf("%d", &h);
    printf("\nInforme o slario do funcionario: ");
    scanf("%d", &s);
    if (h>10)
        r = (s*0.08)+s;
    else
        r= (s*0.1)+s;
    printf("\nO reajuste do salrio e de %d", r);
}
