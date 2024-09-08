/*Elabore um sistema em c++ que cadastre dados de uma pessoa (Nome, cpf,dataNascimento,
altura e nome da mae)
Criar menu que leia varias pessoas*/

//#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct cadastro {
    char nome[50];
    char cpf[15];
    char dataNasc[11];
    float altura;
    char nomeMae[50];
};

int main(){
    cadastro pessoa[10];
    int opc;
    int n = 0;
    int nCad = 0;

    do{
        cout<<"Selecione a opercao a ser realizada."<<endl;
        cout<<"1.Realizar cadastros."<<endl;
        cout<<"2.Mostrar cadastro."<<endl;
        cout<<"3.Sair do programa."<<endl;

        cin>>opc;
        cout<<endl;

        switch(opc){
            case 1:
                cout<<"informe a quantidade de cadastros a ser realizado (max. 10): ";
                cin>>n;
                cout<<endl;

                for(int i = 0; i<n; i++){
                    cout<<"Cadastro:"<<endl;

                    cout<<"Informe o Nome: ";
                    fflush(stdin);
                    gets(pessoa[i].nome);

                    cout<<"Informe o CPF: ";
                    fflush(stdin);
                    gets(pessoa[i].cpf);

                    cout<<"Informe a data de nascimento: ";
                    fflush(stdin);
                    gets(pessoa[i].dataNasc);

                    cout<<"Informe a altura: ";
                    cin>>pessoa[i].altura;

                    cout<<"Informe o Nome da mae: ";
                    fflush(stdin);
                    gets(pessoa[i].nomeMae);

                    cout<<endl<<endl;
                    nCad++;
                }

            break;
            case 2:
                cout<<"Quantidade de cadastros "<<nCad<<endl<<endl;

                for (int j = 0; j<nCad; j++){
                        cout<<"Pessoa "<<j+1<<endl;
                        cout<<"Nome: "<<pessoa[j].nome<<endl;
                        cout<<"CPF: "<<pessoa[j].cpf<<endl;
                        cout<<"Data de nascimento: "<<pessoa[j].dataNasc<<endl;
                        cout<<"Altura: "<<pessoa[j].altura<<endl;
                        cout<<"Nome da mae: "<<pessoa[j].nomeMae<<endl<<endl;
                }

            break;
            case 3:
                cout<<"Encerando Programa...";
            break;
            default:
            cout<<endl<<"Opcao invalida! Tente novamente;"<<endl;
        }

    }while(opc!=3);
    return 0;

}
