#include <stdio.h>
void main ()
{
    float x, n, pot, i;

    printf("Informe a base: ");
    scanf("%f", &x);

    printf("\nInforme o expoente: ");
    scanf("%f", &n);

    pot = 1;

    for (i= 1; i<=n; i++) {
        pot = pot * x;
    }

    printf("\nResultado: %g", pot);

}
