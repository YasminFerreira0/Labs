#include <stdio.h>
void main()
/*Faça um programa que leia um número inteiro positivo n e imprima a soma dos n
primeiros números pares maiores do que zero (Por exemplo, se for informado n = 4, o
programa deve imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/
{
    int i, n, soma;
    soma = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <=0){//verifica se o numero e positivo
        printf("\nNumero invalido!");
    }else{
        for(i=1; i<=2*n; i++){//o ultimo numero da soma e o dobro do numero informado
            if(i%2 ==0){//se for par realiza a soma 
                soma = soma + i;
            }
            
        }
    }
    printf("\nA soma dos numeroe pares e: %d", soma);
    

}