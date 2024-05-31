#include <stdio.h>
void main ()
/*Faça um programa que leia a idade de várias pessoas e calcule e mostre no final a
maior idade. O programa deve encerrar quando for informado uma idade igual zero.*/
{
    int idade, maior;

    maior = 0;
    for (;;) {
        printf("Informe a idade ou 0 para sair: ");
        scanf("%d", &idade);

        if (idade == 0) {//se o valor informado for 0 ele sai da estrutura de repeticao
            break;
        }

        if (idade > maior) {//compara as idades e armazena o maior valor 
            maior = idade;
        }
    }

    printf("\nA maior idade informada foi: %d\n", maior);

}