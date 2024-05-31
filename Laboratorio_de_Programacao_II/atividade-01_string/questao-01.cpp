/*Uma palavra é um palíndromo quando é a mesma lida da esquerda para a direita ou
vice-versa. Por exemplo, a palavra ANILINA é um palíndromo, já a palavra AMOR
não é. Faça um programa que leia uma palavra de no máximo 15 letras e mostre se ela é
um palíndromo ou não.*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char palavra[16];
    char palavra_inv[16];
    int i, j;

    cout<<"Informe uma pralavra com no maximo 15 caracteres: ";
    gets(palavra);

    for(i=0, j = strlen(palavra)-1; i<strlen(palavra); i++, j--){
        palavra_inv[j] = palavra[i];
    }
    
    //Colocando o caracter delimitador na string invertida
    palavra_inv[strlen(palavra)] = '\0';

    if(strcmp(palavra,palavra_inv) == 0){
        cout<<"A palavra e um palindromo.";
    }else{
        cout<<"A palavra nao e um palindromo.";
    }
    return 0;
}
