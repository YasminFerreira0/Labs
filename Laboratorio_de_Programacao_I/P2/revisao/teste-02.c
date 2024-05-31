#include <stdio.h>
void main (){
    int n, soma;
    soma = 0;

    printf("\nInforme a lista de numeros ou 0 para sair.\n");
    do{
        scanf("%d", &n);

        if(n%3 == 0){//numeros multiplos de 3
            soma = soma + n;
        }

        if(n>=10){//numeros multiplos de 3
            soma = soma + n;
        }else {
            soma = soma - n;
        }

    }while(n != 0);

    printf("\nA soma dos numeros multiplos de 3 sao: %d", soma);

}
