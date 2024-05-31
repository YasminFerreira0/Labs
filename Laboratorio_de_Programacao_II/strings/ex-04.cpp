/*Faça um programa para ler uma string do teclado e exibi-la invertida.
    Exemplo:
        Entrada à MARIA BONITA
        Saída à ATINOB AIRAM
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char str[100];
    char str_inv[100];
    int i, j;

    cout<<"Informe a string: ";
    gets(str);

    for(i=0, j = strlen(str)-1; i<strlen(str); i++, j--){
        str_inv[j] = str[i];
    }
    str_inv[strlen(str)] = '\0';

    cout<<"String invertida: "<<str_inv<<endl;

    return 0;
}
