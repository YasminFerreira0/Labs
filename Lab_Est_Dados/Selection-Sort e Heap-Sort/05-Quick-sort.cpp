#include <iostream>
#include <stdio.h>

using namespace std;

// Função para trocar dois elementos de posição
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para encontrar o pivô correto no array e colocá-lo na posição correta
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivô
    int i = (low - 1); // índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++; // incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função principal do algoritmo Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encontra o pivô correto e coloca na posição correta
        int pi = partition(arr, low, high);

        // Separadamente ordena os elementos antes e depois do pivô
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main() {
    
    int n;

    cout<<"Informe o tamanho do vetor: ";
    cin>>n;

    int arr[n];

    cout<<"Informe o vetor: ";
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    cout << endl;
    quickSort(arr, 0, n - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

