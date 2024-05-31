#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    FILE *p;
    char carac;
    p = fopen ("exemplo.txt","r");
    if (p == NULL){
        cout << "Erro na abertura!" << endl;
    }else{
        while (!feof(p)){
            carac = fgetc(p);
            if (ferror(p)){
                cout << "\nErro na leitura!";
            }else{
                cout << "Caractere lido: " << carac<<endl;
            }
        }
    }
    fclose(p);
    return 0;
}
