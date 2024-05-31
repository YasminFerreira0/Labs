#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    /*a funcao fopen() cria um
arquivo chamado exemplo.txt, onde poderao
ser realizadas operacoes de escrita (gravacoo),
pois foi utilizado o modo de abertura �w�.*/

    FILE *p;
    
    p = fopen ("exemplo.txt","w");

    if (p == NULL){
        cout << "Erro na abertura do arquivo!";
    }else{
        cout << "\nArquivo Criado com Sucesso!\n";
    }


    return 0;
}
