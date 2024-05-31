#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    FILE *arq;
    char nome_A[40], busca_p[20], Arquivo[100];
    int i, opc, numLinhas,  numPalavras;

    do{
        cout<<endl<<"Menu: "<<endl;
        cout<< "1. Leitura de Arquivo de Texto"<<endl;
        cout<< "2. Contagem de Linhas e Palavras"<<endl;
        cout<< "3. Busca por Palavra-chave"<<endl;
        cout<< "4. Sair"<<endl;


        cout<< "Escolha uma opcao: ";
        cin>> opc;

        cout<<endl<<endl;

        switch (opc) {
            /*Leitura de Arquivo de Texto: Implementar a leitura e exibição do conteúdo de um arquivo de texto. O usuário deve fornecer o nome do arquivo a ser lido.*/

            case 1:
                cout<<"Digite o nome do arquivo: ";
                cin>>nome_A;

                arq = fopen(nome_A, "r");

                cout<<endl<<endl;

                if(arq == NULL){
                    cout<<"Erro ao abrir o arquivo de leitura."<<endl;
                }else{
                 
                    while(fgets(Arquivo, 100, arq)!=NULL){
                        cout<<Arquivo;
                    }
                    fclose(arq);
                }
            break;


            /*Contagem de Linhas e Palavras: Oferecer a funcionalidade de contar o número total de linhas e palavras no arquivo lido.*/

            case 2:
                cout<<"Digite o nome do arquivo: ";
                cin>>nome_A;

                arq = fopen(nome_A, "r");

                cout<<endl<<endl;

                if(arq == NULL){
                    cout<<"Erro ao abrir o arquivo de leitura."<<endl;
                }else{
                    numLinhas = 0;
                    numPalavras = 0;

                    while(fgets(Arquivo, 100, arq)!=NULL){
                        numLinhas++;     

                        for (int i = 0; Arquivo[i] != '\0'; i++) {
                            if (Arquivo[i] == ' ' || Arquivo[i] == '\n' || Arquivo[i] == '\t') {
                                numPalavras++;
                            }
                        }
                    }

                    cout<<"Numero total de linhas: "<<numLinhas<<endl;
                    cout<<"Numero total de palavras: "<<numPalavras<<endl;

                    fclose(arq);
                }
            break;


            /*Busca por Palavra-chave: Permitir que o usuário busque uma palavra específica no arquivo e exiba as linhas em que ela aparece.*/

            case 3:
                cout<<"Digite o nome do arquivo: ";
                cin>>nome_A;

                arq = fopen(nome_A, "r");

                if(arq == NULL){
                    cout<<"Erro ao abrir o arquivo de leitura."<<endl;
                }else{
                    cout << "Digite a palavra-chave: ";
                    cin >> busca_p;

                    cout<<endl<<endl;

                    numLinhas = 0;

                    cout<<"Linhas em que a palavra-chave '" <<busca_p<<"' foi encontrada:"<<endl<<endl;
                    
                    while(fgets(Arquivo, 100, arq)!=NULL){
                        numLinhas++;

                        if(strstr(Arquivo, busca_p) != NULL){

                            cout<<"Linha "<<numLinhas << ": "<<Arquivo<<endl;
                        }
                    }

                    fclose(arq);
                }
                break;

                case 4: 
                    cout<<"Programa Encerado!"<<endl<<endl;
                break;
        }
    }while(opc != 4);

}