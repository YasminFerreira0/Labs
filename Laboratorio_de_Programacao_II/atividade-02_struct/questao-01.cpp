/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário, idade, sexo e número de filhos. Utilizando Struct, crie um programa que
leia os dados de 10 pessoas e, ao final, mostre:
    a) A média de salário das mulheres;
    b) A média de salário dos homens;
    c) A média do número de filhos;
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct dados {
    float salario;
    int idade;
    char sexo[15];
    int filhos;
};

int main (){
    dados pessoa[10];
    int i, contF = 0, contM = 0;
    float somaM = 0, somaF = 0, somaFilho = 0, mediaFilho = 0, mediaM = 0, mediaF = 0; 

    cout<<"informe os dados da pesquisa."<<endl;
    for (i=0; i<10; i++){
        cout<<"pessoa "<<i+1<<endl;

        cout<<"Informe o Salario: ";
        cin>>pessoa[i].salario;

        cout<<"Informe a idade: ";
        cin>>pessoa[i].idade;

        cout<<"Informe o sexo: ";
        fflush(stdin);
        gets(pessoa[i].sexo);

        cout<<"Informe o numero de filhos: ";
        cin>>pessoa[i].filhos;

        cout<<endl<<endl;
    }

    for(i=0; i<10; i++){
        somaFilho = somaFilho + pessoa[i].filhos;

        if(pessoa[i].sexo == "feminino"){
            contF ++;
            somaF = somaF + pessoa[i].salario;
        }
        if(pessoa[i].sexo == "masculino"){
            contM ++;
            somaM = somaM + pessoa[i].salario;
        }
    }

    mediaF = somaF / contF;
    mediaM = somaM / contM;
    mediaFilho = mediaFilho / 10;

    cout<<"A media de salario das mulheres e: "<<mediaF<<endl;
    cout<<"A media de salario dos homens e: "<<mediaM<<endl;
    cout<<"A media do numero de filhos e: "<<mediaFilho<<endl;
    

    return 0;
}
