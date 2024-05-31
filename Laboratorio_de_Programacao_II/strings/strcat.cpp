/*Concatenação de strings*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char dest[25];
    char branco[5] =" ", aula[10]="Aula", virt[10]="Virtual";
    strcpy(dest,aula);
    strcat(dest,branco);
    strcat(dest,virt);
    cout<<dest;
    return 0;
}
