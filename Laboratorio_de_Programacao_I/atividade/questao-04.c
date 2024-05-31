#include <stdio.h>
void main()
{
    //A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Faça um programa que leia uma determinada quantidade de refrigerante de cada formato e calcule a quantidade de litros de refrigerante que foram vendidos.

    float lata, garrafa1, garrafa2, litrosTotal;

    printf("\nInforme a quantdade de refrigerante: ");

    printf("\nLatas de 350ml: ");
    scanf("%f", &lata);

    printf("\nGarrafa de 600ml: ");
    scanf("%f", &garrafa1);

    printf("\nGarrafa de 2 litros: ");
    scanf("%f", &garrafa2);

    litrosTotal = ((lata * 350) + (garrafa1*600) + (garrafa2*2000)) / 1000;

    printf("\nA quantidade de litros que foram vendidos e: %.3f", litrosTotal);
}

