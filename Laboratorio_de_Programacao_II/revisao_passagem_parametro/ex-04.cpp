/*Faça um programa contendo uma função para receber, por parâmetro, três valores
inteiros informados no módulo principal. A função deverá então determinar e retornar
o valor intermediário dos três valores informados. O valor intermediário deverá ser
apresentado na função principal.*/

#include <iostream>
#include <string.h>

using namespace std;

int intermediario(int x, int y, int z);

int main(){
    int n1, n2, n3;

    cout<<"Informe tres numeros inteiros."<<endl;
    cout<<"numero 1: ";
    cin>>n1;
    cout<<"numero 2: ";
    cin>>n2;
    cout<<"numero 3: ";
    cin>>n3;

    cout<<endl<<"O numero intermediario entre os numeros e :"<<intermediario(n1, n2, n3)<<endl;

    return 0;
}

int intermediario(int x, int y, int z){

    if ((x >= y && x <= z) || (x <= y && x >= z)) {
        return x;
    } else if ((y >= x && y <= z) || (y <= x && y >= z)) {
        return y;
    } else {
        return z;
    }

}

