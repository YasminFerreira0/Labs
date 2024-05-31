#include <stdio.h>
void main ()
{
    /*Faça um programa que dada a idade de um nadador classifica-o em uma das seguintes categorias:
        de 5 a 7 anos :” Infantil A”
        de 8 a 10 anos : “Infantil B”
        de 11 a 13 anos : “juvenil A”
        de 14 a 17 anos : “juvenil B”
        maiores de 17 anos : “Adulto”*/
    int idade;

    printf("\nInforme a idade do narrador: ");
    scanf("%d", &idade);
    
    if (idade>=5 && idade<=7)
        printf("\nInfantil A.");
    else {
        if (idade>=8 && idade<=0)
            printf("\nInfantil B.");
        else {
            if (idade>=11 && idade<=13)
                printf("\nJuvenil A.");
            else{
                if (idade>=14 && idade<=17)
                    printf("\njuvenil B.");
                else 
                    if (idade > 17)
                        printf("\nAdulto.");
                    else 
                        printf("\nNao classificado.");
            }
        }
    }
}