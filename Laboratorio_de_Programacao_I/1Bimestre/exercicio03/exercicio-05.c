#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Informe um numero inteiro: ");
    scanf("%d", &x);
    if (x%3 == 0)
        printf("\nO numero e divisivel por 3");
    else
        printf("\no numero nao e divisivel por 3");

}
