//Declaração de bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main () //Função principal
{
    char str[101]; //String a ser lida
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; //Vetor de vogais
    int cont[5] = {0, 0, 0, 0, 0}; //Vetor para contar as vogais
    int i, j; //Indices

    //Lendo a string
    cout<<"\nInforme a frase : ";
    gets(str);

    //Percorrendo a string
    for(i = 0; i < strlen(str); i++)
    {
        for(j = 0; j < 5; j++) //Percorrendo o vetor de vogais
        {
            if(tolower(str[i]) == vogais[j]) //Procurando o caracter i da string no vetor de vogais
                cont[j]++; //Contando a vogal
        }
    }

    //Mosrando os resultados
    cout<<"\nQtde de ocorrencias cada vogal na frase\n";
    for(i = 0; i < 5; i++)
        cout<<"\nVogal "<<vogais[i]<<": "<<cont[i]<<" vezes";

    cout<<endl;


    return 0;
}

