/*Uma determinada biblioteca possui obras de ciências exatas, humanas e biológicas, totalizando 1500 volumes, distribuídos em cada uma das áreas. O proprietário resolveu agrupar as informações de cada livro no seguinte registro:
    Código de catalogação
    Doação (S/N)
    Nome da obra
    Nome do autor
    Editora
Faça um programa que:
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos.
b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código de catalogação e a área. Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A consulta se repete até que o usuário digite código finalizador = 1.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Livro{
    int codigo;
    char doacao, obra[50], autor[30], editora[30]; };

int main ()
{
    Livro E[500], H[500], B[500];
    int qe, qh, qb, i, cod;
    char area[15];

    do{
        cout<<"\n\nInforme a quantidade de livros de Exatas a serem cadastrados ";
        cin>>qe;
        if(qe < 1 || qe > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qe < 1 || qe > 500);

    cout<<"\nCadastro dos livros de Exatas\n";
    for(i = 0; i < qe; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>E[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>E[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(E[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(E[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(E[i].editora);
    }

    do{
        cout<<"\n\nInforme a quantidade de livros de Humanas a serem cadastrados ";
        cin>>qh;
        if(qh < 1 || qh > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qh < 1 || qh > 500);

    cout<<"\nCadastro dos livros de Humanas\n";
    for(i = 0; i < qh; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>H[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>H[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(H[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(H[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(H[i].editora);
    }

    do{
        cout<<"\n\nInforme a quantidade de livros de Biologicas a serem cadastrados ";
        cin>>qb;
        if(qb < 1 || qb > 500)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 500\n";
    }while(qb < 1 || qb > 500);

    cout<<"\nCadastro dos livros de Biologicas\n";
    for(i = 0; i < qb; i++)
    {
        cout<<"\n\nInforme o codigo de catalogacao: ";
        cin>>B[i].codigo;

        cout<<"\nInforme se e doacao (S - sim, N - nao) ";
        cin>>B[i].doacao;

        cout<<"\nInforme o nome da obra: ";
        fflush(stdin);
        gets(B[i].obra);

        cout<<"\nInforme o nome do autor: ";
        fflush(stdin);
        gets(B[i].autor);

        cout<<"\nInforme o nome da editora: ";
        fflush(stdin);
        gets(B[i].editora);
    }

    do{
        cout<<"\n\n\nInforme o codigo do livro a ser buscado: ";
        cin>>cod;

        if(cod != 1)
        {
            cout<<"\n\nInforme a area do livro: ";
            fflush(stdin);
            gets(area);

            if(strcmpi(area, "Exatas") == 0)
            {
                i = 0;
                while(i < qe && E[i].codigo != cod)
                    i++;

                if(i < qe)
                {
                    cout<<"\n\nNome da obra: "<<E[i].obra;
                    cout<<"\n\nNome do autor: "<<E[i].autor;
                    cout<<"\n\nDoacao: "<<E[i].doacao;
                    cout<<"\n\nNome da editora: "<<E[i].editora;
                }
                else
                    cout<<"\n\nObra nao Encontrada!\n";

            }
            else
            {
                if(strcmpi(area, "Humanas") == 0)
                {
                    i = 0;
                    while(i < qh && H[i].codigo != cod)
                        i++;

                    if(i < qh)
                    {
                        cout<<"\n\nNome da obra: "<<H[i].obra;
                        cout<<"\n\nNome do autor: "<<H[i].autor;
                        cout<<"\n\nDoacao: "<<H[i].doacao;
                        cout<<"\n\nNome da editora: "<<H[i].editora;
                    }
                    else
                        cout<<"\n\nObra nao Encontrada!\n";

                }
                else
                {
                    if(strcmpi(area, "Biologicas") == 0)
                    {
                        i = 0;
                        while(i < qb && B[i].codigo != cod)
                            i++;

                        if(i < qb)
                        {
                            cout<<"\n\nNome da obra: "<<B[i].obra;
                            cout<<"\n\nNome do autor: "<<B[i].autor;
                            cout<<"\n\nDoacao: "<<B[i].doacao;
                            cout<<"\n\nNome da editora: "<<B[i].editora;
                        }
                        else
                            cout<<"\n\nObra nao Encontrada!\n";

                    }
                    else
                        cout<<"\n\nArea nao Encontrada!\n";
                }
            }

        }
        else
            cout<<"\n\nBusca Finalizada!\n";
    }while(cod != 1);
    
    return 0;
}
