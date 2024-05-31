#include <stdio.h>
void main()
{
    float horas, preco, salario;
    printf("\nInforme as horas de trabalho: ");
    scanf("%f", &horas);
    printf("\nInforme o preco pago por horas de trabalho: ");
    scanf("%f", &preco);
    salario = horas * preco;
    if (horas >= 40)
        salario = (salario * 0.5) + salario;
    printf("\nO salario e %.2f", salario);
}
