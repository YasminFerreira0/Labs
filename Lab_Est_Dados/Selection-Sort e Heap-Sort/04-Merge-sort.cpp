#include <iostream>
#include <stdio.h>


using namespace std;

// Função para mesclar duas metades ordenadas do vetor
void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Criando vetores temporários
    int L[n1], R[n2];

    // Copiando dados para os vetores temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Mesclando os vetores temporários de volta para arr[left..right]
    int i = 0; // Índice inicial do primeiro subvetor
    int j = 0; // Índice inicial do segundo subvetor
    int k = left; // Índice inicial do subvetor mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiando os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função recursiva para ordenar o vetor usando o Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Calcula o ponto médio
        int middle = left + (right - left) / 2;

        // Ordena a primeira metade
        mergeSort(arr, left, middle);
        // Ordena a segunda metade
        mergeSort(arr, middle + 1, right);

        // Mescla as duas metades ordenadas
        merge(arr, left, middle, right);
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

    mergeSort(arr, 0, n - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
    
