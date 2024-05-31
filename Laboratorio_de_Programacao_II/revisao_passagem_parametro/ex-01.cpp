/*Faça um programa contendo uma função, onde passado um número n como parâmetro,
calcula e retorna o valor de n elevado a terceira potência (n3). O valor n deve ser
informado pelo usuário na função principal, assim como o resultado também deverá ser
mostrado na função principal.*/

#include <iostream>
#include <string.h>

using namespace std;

int cubo(int x);

int main(){
    int n, c;

    cout<<"Informe um numero: ";
    cin>>n;

    c = cubo(n);

    cout<<"A terceira potencia do numro informado e: "<<c<<endl;

    return 0;
}

int cubo(int x){
    int c;

    c = x*x*x;

    return c;
}

