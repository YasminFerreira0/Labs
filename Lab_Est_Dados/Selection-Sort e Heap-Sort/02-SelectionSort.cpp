#include <iostream>
#include <stdio.h>

using namespace std;


void SelectSort (int vet[], int n){
    int i, j, m, aux;
    for(i=0; i<n-1; i++){
        m = i;
        for(j=i+1; j<n; j++){
            if(vet[j] < vet[m]){
                m = j;
            }
        }
        // Trocar dois elementos em um vetor
        aux = vet[i];
        vet[i] = vet[m];
        vet[m] = aux;
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];

    cout << "Informe o vetor: ";
    for (int i = 0; i < n; ++i) {
        cin >> vet[i];
    }

    SelectSort(vet, n);

    cout << "Vetor ordenado:\n";
    for (int i = 0; i < n; ++i) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
