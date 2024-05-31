/*Faça um programa para ler uma frase e determinar quantas vezes um determinado
caractere aparece na frase. Esse caractere deve ser informado pelo usuário.*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    int cont, i;
    char str[50];
    char c;
    cont = 0;

    cout<<"Digite uma frase: ";
    gets(str);

    cout<<"Informe um caracter: ";
    cin>>c;

    for (i=0; i<strlen(str); i++){
        if(str[i]==c){
            cont++;
        }
    }

    cout<<"O caracter aparece "<<cont<<" vezes na fraze."<<endl;

    return 0;
}
