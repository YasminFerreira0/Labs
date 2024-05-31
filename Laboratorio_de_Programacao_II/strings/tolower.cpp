/*Conversão para minúsculo*/
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str[16]="TESTE";
    for (int i=0; i<strlen(str); i++){
        str[i]=tolower(str[i]);
    }
    cout<<str<<endl;
    return 0;
}
