#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main(){
    char frase[50];
    int n_palavras = 0, i;

    cout<<"Informe uma frase: ";
    fflush(stdin);
    gets(frase);

    for(i=0; i<strlen(frase); i++){
        if(frase[i] == ' '){
            n_palavras++;
        }
    }

    cout<<"A frase possui "<<n_palavras<<" palavras."<<endl;

    return 0;

}
