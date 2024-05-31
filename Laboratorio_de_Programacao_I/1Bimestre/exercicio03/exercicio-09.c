#include <stdio.h>
#include <conio.h>
void main()
{
    //Leia dois números inteiros e que compara e mostra se são iguais ou diferentes. Caso sejam diferentes, determina e mostra o maior número entre os dois.
    int x, y;
    printf("\nInforme um numero inteiro: ");
    scanf("%d", &x);

    printf("\nInforme mais um numero inteiro: ");
    scanf("%d", &y);

    if (x==y) {
        printf("\nOs numeros sao iguais");
    }else{
        if (x>y){
        printf("\nO numero %d e mair que %d", x, y);
        }else {
        printf("\nO numero %d e mair que %d", y, x);
        }
    }

}