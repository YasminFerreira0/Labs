#include <stdio.h>
void main ()
{
    /*Após as negociações sobre um plano de saúde, o governo enviou a tabela de valores abaixo.
    Faça um programa que leia a idade de uma pessoa e imprima o valor que ela deverá pagar.
        até 10 anos : R$ 30,00
        de 11 anos até 29 anos : R$ 60,00
        de 30 anos até 45 anos : R$ 120,00
        de 46 anos até 59 anos : R$ 150,00
        maior que 59 anos : R$ 250,00*/

    int idade;

    printf("informe a idade: ");
    scanf("%d", &idade);

    if (idade <= 10)
        printf("\no valor que deve ser pago e de 30.00");
    else {
        if (idade>10 && idade<30)
            printf("\no valor que deve ser pago e de 60.00");
        else {
            if (idade>=30 && idade<=45)
                printf("\no valor que deve ser pago e de 120.00");
            else {
                if (idade>=46 && idade<=59)
                    printf("\no valor que deve ser pago e de 150.00");
                else 
                    printf("\no valor que deve ser pago e de 250.00");
            }
        }
    }
}