#include <stdio.h>
void main (){
    int idade, maiorIdade;//declaracao das variaveis

    maiorIdade = 0;//inicializacao dos valores

    do{//repita
        printf("\nInforme a idade ou o valor 0 para sair: ");
        scanf("%d", &idade);//leitura da idade

        if (idade > maiorIdade){//compara as idades
            maiorIdade = idade;//recebe a maior idade
        }
    }while(idade != 0);//ate a idade

    printf("\nA maior idade e: %d\n\n", maiorIdade);

}
