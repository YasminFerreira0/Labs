//Faça um programa que calcule e mostre a quantidade de latas de tintas necessárias e o custo para pintar uma determinada área,
//cujo comprimento e a largura são informados. Sabe-se que: A lata de tinta custa R$ 25,00, cada lata contém 3.6 litros e cada litro pinta 13 m².

#include <stdio.h>
void main ()

{
    float largura, comprimento, num_latas, custo;

    printf("\nInforme a largura da area: ");
    scanf("%f", &largura);

    printf("\nInforme o comprimento da area: ");
    scanf("%f", &comprimento);

    num_latas = ((largura*comprimento) / 13) / 3.6;

    custo = num_latas * 25;

    printf("\nNumero de Latas de Tinta: %.1f\n", num_latas);

    printf("\nCusto da Pintura R$: %.2f\n\n", custo);
}
