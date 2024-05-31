/*Faça um programa contendo uma função que
receba dois números positivos por parâmetro e
retorne a soma dos n números inteiros existentes
entre eles.*/

#include <iostream>
using namespace std;

int soma(int n1, int n2){
    int s;

    s = n1 + n2;

    return(s);
}

int main (){
    int n1, n2;
    cout<<"Informe um numero positivo: ";
    cin>>n1;

    cout<<"Informe outro numero: ";
    cin>>n2;

    cout<<"A soma dso valores e: "<<soma(n1, n2);
    
}