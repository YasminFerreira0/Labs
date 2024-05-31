#include <stdio.h>
#include <conio.h>
void main()
{
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
        printf("\nMaior de idade");
    else
        printf("\nMenor de idade");
}
