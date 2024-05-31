#include <iostream>
#include <stdio.h>

using namespace std;

void push(int vetor[], int &topo, int capacidade, int elemento) {
    if (topo == capacidade - 1) {
        cout << "A pilha esta cheia!" << endl;
        return;
    }
    topo++;
    vetor[topo] = elemento;
    cout << "Elemento inserido: " << elemento << endl;
}

void pop(int vetor[], int &topo) {
    if (topo == -1) {
        cout << "A pilha esta vazia!" << endl;
        return;
    }
    int removido = vetor[topo];
    topo--;
    cout << "Elemento removido: " << removido << endl;
}

void mostrar(int vetor[], int topo) {
    if (topo == -1) {
        cout << "A pilha esta vazia!" << endl;
        return;
    }
    cout << "Elementos na pilha: ";
    for (int i = 0; i <= topo; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Informe o tamanho da pilha: ";
    cin >> n;

    int vetor[n];
    int topo = -1;

    int escolha;
    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir elemento\n";
        cout << "2. Remover elemento\n";
        cout << "3. Mostrar pilha\n";
        cout << "4. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                int elemento;
                cout << "Informe o elemento a ser inserido: ";
                cin >> elemento;
                push(vetor, topo, n, elemento);
                break;
            case 2:
                pop(vetor, topo);
                break;
            case 3:
                mostrar(vetor, topo);
                break;
            case 4:
                cout << "Encerrando o programa...\n";
                break;
            default:
                cout << "Escolha invalida! Tente novamente.\n";
        }
    } while (escolha != 4);
    
    delete[] vetor;

    return 0;
}
