//Declaração de bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main () //Função principal
{
    char str[101]; //String a ser lida
    int i, j; //Indices

    //Lendo a string
    cout<<"\nInforme a frase : ";
    gets(str);

    cout<<"\nPalavras invertidas: ";

    //Percorrendo a string do final para o início
    for(i = strlen(str)-1; i >= 0; i--)
    {
        if(str[i] == ' ' || i == 0)
        {
            //Inicializando o índice do primeiro caractere da palavra
            if(str[i] == ' ')
                j = i + 1;
            else
                j = i;

            while(str[j] != ' ' && str[j] != '\0') //Escrevendo cada palavra da string
                cout<<str[j++];

            cout<<' ';
        }
    }

    cout<<endl;

    return 0;
}

