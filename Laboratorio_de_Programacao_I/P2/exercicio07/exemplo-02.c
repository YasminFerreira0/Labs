#include <stdio.h>
void main ()
{
    int n;
    float i, h;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    h = 0;
    for (i=1; i<=n; i++){
        h = h + 1/i;
    }
    printf("\nO resultado e: %g", h);
}
