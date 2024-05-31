/*Nas ilhas Weblands, a moeda oficial é o Bit, havendo notas de B$50,00, B$10,00,
B$5,00 e B$1,00. Faça um programa contendo uma função para controlar um caixa
automático: dado o valor desejado pelo cliente, a função deverá determinar o número
de cada uma das notas, de modo a totalizar esse valor, minimizando a quantidade de
cédulas entregues. Por exemplo, se o valor desejado for B$ 50,00, basta uma nota de
B$50,00; se o valor desejado for B$72,00 é necessário entregar uma nota de B$50,00,
duas de B$10,00 e duas de B$1,00. A função deverá receber por parâmetro o valor
desejado pelo cliente e mostrar a quantidade de cada nota (50, 10, 5 e 1) que deverá ser
entregue ao cliente.*/

#include <iostream>

using namespace std;

void caixa (int valor){
    int n50, n10, n5, n1;

    n50 = valor / 50;
    n10 = (valor % 50) /10;
    n5 = ((valor % 50) %10) / 5;
    n1 = (((valor % 50) %10) % 5) / 1;

    cout<<"Quantidades de notas: ";
    cout<<"50: "<<n50<<endl;
    cout<<"10: "<<n10<<endl;
    cout<<"5: "<<n5<<endl;
    cout<<"1: "<<n1<<endl;

}

int main (){
    float valor;
    cout<<"Informe o valor desejado para retirada: ";
    cin>>valor;

    caixa(valor);

    return 0;
}
