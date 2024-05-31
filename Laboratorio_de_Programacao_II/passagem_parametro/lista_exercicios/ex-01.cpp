/*Elabore um programa contendo uma função que receba as três notas de um aluno como
parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das
notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. A média
calculada deverá ser devolvida ao programa principal para, então, ser mostrada.*/

#include <iostream>
#include <string.h>
using namespace std;

float media(float n1, float n2, float n3, char tp);

int main(){
    float n1, n2, n3, m;
    char tp;

    cout<<"Informe a primeira nota: ";
    cin>>n1;

    cout<<"Informe a segunda nota: ";
    cin>>n2;

    cout<<"Informe a terceira nota: ";
    cin>>n3;

    cout<<endl<<"Informe o tipo de media. \nA - media Aritmetica. \nP - media ponderada."<<endl;
    cin>>tp;
    m = media(n1, n2, n3, tp);

    cout<<"A media das notas e: "<<m<<endl;

}

float media(float n1, float n2, float n3, char tp){
    float media;

    if(toupper(tp) == 'A'){
        media = (n1 + n2 + n3)/3;
    }else{
        if(toupper(tp) == 'P'){
            media = (n1*5 + n2*3 + n3*2)/3;
        }else{
            cout<<"As letras informadas devem ser A ou P."<<endl;
        }
    }
    return(media);
}