/*Faca um programa para ler, em um arquivo, as informacoes referentes aos produtos de uma
loja de informatica cadastrados com os seguintes dados: codigo, descricao, quantidade em
estoque e preco da unidade. A seguir, o programa devera apresentar o codigo, a descricao e o
preco dos produtos com mais de 100 unidades em estoque.*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

main( )
{
    FILE *arquivo;
    char registro[50], cod[10], descr[20], estoq[10], preco[10];
    int i, j, qtde;

    arquivo = fopen("produtos.txt", "r");

    cout<<"\nProdutos com mais de 100 unidades em estoque: "<<endl;

    while(fgets(registro, 50, arquivo) != NULL){

        i = j = 0;

        while(registro[i] != ' ') cod[j++] = registro[i++];

        cod[j] = '\0';

        i++;

        j = 0;

        while(!isdigit(registro[i])) descr[j++] = registro[i++];

        descr[j-1] = '\0';

        j = 0;

        while(registro[i] != ' ') estoq[j++] = registro[i++];

        estoq[j] = '\0';

        i++;

        j = 0;

        while(registro[i] != '\n') preco[j++] = registro[i++];


        preco[j] = '\0';

        qtde = atoi(estoq);

        if(qtde > 100)
            cout<<"\n"<<cod<<" "<<descr<<" "<<"R$:"<<preco;
    }

    cout<<endl;
    fclose(arquivo);
}
