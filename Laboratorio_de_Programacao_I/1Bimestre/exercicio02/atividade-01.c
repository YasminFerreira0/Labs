#include <stdio.h>
void main()
{
    int a, b, c, D, R, S;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &a);

    printf("\nInforme um segundo numero: ");
    scanf("%d", &b);

    printf("\nInforme um terceiro numero: ");
    scanf("%d", &c);

    R = (a + b) * (a + b);
    S = (b + c) * (b + c);
    D = (R + S)/2;

    printf("\nO resultado e : %d", D);

}
