/*Cópia de strings*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main ()
{
    char str1[15], str2[15];

    gets (str1);
    strcpy (str2, str1);
    cout<<str2;
    return 0;
}
