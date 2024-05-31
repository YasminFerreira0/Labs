/*Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, email, número de horas de acesso. Faça um programa que calcule e mostre um relatório contendo o valor a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso é R$35,00 e as horas que excederam tem o custo de R$2,50 por hora.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Cliente{
    int codigo, horas;
    char email[30];
    float valor; };

int main ()
{
    Cliente C[200];
    int i, n;

    do{
        cout<<"\nInforme a quantidade de clientes a serem cadastrados ";
        cin>>n;

        if(n < 1 || n > 200)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 200\n";

    }while(n < 1 || n > 200);

    cout<<"\nCadastre os "<<n<<" clientes\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o codigo: ";
        cin>>C[i].codigo;

        cout<<"\nInforme o email: ";
        fflush(stdin);
        gets(C[i].email);

        cout<<"\nInforme o numero de horas de acesso: ";
        cin>>C[i].horas;

    }

    cout<<"\n\nValor a pagar de cada cliente\n";
    for(i = 0; i < n; i++)
    {
        C[i].valor = 35.00;

        if(C[i].horas > 20)
            C[i].valor = C[i].valor + (C[i].horas - 20) * 2.5;

        cout<<"\nCodigo: "<<C[i].codigo;
        cout<<"\nEmail: "<<C[i].email;
        cout<<"\nValor a pagar: R$: "<<C[i].valor<<endl<<endl;
    }

    return 0;
}
