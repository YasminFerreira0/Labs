/*Faça um programa contendo uma função que
receba 3 números inteiros a, b e c, sendo a maior
que 1. A função deverá somar todos os inteiros
entre b e c que sejam divisíveis por a (inclusive b e
c) e retornar o resultado para a função principal.*/

#include <iostream>
using namespace std;

int somaEntre(int a, int b, int c){
    int soma, i, maior, menor;
    soma = 0;
    if (a>1){
        if(b>c){
            menor = c;
            maior = b;
        }else{
            menor = b;
            maior = c;
        }

        for(i = menor;  i>=maior; i++){
            if(i%a == 0){
                soma = soma +i;
            }
        }

        return(soma);
    }else{
        cout<<"O valor de a deve ser maior que 1;"<<endl;
    }
}

int main(){
    int a, b, c;

    cout<<"Informe um numero inteiro maior que 1 para A: ";
    cin>>a;

    cout<<"Informe um numero inteiro para B: ";
    cin>>b;

    cout<<"Informe outro numero inteiro para C: ";
    cin>>c;

    cout<<"O resultado da somar todos os inteiros entre B e C que sejam divisiveis por A e: "<<somaEntre(a, b, c);

}