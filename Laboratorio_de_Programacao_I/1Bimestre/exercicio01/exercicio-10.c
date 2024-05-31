#include <stdio.h>
void main()
{
    //leia um valor de conta de um restaurante representando o gasto realizado pelo cliente.
    //o programa deve calcular e mostrar o valor total a ser pago, considerando que o restaurante cobra 10% para o garçon.
    float valor, valorTotal;
    printf("\ninforme o gasto realizado pelo cliente: ");
    scanf("%f", &valor);
    valorTotal = valor + (valor * 0.1);
    printf("\no valor total a ser pago e %f", valorTotal);
}
