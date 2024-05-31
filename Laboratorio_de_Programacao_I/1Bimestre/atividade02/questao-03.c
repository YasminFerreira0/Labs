#include <stdio.h>
void main()
{
    /*Um posto está vendendo Gasolina com os seguintes descontos: até 20 litros, desconto de 4% por litro e acima de 20 litros, desconto de 6% por litro. Faça um programa que leia o número de litros vendidos de gasolina e mostre o valor a ser pago pelo cliente. Considere que o preço do litro da gasolina é R$ 5,40.*/

    float litros, valor;

    printf("\nInforme a quantidade de litros: ");
    scanf("%f", &litros);

    valor =(litros * 5.40);

    if (litros <= 20)
        valor =  valor - (valor * 0.4);
    else 
        valor = valor - (valor * 0.6);
    printf("\no valor a ser pago e: %.2f", valor);

}
