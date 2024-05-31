/*Faca um programa para cadastrar ate 50 imoveis a serem alugados ou vendidos,
contendo os seguintes dados: tipo (loja, apartamento, casa, quitinete), endereco, bairro,
valor, situacao (aluguel ou venda). Ao final, solicitar ao usuario a situacao a ser
pesquisada e mostrar todos os dados dos imoveis enquadrados na solicitacao.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
struct cadastro{
    char tipo[50], ende[50], bairro[50], sit[15];
    float valor;
    
};
int main(){
    cadastro imoveis[50];
    char pes[15];
    int i, cont;

    do{
        cout<<"Quantos imoveis deseja cadastrar? (maximo 50): ";
        cin>>cont;
        if(cont < 1 || cont > 50)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 50\n";
    }while(cont < 1 || cont > 50);

    for (i=0; i<cont; i++){
        cout<<"Informe os dados do imovel " << i + 1 << ":"<<endl;

        cout<<"\nInforme o tipo do imovel: ";
        fflush(stdin);
        gets(imoveis[i].tipo);

        cout<<"Informe o endereco do imovel: ";
        fflush(stdin);
        gets(imoveis[i].ende);

        cout<<"Informe o bairro do imovel: ";
        fflush(stdin);
        gets(imoveis[i].bairro);

        cout<<"Informe o valor do imovel: ";
        cin>>imoveis[i].valor;

        cout<<"Informe a situacao do imovel (A para aluguel ou V para venda): ";
        fflush(stdin);
        gets(imoveis[i].sit);

        cout<<endl;
    }

    cout<<"Informe a situacao do imovel que esta procurando: ";
    fflush(stdin);
    gets(pes);

    cout<<endl;

    cout << "Imoveis encontrados:" <<endl;
    for (i=0; i<cont; i++){
        if(strcmpi(imoveis[i].sit, pes) == 0 ){
            cout<<"Imovel."<<endl;
            cout<<"Tipo: "<<imoveis[i].tipo<<endl;
            cout<<"Endereco: "<<imoveis[i].ende<<endl;
            cout<<"Bairro: "<<imoveis[i].bairro<<endl;
            cout<<"Valor: "<<imoveis[i].valor<<endl;
            cout<<endl<<endl;
        }
    }

    return 0;
}
