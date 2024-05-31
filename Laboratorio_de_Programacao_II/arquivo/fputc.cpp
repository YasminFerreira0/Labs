#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

/*Escreve um caractere no arquivo*/

    FILE *p;
    char carac;
    p = fopen ("fputc.txt","a");
    if (p == NULL)
        cout << "Erro na abertura!" << endl;
    else{

        cout << "\nDigite um caractere: ";
        cin >> carac;
        while (carac != '0'){
            fputc(carac, p);
            if (ferror(p))
                cout << "\nErro na grava��o!";
            else{
                cout << "\nDigite outro caractere: ";
                cin >> carac;
            }
        }
    }
    fclose(p);
    return 0;
}
