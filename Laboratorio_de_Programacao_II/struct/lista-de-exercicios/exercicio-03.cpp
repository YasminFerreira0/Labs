/*Fa�a um programa para cadastrar at� 20 produtos de uma loja com os seguintes dados:
c�digo, descri��o, estoque m�nimo, estoque atual e pre�o. Mostrar todos os dados dos
produtos que contenham o estoque atual menor que o estoque m�nimo para efetuar
compra.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct cadastro {
    int codigo, est_min, est_atual;
    char descricao[30];
    float preco;
};

int main(){
    cadastro prod[20];
    int i, cont;

    do{
        cout<<"Quantos produtos deseja cadastrar? (maximo 20): ";
        cin>>cont;

        if(cont < 1 || cont > 20)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 20\n";
    }while(cont < 1 || cont > 20);



    cout<<"Informe os dados dos produtos."<<endl;
    for(i=0; i<cont; i++){
        cout<<"Produto "<<i+1<<": "<<endl;
        cout<<"Codigo: ";
        cin>>prod[i].codigo;

        cout<<"Descricao: ";
        fflush(stdin);
        gets(prod[i].descricao);

        cout<<"Estoque minimo: ";
        cin>>prod[i].est_min;

        cout<<"Estoque atual: ";
        cin>>prod[i].est_atual;

        cout<<"preco: ";
        cin>>prod[i].preco;
    }

    cout<<"Produtos com estoque menor que o estoque minimo"<<endl;

    for (i=0; i<cont; i++){
        if(prod[i].est_atual < prod[i].est_min){
            cout<<"Efetuar compra do produto"<<endl;
            cout<<"Codigo: "<<prod[i].codigo;
            cout<<"Descricao: "<<prod[i].descricao;
            cout<<"Estoque minimo: "<<prod[i].est_min;
            cout<<"Estoque atual: "<<prod[i].est_atual;
            cout<<"preco: "<<prod[i].preco;

            cout<<endl<<endl;
        }
    }
    return 0;
}
