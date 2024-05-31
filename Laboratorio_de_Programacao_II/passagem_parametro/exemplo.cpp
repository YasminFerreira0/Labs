#include <iostream>
#include <stdio.h>

using namespace std;

int multiplica (int x){
    x = x * x;
    return x;
}

int main(){
    int t=10;
    cout << multiplica(t) << " - " << t << endl; // saída: 100 - 10
}