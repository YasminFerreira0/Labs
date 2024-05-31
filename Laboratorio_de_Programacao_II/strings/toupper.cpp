/*Conversão para maíusculo*/
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str[16]="teste";
    for (int i=0; i<strlen(str); i++){
        str[i]=toupper(str[i]);
    }
    cout<<str<<endl;
    return 0;
}
