/*Faça um programa para ler uma frase em maiúsculo e apresentá-la novamente em
minúsculo.*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    char frase[50];

    cout<<"Digite uma frase em maiusculo: ";
    gets(frase);

    strlwr(frase);
    cout<<frase;
    
    return 0;
}
