/*Faça um programa para ler os dados (nome, salário, estado civil, sexo, número de
dependentes, cidade e estado de residência) dos funcionários de uma empresa e mostrar
uma listagem de todos os dados dos funcionários(as) CASADOS(AS), residentes no RS
e com SALÁRIO acima de R$ 1.500,00. Cadastrar no máximo 200 funcionários.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct dados
{
    char nome[50], ec[20], sexo[15], cid[50], uf[3];
    float sal;
    int nd;
};

int main(){
    dados func[200];
    int i, cont;

    do{
        cout<<"Quantos funcionarios deseja cadastrar? (maximo 200): ";
        cin>>cont;
        if(cont < 1 || cont > 200)
            cout<<"\nValor incorreto! Informe um valor no intervalo de 1 a 200\n";
    }while(cont < 1 || cont > 200);

    cout<<"Informe os dados dos funcionarios"<<endl;

    for (i=0; i<cont; i++){
        cout<<"Funcionario "<<i +1<<": "<<endl;
        cout<<"Nome: ";
        fflush(stdin);
        gets(func[i].nome);

        cout<<"Salario: ";
        cin>>func[i].sal;

        cout<<"Estado Civil: ";
        fflush(stdin);
        gets(func[i].ec);

        cout<<"Sexo (M, F): ";
        fflush(stdin);
        gets(func[i].sexo);

        cout<<"Numero de dependencias: ";
        cin>>func[i].nd;

        cout<<"Cidade: ";
        fflush(stdin);
        gets(func[i].cid);

        cout<<"Estado: ";
        fflush(stdin);
        gets(func[i].uf);

        cout<<endl<<endl;
    }

    cout<<"funcionarios(as) CASADOS(AS), residentes no RS e com salario acima de R$ 1.500,00."<<endl;

    for(i=0; i<cont; i++){
        if(strcmp(func[i].ec, "casado") == 0 && strcmp(func[i].uf, "RS") == 0 && func[i].sal > 1500){
            cout<<"Funcionario"<<endl;

            cout<<"Nome: "<<func[i].nome<<endl;
            cout<<"Salario: "<<func[i].sal<<endl;
            cout<<"Estado Civil: "<<func[i].ec<<endl;
            cout<<"Sexo (M, F): "<<func[i].sexo<<endl;
            cout<<"Numero de dependencias: "<<func[i].nd<<endl;
            cout<<"Cidade: "<<func[i].cid<<endl;
            cout<<"Estado: "<<func[i].uf<<endl;

            cout<<endl;
        }
    }
    return 0;
}

