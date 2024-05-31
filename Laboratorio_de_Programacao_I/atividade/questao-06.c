#include <stdio.h>
void main()
{
    float salario, r1, r2, r3;
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);
    r1 = (salario * 0.07) + salario;
    r2 = (r1 * 0.06) + r1;
    r3 = (r2 * 0.05) + r2;

    printf("\nOsalrio do primeiro reajuste e: %.2f", r1);
    printf("\nOsalrio do segundo reajuste e: %.2f", r2);
    printf("\nOsalrio do terceiro reajuste e: %.2f", r3);

}
