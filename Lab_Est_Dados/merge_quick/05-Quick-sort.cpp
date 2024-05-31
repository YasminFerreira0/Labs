#include <iostream>
#include <stdio.h>

using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] <= pivot) {
            i++;
        
            int aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
        }
    }
        
        int aux = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = aux;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

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

