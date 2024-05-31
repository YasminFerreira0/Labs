/*Faca um programa contendo uma funcao para calcular e mostrar a media aritmetica de
dois numeros inteiros fornecidos por parametros. A leitura dos dados devera ser feita na
funcao principal.*/

#include <iostream>
using namespace std;

void media_a(int n1, int n2){
    float media;

    media = (n1 + n2)/2;

    cout<<"A media aritmetica e: "<<media<<endl;
}

int main (){
    int n1, n2;

    cout<<"Informe um numero interio: ";
    cin>>n1;

    cout<<"Inforeme outro numero inteiro: ";
    cin>>n2;

    media_a(n1,  n2);

    return 0;
}
