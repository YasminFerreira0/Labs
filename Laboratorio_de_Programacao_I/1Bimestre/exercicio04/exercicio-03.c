#include <stdio.h>
void main ()
{
    int x, y, z;
    printf("Informe um numero inteiro: ");
    scanf("%d", &x);

    printf("Informe um numero inteiro: ");
    scanf("%d", &y);

    printf("Informe um numero inteiro: ");
    scanf("%d", &z);

    if (x<y && y<z)
        printf("\nO numero intermediario e %d", y);
    else {
        if (x<z)
            printf("\nO numero intermediario e %d", x);
        else
            printf("\nO numero intermediario e %d", z);
    }

}
