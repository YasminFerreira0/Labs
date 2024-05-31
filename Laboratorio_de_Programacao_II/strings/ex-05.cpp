/*Faça um programa para ler 10 nomes dentro de um enquanto e, em seguida,
apresentar:
    O nome mais longo;
    O nome mais curto;
    Quantidade de nomes que terminam com a letra 'A';
    Quantidade total de vogais digitadas;
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char nome[50]; 
    char nome_maior[50];
    char nome_menor[50]; 

    int n_nome_A = 0;
    int n_vogal = 0;
    int i, j=0;

    cout<<"\nInforme um nome : ";
    gets(nome);

    strcpy(nome_maior, nome);
    strcpy(nome_menor, nome);

    if(nome[strlen(nome)-1] == 'a' || nome[strlen(nome)-1] == 'A'){
        n_nome_A ++;
    }

    for(i=0; i<strlen(nome); i++)
    {
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U')
            n_vogal++;
    }

    while( j < 9 )
    {
        cout<<"\nInforme um nome : ";
        gets(nome);

        if(strlen(nome) > strlen(nome_maior))
            strcpy(nome_maior, nome);
        else
        {
            if(strlen(nome) < strlen(nome_menor))
                strcpy(nome_menor, nome);
        }

        if(nome[strlen(nome)-1] == 'a' || nome[strlen(nome)-1] == 'A')
            n_nome_A++;

        for(i = 0; i < strlen(nome); i++)
        {
            if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U')
                n_vogal++;
        }
        j++;
    }

    cout<<"\nMenor Nome: "<<nome_menor;
    cout<<"\nMaior Maior: "<<nome_maior;
    cout<<"\nQtde de nomes que terminam com A: "<<n_nome_A;
    cout<<"\nQtde total de vogais nos nomes: "<<n_vogal;

    cout<<endl;
    return 0;
}
