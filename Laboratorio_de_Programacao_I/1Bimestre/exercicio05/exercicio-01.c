#include <stdio.h>
void main()
{
    int c, q;
    float valor;

    printf("informe o codigo do item: ");
    scanf("%d", &c);

    printf("\ninforme a quantidade: ");
    scanf("%d", &q);

    switch (c)
    {
        case 100:
            valor = q * 11.50;
        break;
        case 101:
            valor = q * 9.50;
        break;
        case 102:
            valor = q * 16.00;
        break;
        case 103:
            valor = q * 20.00;
        break;
        case 104:
            valor = q * 6.50;
        break;
        default:
            printf("\nItem nao encontrado\n");
    }

    printf("\nO valor a ser pago e %.2f \n", valor);
}
