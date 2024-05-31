/*Tendo um registro contendo Matrícula do Aluno (MA) do aluno, tipo de participação (A, B, C ou D) e Sócio da SBC (S - sim ou N - não), faça um programa para calcular o valor que cada aluno vai pagar para participar da semana de informática, sabendo-se que:
    Para os sócios da SBC o valor a pagar terá um desconto de 50%. O programa deverá permitir a entrada de vários registros (no máximo 100) até que uma condição de finalização seja satisfeita. Calcular e exibir também o total geral arrecadado com o evento e quantos alunos se matricularam em cada um dos tipos de participação.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Aluno{
    int matricula;
    char tipo, socio;
    float valor; };

int main ()
{
    Aluno A[100];
    int QTDE[4] = {0, 0, 0, 0}, i, n;
    float arrecadacao = 0;

    do{
        cout<<"\nInforme a quantidade de alunos a serem cadastrados ";
        cin>>n;

        if(n < 1 || n > 100)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 100\n";

    }while(n < 1 || n > 100);

    cout<<"\nCadastre os "<<n<<" alunos\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\n\nInforme o numero de matricula: ";
        cin>>A[i].matricula;

        cout<<"\nInforme o tipo de participacao (A, B, C ou D): ";
        cin>>A[i].tipo;

        cout<<"\nInforme se e socio da SBC ou nao (S - sim, N - nao): ";
        cin>>A[i].socio;
    }

    for(i = 0; i < n; i++)
    {
        switch (toupper(A[i].tipo))
        {
            case 'A':
                if(toupper(A[i].socio) == 'S')
                    A[i].valor = 15.00;
                else
                    A[i].valor = 30.00;

                QTDE[0]++;
            break;

            case 'B':
                if(toupper(A[i].socio) == 'S')
                    A[i].valor = 30.00;
                else
                    A[i].valor = 60.00;

                QTDE[1]++;
            break;

            case 'C':
                if(toupper(A[i].socio) == 'S')
                    A[i].valor = 45.00;
                else
                    A[i].valor = 90.00;

                QTDE[2]++;
            break;

            default:
                if(toupper(A[i].socio) == 'S')
                    A[i].valor = 50.00;
                else
                    A[i].valor = 100.00;

                QTDE[3]++;
        }

        arrecadacao += A[i].valor;

    }

    cout<<"\nDados do alunos inscritos no evento\n";
    for(i = 0; i < n; i++)
    {
        cout<<"\nMatricula: "<<A[i].matricula;
        cout<<"\nTipo de participacao: "<<A[i].tipo;
        cout<<"\nSocio da SBC: "<<A[i].socio;
        cout<<"\nValor a pagar: R$: "<<A[i].valor<<endl;

    }

    cout<<"\n\nInformacoes Gerais\n";
    cout<<"\nQtde de alunos inscritos no tipo A: "<<QTDE[0];
    cout<<"\nQtde de alunos inscritos no tipo B: "<<QTDE[1];
    cout<<"\nQtde de alunos inscritos no tipo C: "<<QTDE[2];
    cout<<"\nQtde de alunos inscritos no tipo D: "<<QTDE[3];
    cout<<"\nTotal arrecadado: R$: "<<arrecadacao<<endl<<endl;

    return 0;
}
