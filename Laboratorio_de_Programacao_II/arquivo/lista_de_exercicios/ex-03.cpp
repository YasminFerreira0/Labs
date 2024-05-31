/*A prefeitura de uma cidade realizou um censo coletando, de seus habitantes, os seguintes
dados: nome, cpf, rg, idade e nivel de escolaridade (fundamental, medio ou superior). Os
dados foram gravados em um arquivo para consultas posteriores. Para auxilia-los, faca um
programa para ler os dados do censo e escrever, em outro arquivo, os dados dos habitantes
com nivel superior completo.*/

#include <iostream>
#include <string.h>

#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    FILE *arquivoL, *arquivoW;
    int i, j;

    char habitantes[50], nome[20], cpf[10], rg[10], idade[5], nvEscolar[20];

    arquivoL = fopen("ex_03_habitantes-leitura.txt", "r");

    arquivoW = fopen("ex_03_habitantes-escrever.txt", "w");

    if(arquivoL == NULL){
        cout<<"Erro ao abrir o arquivo de leitura."<<endl;
    }
    if(arquivoW == NULL){
        cout<<"Erro ao abrir o arquivo de escrita."<<endl;
    }

    while(fgets(habitantes, 50, arquivoL)!=NULL){
        i=j=0;
        while(habitantes[i] != ' ') nome[j++] = habitantes[i++];

        nome[j] = '\0';
        i++;
        j = 0;

        while(habitantes[i] != ' ') cpf[j++] = habitantes[i++];

        cpf[j] = '\0';
        i++;
        j = 0;

        while(habitantes[i] != ' ') rg[j++] = habitantes[i++];

        rg[j] = '\0';
        i++;
        j = 0;

        while(habitantes[i] != ' ') idade[j++] = habitantes[i++];

        idade[j] = '\0';
        i++;
        j = 0;

        while(habitantes[i] != ' ') nvEscolar[j++] = habitantes[i++];

        nvEscolar[j] = '\0';


        if(strcmpi(nvEscolar, "superior") == 0){
            fputs(habitantes, arquivoW);
            if (ferror(arquivoW)){
                cout << "\nErro de gravacao!";
            }else{
               cout << "\nGravacao com sucesso!";
            }
        }
    }

    cout<<endl;
    fclose(arquivoL);
    fclose(arquivoW);

    cout << "Concluido!" << endl;
    return 0;
}
