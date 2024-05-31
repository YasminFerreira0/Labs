#include <stdio.h>
void main ()
{
    int n, c, r;

    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &n);

    c = 0;

    do {
        r = n*c;
        printf("\n %d x %d = %d", n, c, r);
        c++;
    }while (c <= 10);
}
