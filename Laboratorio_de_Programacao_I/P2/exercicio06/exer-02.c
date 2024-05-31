#include <stdio.h>
void main ()

/*Faça um programa que leia um número qualquer e divida por 2 (dois), sucessivamente, até que o resultado seja menor que 1 (um), mostre a sequencia de resultados.*/
{
    float n, resultado;

    printf("Informe um numero qualquer: ");
    scanf("%f", &n);

    do{
        resultado = n/2;
        //o 2f serve para limitar s quantidade de numeros que aparecem depois do ponto.
        printf("\n%.2f /2: %.2f\n", n, resultado);
        n = resultado;
    }while(n>=1);

}
