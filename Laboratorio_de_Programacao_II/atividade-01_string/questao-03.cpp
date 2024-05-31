/*Faça um programa que leia uma frase, terminada com um <Enter> e imprima a mesma
frase com suas palavras na ordem inversa. Considere que cada palavra é separada por
apenas um caracter de espaço.
    Exemplo:
    Entrada: Isto e apenas um exemplo
    Saida: exemplo um apenas e Isto
*/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main ()
{
    char frase[50];
    char palavra[50][50];
    int i, j, k, l;

    i=0;
    j=0;
    k=0;
    l=0;

    cout<<"Informe uma frase: ";
    gets(frase);

    cout<<endl<<endl;

    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            palavra[j][k++] = frase[i];
        } else {
            palavra[j][k] = '\0';
            j++;  
            k = 0;  
        }
        i++;
    }
    palavra[j][k] = '\0'; 

    cout<<"Frase com as palavras na ordem inversa: "<<endl;

    for (l = j; l >= 0; l--) {
        cout << palavra[l];
        if (l > 0) {
            cout << " ";
        }
    }
    cout<<endl<<endl;

    return 0;
}