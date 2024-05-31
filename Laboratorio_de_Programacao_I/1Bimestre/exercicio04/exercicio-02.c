#include <stdio.h>
void main ()
{
    int x, y, z;
    printf("informe um numero inteiro: ");
    scanf("%d", &x);

    printf("\nInforme mais um numero inteiro: ");
    scanf("%d", &y);

    printf("\nInforme mais um numero inteiro: ");
    scanf("%d", &z);

    if ((x<y) && (x<z))
        printf("\no menor valor e %d", x);
    else{
        if (y<z)
            printf("\nO numero menor e %d", y);
        else
            printf("\nO numero menor e %d", z);
    }
}
