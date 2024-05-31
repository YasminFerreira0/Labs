/*Comparação de strings*/
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
    char string1[25], string2[25];
    cout<<"Entre com um string: ";
    gets(string1);
    cout<<"Entre com outra string: ";
    gets(string2);
    if(strcmp(string1,string2) == 0){
        cout<<"As strings sao iguais.";
    }else{
        cout<<"As strings sao diferentes.";
    }
    return 0;
}
