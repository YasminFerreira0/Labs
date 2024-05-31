#include <iostream>

using namespace std;

void celsius(float fahr);
int main(){
    float f;
    cout<<"\n Digite a temperatura em graus Fahrenheit: \n";
    cin>>f;
    celsius(f);
    return 0;
}

void celsius(float fahr){
    float c;
    c = (fahr - 32) * 5/9;
    cout<<"\n Celsius = "<<c;
}