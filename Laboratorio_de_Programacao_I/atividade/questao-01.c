#include <stdio.h>
void main()
{
    int anos, meses, dias, diasTotal;

    printf("\nInforme a sua idade");
    printf("\nanos: ");
    scanf("%d", &anos);
    printf("meses: ");
    scanf("%d", &meses);
    printf("dias: ");
    scanf("%d", &dias);

    diasTotal = (anos * 365) + (meses * 30) + dias;

    printf("\nO total de dias e: %d", diasTotal);
}
