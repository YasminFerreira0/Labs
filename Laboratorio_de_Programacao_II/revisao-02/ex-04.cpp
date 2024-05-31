/*Faça um programa para ler um número inteiro positivo n e
calcular e mostrar a soma dos n primeiros números pares
maiores do que zero (Por exemplo, se for informado n = 4, o
algoritmo deve imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).*/

#include <iostream>
using namespace std;

int main ()
{
    int n, par, soma;
    soma = 0;

    cout<<"\nInforme a qtde de numeros pares: ";
    cin>>n;

    cout<<"\nNumeros Pares: ";

    for(par = 2; par <= n*2; par+=2)
    {
        cout<<par<<" ";

        soma += par;
    }

    cout<<"\nSoma dos numeros pares: "<<soma<<endl;

    return 0;
}
