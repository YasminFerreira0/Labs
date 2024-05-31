#include <stdio.h>
#include <conio.h>
void main ()
{
    char tipo;
    printf("Selecione o sabor da pizza:\n");
    printf("\nDigite 'm' para Muzzarela \nDigite 'c' para Calabreza \nDigite 'b' para Bacon\n");
    tipo = getche();

    switch(tipo)
    {
        case 'm':
            printf("\nPreparar pizza de Muzzarela.\n");
        break;
        case 'c':
            printf("\nPreparar piza de Calabreza.\n");
        break;
        case 'b':
            printf("\nPreparar Pizza de bacon.\n");
        break;
        default:
            printf("\nOpcao Incorreta.\n");
    }
}
