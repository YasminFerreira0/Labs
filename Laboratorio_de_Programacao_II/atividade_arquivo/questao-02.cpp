/*Faca um programa que leia registros de um arquivo de estudantes. Cada estudante possui
um numero de identidade, seu nome e sua idade. O programa deve apresentar na tela o
numero de estudantes lidos, o nome e a idade do estudante mais velho.*/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    FILE *arquivo;

    char registro[100], id[20], nome[30], idade[10];
    char n_maisVelho[30], id_maisVelho[20];
    int i, j, cont, maiorIdade;

    cont = 0;
    maiorIdade = 0;

    arquivo = fopen("questao-02.txt", "r");

    if (arquivo == NULL) {
        cout<<"Erro ao abrir o arquivo."<<endl;
        return 1;
    }

    while (fgets(registro, 100, arquivo) != NULL) {
        i = j = 0;

        while (registro[i] != ' ') id[j++] = registro[i++];
        id[j] = '\0';
        i++;
        j = 0;

        while (!isdigit(registro[i])) nome[j++] = registro[i++];
        nome[j - 1] = '\0';
        j = 0;

        while (registro[i] != '\n') idade[j++] = registro[i++];
        idade[j] = '\0';

        int idadeAtual = atoi(idade);

        if (idadeAtual > maiorIdade) {
            maiorIdade = idadeAtual;
            strcpy(n_maisVelho, nome);
            strcpy(id_maisVelho, id);
        }

        cont++;
    }
    cout<<endl;
    fclose(arquivo);

    cout<<"Registro de Estudantes."<<endl<<endl;

    cout<<"Numero de estudantes lidos: "<<cont<<endl;
    cout<<"Estudante mais velho: Idade "<<maiorIdade<<endl<<endl;
    cout<<"ID: "<<id_maisVelho<<"   Nome: "<<n_maisVelho<<endl<<endl;
}
