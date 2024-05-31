#include <stdio.h>
void main()
{
    int c, q;
    float preco;

    printf("\nInforme o codigo do produto: ");
    scanf("%d", &c);

    printf("\nInforme a quantidade comprada: ");
    scanf("%d", &q);

    switch (c)
    {
        case 1001:
            preco = q * 12.32;
        break;
        case 1324:
            preco = q * 16.45;
        break;
        case 6548:
            preco = q * 22.37;
        break;
        case 5987:
            preco = q * 25.32;
        break;
        case 7623:
            preco = q * 36.45;
        break;
        default:
            printf("\nCodigo nao encontrado");
    }
    printf("\nO valor devido e %.2f", preco);
}
