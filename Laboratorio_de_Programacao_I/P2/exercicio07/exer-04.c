#include <stdio.h>
void main ()
/*Dado N inteiro positivo, dizemos que N é perfeito se for igual a soma de seus divisores
positivos diferentes de N.
Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6.
Verificar se um dado número inteiro positivo é perfeito.*/
{
    int n, i, soma;
    soma = 0;


    printf ("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n/2; i++){
        if (n%i == 0 ){
            soma = soma + n;
        }
    }
    if (soma = n){
        printf("\nNumero perfeito.");
    }else{
        printf("\nNumero imperfeito.");
    }
}
