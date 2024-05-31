#include <iostream>
#include <stdio.h>

using namespace std;

void enqueue(int vetor[], int &frente, int &tras, int capacidade, int elemento) {
    if (tras == capacidade - 1) {
        cout << "A fila está cheia!" << endl;
        return;
    }
    tras++;
    vetor[tras] = elemento;
    if (frente == -1) {
        frente = 0; // Se a fila estava vazia, agora a frente aponta para o primeiro elemento
    }
    cout << "Elemento inserido: " << elemento << endl;
}

void dequeue(int vetor[], int &frente, int &tras) {
    if (frente == -1) {
        cout << "A fila esta vazia!" << endl;
        return;
    }
    int removido = vetor[frente];
    if (frente == tras) {
        frente = tras = -1; // Se a fila tinha apenas um elemento, agora está vazia
    } else {
        frente++; // Movendo o ponteiro da frente para o próximo elemento
    }
    cout << "Elemento removido: " << removido << endl;
}

void mostrar(int vetor[], int frente, int tras) {
    if (frente == -1) {
        cout << "A fila esta vazia!" << endl;
        return;
    }
    cout << "Elementos na fila: ";
    for (int i = frente; i <= tras; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Informe o tamanho da fila: ";
    cin >> n;

    int vetor[n];
    int frente = -1;
    int tras = -1;

    int escolha;
    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir elemento\n";
        cout << "2. Remover elemento\n";
        cout << "3. Mostrar fila\n";
        cout << "4. Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                int elemento;
                cout << "Informe o elemento a ser inserido: ";
                cin >> elemento;
                enqueue(vetor, frente, tras, n, elemento);
                break;
            case 2:
                dequeue(vetor, frente, tras);
                break;
            case 3:
                mostrar(vetor, frente, tras);
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
