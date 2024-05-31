#include <iostream>
using namespace std;

void SOMA(float a, int b){
    float result;
    result = a+b;
    cout << "A soma de " << a << " com " << b << " eh " << result;
    cout << endl;
}

int main(){
    int a = 10;
    float b = 12.3;
    SOMA(b, a);
}