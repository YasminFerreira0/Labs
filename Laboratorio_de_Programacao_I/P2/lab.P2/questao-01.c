#include <stdio.h>
void main(){
    int a, b, anos;//declaracao das variaveis

    //inicializao dos valores
    a = 90000000;
    b = 200000000;
    anos = 0;

    while(a<b){//enquanto a for menor a b
        //almentar a populacao
        a = a * 1.04;
        b = b * 1.02;

        //calcular a quantidade de anos
        anos++;
    }

    printf("\nA populacao a vai ultrapassar a populacao b em %d anos.", anos);//mostrar o resultado

}
