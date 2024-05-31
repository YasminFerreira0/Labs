/*Faça um programa que contenha uma função, que dado um valor em quilômetros por
parâmetro, faça a conversão para milhas e retorne o resultado para a função principal.
Lembrando que 1 quilômetro equivale a aproximadamente 0,62 milhas.*/

#include <iostream>
#include <string.h>

using namespace std;

float conversao(float km);

int main(){
    float km, m;

    cout<<"Informe um valor em quilometros: ";
    cin>>km;

    cout<<"A conversao em milhas e de: "<<conversao(km)<<endl;

    return 0;
}

float conversao(float quilom){
    quilom = quilom * 0.62;

    return quilom;
}

