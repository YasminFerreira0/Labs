/*Faça um programa para concatenar duas strings lidas do usuário. A segunda string
deverá ser concatenada na primeira.
    Exemplo: string1: sol string2: lua
    após concatenar string1: sollua string2: lua
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    char str1[25], str2[25], str3[50];
    cout<<"Informe a primeira string: ";
    gets(str1);

    cout<<"Informe a segunda string: "<<endl<<endl;
    gets(str2);

    strcat(str1,str2);

    cout<<"String concatenada: ";
    cout<<str1<<endl;

    return 0;
}
