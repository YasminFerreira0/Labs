/*Faca um programa que contenha uma funcao, onde passado por parametro um valor inteiro
representando uma distancia em quilometros, realiza a conversao para milhas e mostra na tela o
resultado. Observacao: 1 quilometro equivale a aproximadamente 0,62 milhas.*/

#include <iostream>
using namespace std;

void conversao(int km){
    float milhas;

    milhas = km * 0.62;

    cout<<"O valor convertido em milhas e: "<<milhas<<endl;
}

int main (){
    int km;

    cout<<"Informe a distancia em quilometros: ";
    cin>>km;

    conversao(km);

    return 0;
}
