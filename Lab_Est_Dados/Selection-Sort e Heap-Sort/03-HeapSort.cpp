#include <iostream>
#include <stdio.h>

using namespace std;

void heapify(int vet[], int n, int i){
    int maior, left, right;

    maior = i;
    left = 2*i+1;
    right = 2*i+2;

    if(left<n && vet[left]>vet[maior]){
        maior = left;
    }

    if(right<n && vet[right]>vet[maior]){
        maior = right;
    }

    if(maior!=i){
        int aux = vet[i];
        vet[i]=vet[maior];
        vet[maior]=aux;

        heapify(vet,n,maior);
    }

}

void heapSort(int vet[], int n){
    for(int i = n/2-1;i>=0;i--){
        heapify(vet, n, i);
    }

    for(int i = n-1; i>=0; i--){
        int aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;

        heapify(vet, i, 0);
    }
}


int main() {

    int n;

    cout<<"Informe o tamanho do vetor: ";
    cin>>n;

    int vet[n];

    cout<<"Informe o vetor: ";
    for (int i = 0; i < n; i++){
        cin>> vet[i];
    }
    cout << endl;

    heapSort(vet, n);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; ++i){
        cout << vet[i] << " ";
    }
    cout << endl;
    return 0;
}
