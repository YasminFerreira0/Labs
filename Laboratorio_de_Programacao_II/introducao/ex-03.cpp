/*Faça um programa para ler um valor real representando um
depósito bancário em uma poupança e, em seguida, calcular e
mostrar o valor corrigido após o primeiro mês com uma taxa de
juros de 6% ao mês.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float deposito;

    cout<<"Informe o valor do deposito: ";
    cin>>deposito;

    deposito = deposito * 1.06;
    
    cout<<"\nValor corrigido R$: "<<fixed<<setprecision(2)<<deposito<<endl;

    return 0;
}
