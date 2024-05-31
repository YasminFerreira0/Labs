/*Faça um programa que leia o valor do salário de uma pessoa e
o valor de um financiamento pretendido. Caso o valor do
financiamento seja inferior ou igual a 30% do valor do salário da
pessoa, o programa deverá escrever “Financiamento
Concedido”, caso contrário ele deverá escrever “Financiamento
Negado”.*/

#include <iostream>
using namespace std;
int main ()
{
    float salario, fin;

    cout<<"Informe o salario: ";
    cin>>salario;

    cout<<"Informe o valor do financiamento: ";
    cin>>fin;

    if (fin > (salario * 0.30)){
        cout<<"Financiamento Concedido."<<endl;
    }else{
        cout<<"Financiamento Negado."<<endl;
    }
    return 0;
}
