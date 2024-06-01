#include <iostream>
#include <cstdlib>

using namespace std;

const int TAMANHO = 10;

struct Node {
    int key;
    Node* next;
};

Node* encadeamento[TAMANHO];

void iniciarEncadeamento() {
    for (int i = 0; i < TAMANHO; ++i) {
        encadeamento[i] = nullptr;
    }
}

void insercaoEncadeamento(int key) {
    int index = key % TAMANHO;
    Node* newNode = new Node{key, encadeamento[index]};
    encadeamento[index] = newNode;
}

bool buscaEncadeamento(int key, int& comparacoes) {
    int index = key % TAMANHO;
    comparacoes = 0;
    Node* current = encadeamento[index];
    while (current) {
        comparacoes++;
        if (current->key == key) return true;
        current = current->next;
    }
    return false;
}

bool remocaoEncadeamento(int key) {
    int index = key % TAMANHO;
    Node* current = encadeamento[index];
    Node* prev = nullptr;
    while (current) {
        if (current->key == key) {
            if (prev) {
                prev->next = current->next;
            } else {
                encadeamento[index] = current->next;
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

void mostraEncadeamento() {
    for (int i = 0; i < TAMANHO; ++i) {
        cout << i << ": ";
        Node* current = encadeamento[i];
        while (current) {
            cout << current->key << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
}

int linearTable[TAMANHO];
bool linearOccupied[TAMANHO];

void iniciarLinear() {
    for (int i = 0; i < TAMANHO; ++i) {
        linearTable[i] = -1;
        linearOccupied[i] = false;
    }
}

void insercaoLinear(int key) {
    int index = key % TAMANHO;
    int original_index = index;
    int collisions = 0;

    while (linearOccupied[index]) {
        index = (index + 1) % TAMANHO;
        collisions++;
        if (index == original_index) {
            cout << "A tabela esta cheia." << key << endl;
            return;
        }
    }

    linearTable[index] = key;
    linearOccupied[index] = true;

    cout << "Insercao da chave  " << key << " na Hashing Linear com " << collisions << " colisoes." << endl;
}

bool buscaLinear(int key, int& comparacoes) {
    int index = key % TAMANHO;
    int original_index = index;
    comparacoes = 0;

    while (linearOccupied[index]) {
        comparacoes++;
        if (linearTable[index] == key) return true;
        index = (index + 1) % TAMANHO;
        if (index == original_index) return false;
    }
    return false;
}

bool remocaoLinear(int key) {
    int index = key % TAMANHO;
    int original_index = index;

    while (linearOccupied[index]) {
        if (linearTable[index] == key) {
            linearTable[index] = -1;
            linearOccupied[index] = false;
            return true;
        }
        index = (index + 1) % TAMANHO;
        if (index == original_index) return false;
    }
    return false;
}

void mostrarLinear() {
    for (int i = 0; i < TAMANHO; ++i) {
        if (linearOccupied[i])
            cout << i << ": " << linearTable[i] << endl;
        else
            cout << i << ": nullptr" << endl;
    }
}

void mostrarMenu() {
    cout << "Menu:" << endl;
    cout << "1. Inserir" << endl;
    cout << "2. Buscar" << endl;
    cout << "3. Remover" << endl;
    cout << "4. Mostrar" << endl;
    cout << "5. Encerrar" << endl;
    cout <<endl;
    cout << "Escolha uma opcao: ";
}

int main() {
    iniciarEncadeamento();
    iniciarLinear();

    while (true) {
        mostrarMenu();
        int opcao;
        cin >> opcao;

        if (opcao == 5) break;

        int key;
        switch (opcao) {
            case 1:
                cout << "Digite o valor para inserir: ";
                cin >> key;
                insercaoEncadeamento(key);
                insercaoLinear(key);
                break;
            case 2:
                cout << "Digite o valor para buscar: ";
                cin >> key;
                int comparacoes;

                if (buscaEncadeamento(key, comparacoes))
                    cout << "Valor encontrado na tabela de Hashing Encadeamento Fechado com " << comparacoes << " comparacoes." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Encadeamento Fechado." << endl;

                if (buscaLinear(key, comparacoes))
                    cout << "Valor encontrado na tabela de Hashing Linear com " << comparacoes << " comparacoes." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Linear." << endl;
                break;
            case 3:
                cout << "Digite o valor para remover: ";
                cin >> key;

                if (remocaoEncadeamento(key))
                    cout << "Valor removido da tabela de Hashing Encadeamento Fechado." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Encadeamento Fechado." << endl;

                if (remocaoLinear(key))
                    cout << "Valor removido da tabela de Hashing Linear." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Linear." << endl;
                break;
            case 4:
                cout << "Escolha a tabela para mostrar (1: Encadeamento Fechado, 2: Hashing Linear): ";
                int tableOpcao;
                cin >> tableOpcao;
                if (tableOpcao == 1) {
                    mostraEncadeamento();
                } else if (tableOpcao == 2) {
                    mostrarLinear();
                } else {
                    cout << "Escolha invalida." << endl;
                }
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    }

    return 0;
}
