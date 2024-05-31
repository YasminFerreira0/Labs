/*Faça um programa para ler um valor real representando a nota
de um aluno e, em seguida, classificar com os conceitos Bom,
Regular ou Ruim.

    Nota Conceito
    de 8,0 à 10,0       Bom
    de 5,0 à 7,9        Regular
    de 0,0 à 4,9        Ruim
*/

#include <iostream>
using namespace std;
int main ()
{
    float nota;

    cout<<"Informe a nota do aluno: ";
    cin>>nota;

    if (nota < 4.9){
        cout<<"Nota - Conceito: Ruim."<<endl;
    }else{
        if (nota < 7.9){
            cout<<"Nota - Conceito: Regular."<<endl;
        }else{
            cout<<"Nota - Conceito: Bom."<<endl;
        }
    }
    return 0;
}
