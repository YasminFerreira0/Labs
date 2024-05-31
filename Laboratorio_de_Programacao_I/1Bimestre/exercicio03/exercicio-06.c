#include <stdio.h>
#include <conio.h>
void main()
{
    int ano;
    printf("informe um ano: ");
    scanf("%d", &ano);
    if (ano%4 == 0)
        printf("\nO ano e bissesto");
    else
        printf("\nO ano não e bissesto");
}
