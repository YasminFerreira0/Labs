#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

struct info {
    char nome [30], ende[50];
    int cpf, tel, conta;
    float saldo;
};

int main (){
    info cadastro[51];
    int n, i, n_conta;
    float dep;

    do{
        cout<<"Infore o quantidade de clientes para cadastro: ";
        cin>>n;
        if(n<1 || n>50){
            cout<<"Valor incorreto! Informe um valor no intervalo de 1 e 50.";
        }
    }while(n<1 || n>50);

    cout<<"Cadastre os "<< n<<" clientes.";

    for (i=0; i<n; i++){
        cout<<"Cliente "<<i+1<<endl;
        cout<<"Informe o nome do cliente: ";
        fflush(stdin);
        gets(cadastro[i].nome);

        cout<<"Informe o cpf: ";
        cin>>cadastro[i].cpf;

        cout<<"informe o telefone: ";
        cin>>cadastro[i].tel;

        cout<<"Informe o endereco: ";
        fflush(stdin);
        gets(cadastro[i].ende);

        cout<<"Informe o numero da conta: ";
        cin>>cadastro[i].conta;

        cout<<"Informe o saldo da conta: ";
        cin>>cadastro[i].saldo;

    }

    cout<<"Informe o numero da conta para realizar um deposito: ";
    cin>>n_conta;

    cout<<"Informe o valor do deposito: ";
    cin>>dep;

    for (i=0; i<n; i++){
        if(n_conta == cadastro[i].conta){
            cadastro[i].saldo = cadastro[i].saldo + dep;

            cout<<"cliente: "<< cadastro[i].nome;
            cout<<"saldo: "<<cadastro[i].saldo;
        }
    }

    return 0;
}
