#include <iostream>
using namespace std;

void FUNC1(){
    int B;
    B = -100;
    cout<<"Valor de B na funcao FUNC1: "<<B<<endl;
}
void FUNC2(){
    int B;
    B = -200;
    cout<<"Valor de B na funcao FUNC2: "<<B<<endl;
}
int main(){
    int B;
    B = 10;
    cout << "Valor de B na main: " << B << endl;
    B = 20;
    FUNC1( );
    cout << "Valor de B na main: " << B << endl;
    B = 30;
    FUNC2( );
    cout << "Valor de B na main: " << B << endl;
}