#include <stdio.h>
void main ()
/*Construa um programa que calcule o fatorial de um número N inteiro e positivo (N!). Saiba
que:
N! = 1 x 2 x 3 .... x (N -1) x N
0! = 1*/
{
    int n, i, fat;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    fat = 1;
    if (n < 0){
        printf("\nNumero invalido");
    }else {
        for (i=1; i<=n; i++){
            fat = fat * i;
        }
    }
    printf("\nO fatoria do numero e: %d", fat);
}
