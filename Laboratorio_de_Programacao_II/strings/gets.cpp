/*Leitura de uma string*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char str[80];
    cout<<"Digite uma string: ";
    gets(str);
    cout<<"A string digitada foi: "<<str;
    return 0;
}
