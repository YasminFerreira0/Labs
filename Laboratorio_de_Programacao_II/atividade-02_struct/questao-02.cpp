/*Um determinado Museu de Artes possui inúmeras obras distribuídas em suas galerias.
A direção resolveu agrupar as informações de cada obra com a seguinte Struct:
    Código
    Doação (S/N)
    Nome da obra
    Nome do autor
    Faça um programa que:
    a) cadastre até 100 obras do museu.
    b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código da obra.
Existindo tal obra as informações são exibidas, caso contrário enviar mensagem de
aviso. A consulta se repete até que o usuário digite código finalizador = 1.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct dados{
    int codigo;
    char doacao[2], nome[30], autor[50];
};

int main (){
    dados artes[100];
    int i, cont, consul, obraEncontrada;

    do{
        cout<<"Informe a quantidade de obras que deseja cadastrar (1-100): ";
        cin>>cont;

        if(cont < 1 || cont >100){
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 100\n";
        }
    }while(cont < 1 || cont >100);

    cout<<endl<<endl;

    cout<<"Informe os dados das Obras."<<endl;

    for(i=0; i<cont; i++){
        cout<<"Obra "<<i +1<<endl;
        cout<<"Informe o codigo: ";
        cin>>artes[i].codigo;

        cout<<"Informe se foi doado (S/N): ";
        fflush(stdin);
        gets(artes[i].doacao);

        cout<<"Informe o nome da obra: ";
        fflush(stdin);
        gets(artes[i].nome);

        cout<<"Informe o autor: ";
        fflush(stdin);
        gets(artes[i].autor);

        cout<<endl<<endl;
    }

    do{
        cout<<"Informe o codigo da obra q deseja consultar ou digite 1 para sair: ";
        cin>>consul;

        if(consul != 1){
            obraEncontrada = -1;
            for(i=0; i<cont; i++){
                if(consul == artes[i].codigo){
                    obraEncontrada = i;
                }
            } 

            if (obraEncontrada != -1) {
                cout<<"Doado: "<<artes[obraEncontrada].doacao<<endl;
                cout<<"Nome da obra: "<<artes[obraEncontrada].nome<<endl;
                cout<<"Autor: "<<artes[obraEncontrada].autor<<endl;

                cout<<endl<<endl;
            }else {
                cout<<"Obra nao encontrada."<<endl;
            }
        }

    }while (consul != 1);

}
