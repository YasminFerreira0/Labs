/*Faça um programa para ler a quantidade atual em estoque, a
quantidade máxima em estoque e a quantidade mínima em
estoque de um produto. O programa deverá calcular e mostrar a
quantidade média ((quantidade média = quantidade máxima +
quantidade mínima)/2). Se a quantidade em estoque for maior ou
igual a quantidade média, o programa deverá escrever também a
mensagem “Não efetuar compra”, caso contrário, deverá
escrever a mensagem “Efetuar compra”.*/

#include <iostream>
using namespace std;
int main ()
{
    int qAtual, qMaxima, qMinima;
    float qMedia;

    cout<<"Informe a quantidade atual em estoque: ";
    cin>>qAtual;

    cout<<"Informe a quantidade maxima do estoque: ";
    cin>>qMaxima;

    cout<<"Informe a quantidade minina do estoque: ";
    cin>>qMinima;

    qMedia = (qMaxima + qMinima)/2;

    cout<<"A quantidade media do estoque e: "<<qMedia<<endl;
    if (qAtual >= qMedia){
        cout<<"Nao efetual compra.";
    }else{
        cout<<"Efetual compra.";
    }

    return 0;
}
