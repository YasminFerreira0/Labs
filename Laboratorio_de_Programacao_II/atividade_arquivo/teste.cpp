#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    FILE *arquivo;

    char registro[60], id[20], nome[30], idade[10];
    int i, j, cont = 0, maiorIdade = 0;
    
    char nomeMaisVelho[30], idMaisVelho[20];

    arquivo = fopen("questao-02.txt", "r");

    if (arquivo == NULL) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    while (fgets(registro, 60, arquivo) != NULL) {
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
            strcpy(nomeMaisVelho, nome);
            strcpy(idMaisVelho, id);
        }

        cont++;
    }

    fclose(arquivo);

    cout << "Numero de estudantes lidos: " << cont << endl;
    cout << "Estudante mais velho: Idade " << maiorIdade << ", Nome: " << nomeMaisVelho << ", ID: " << idMaisVelho <<endl;

    return 0;
}
