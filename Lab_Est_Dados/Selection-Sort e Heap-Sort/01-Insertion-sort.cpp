#include <iostream>
#include <stdio.h>

using namespace std;

void insertionSort(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    cout<<"Informe o tramanho do vetor: ";
    cin>>n;

    int arr[n];


    cout << "Informe a array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << endl << endl;

    insertionSort(arr, n);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
