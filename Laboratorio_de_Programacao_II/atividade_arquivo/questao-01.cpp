/*Faca um programa que leia os dados de uma pessoa, informados pelo usuario, e salve-os
em um arquivo. Os dados da pessoa sao: nome, cpf, data de nascimento e endereco. A
cada registro informado, o programa deve perguntar ao usuario se deseja ler um novo
registro e gravar no arquivo.*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    FILE *arquivo;

    char registro[150], nome[40], cpf[30], d_nasc[20], ender[100];
    int n_reg=0;

    arquivo = fopen("questao-01.txt", "w");

    if (arquivo == NULL) {
        cout<<"Erro ao abrir o arquivo."<<endl;
        
    }

    cout<<endl<<"Informe os Registros"<<endl<<endl;

    do{
        cout<<"Informe os dados."<<endl;

        cout<<"Informe o nome: ";
        fflush(stdin);
        gets(nome);

        cout<<"Informe o CPF: ";
        fflush(stdin);
        gets(cpf);

        cout<<"Informe a data de nascimento: ";
        fflush(stdin);
        gets(d_nasc);

        cout<<"Informe o endereco: ";
        fflush(stdin);
        gets(ender);

        fprintf(arquivo, "%s %s %s %s \n", nome, cpf, d_nasc, ender);

        cout<<endl;

        cout<<"Deseja realizar outro registro? (0-sim; 1-nao): ";
        cin>>n_reg;

    }while(n_reg !=1);

    fclose(arquivo);
}
