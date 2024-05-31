#include <iostream>
#include <cstdlib>

using namespace std;

// Tamanho da tabela hash
const int TABLE_SIZE = 10;

// Estrutura para Hashing Encadeamento Fechado
struct Node {
    int key;
    Node* next;
};

// Tabela de Hashing Encadeamento Fechado
Node* chainingTable[TABLE_SIZE];

// Funções para Hashing Encadeamento Fechado
void initChainingTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        chainingTable[i] = nullptr;
    }
}

void chainingInsert(int key) {
    int index = key % TABLE_SIZE;
    Node* newNode = new Node{key, chainingTable[index]};
    chainingTable[index] = newNode;
}

bool chainingSearch(int key, int& comparisons) {
    int index = key % TABLE_SIZE;
    comparisons = 0;
    Node* current = chainingTable[index];
    while (current) {
        comparisons++;
        if (current->key == key) return true;
        current = current->next;
    }
    return false;
}

bool chainingRemove(int key) {
    int index = key % TABLE_SIZE;
    Node* current = chainingTable[index];
    Node* prev = nullptr;
    while (current) {
        if (current->key == key) {
            if (prev) {
                prev->next = current->next;
            } else {
                chainingTable[index] = current->next;
            }
            delete current;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

void displayChainingTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        cout << i << ": ";
        Node* current = chainingTable[i];
        while (current) {
            cout << current->key << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
}

// Tabela de Hashing Linear
int linearTable[TABLE_SIZE];
bool linearOccupied[TABLE_SIZE];

// Funções para Hashing Linear
void initLinearTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        linearTable[i] = -1;
        linearOccupied[i] = false;
    }
}

void linearInsert(int key) {
    int index = key % TABLE_SIZE;
    int original_index = index;
    int collisions = 0;

    while (linearOccupied[index]) {
        index = (index + 1) % TABLE_SIZE;
        collisions++;
        if (index == original_index) {
            cout << "Table is full, cannot insert " << key << endl;
            return;
        }
    }

    linearTable[index] = key;
    linearOccupied[index] = true;

    cout << "Inserted key " << key << " in Linear Hashing with " << collisions << " collisions" << endl;
}

bool linearSearch(int key, int& comparisons) {
    int index = key % TABLE_SIZE;
    int original_index = index;
    comparisons = 0;

    while (linearOccupied[index]) {
        comparisons++;
        if (linearTable[index] == key) return true;
        index = (index + 1) % TABLE_SIZE;
        if (index == original_index) return false;
    }
    return false;
}

bool linearRemove(int key) {
    int index = key % TABLE_SIZE;
    int original_index = index;

    while (linearOccupied[index]) {
        if (linearTable[index] == key) {
            linearTable[index] = -1;
            linearOccupied[index] = false;
            return true;
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == original_index) return false;
    }
    return false;
}

void displayLinearTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        if (linearOccupied[i])
            cout << i << ": " << linearTable[i] << endl;
        else
            cout << i << ": nullptr" << endl;
    }
}

void showMenu() {
    cout << "Menu:" << endl;
    cout << "1. Inserir" << endl;
    cout << "2. Buscar" << endl;
    cout << "3. Remover" << endl;
    cout << "4. Mostrar" << endl;
    cout << "5. Encerrar" << endl;
    cout << "Escolha uma opcao: ";
}

int main() {
    initChainingTable();
    initLinearTable();

    while (true) {
        showMenu();
        int choice;
        cin >> choice;

        if (choice == 5) break;

        int key;
        switch (choice) {
            case 1:
                cout << "Digite o valor para inserir: ";
                cin >> key;
                chainingInsert(key);
                linearInsert(key);
                break;
            case 2:
                cout << "Digite o valor para buscar: ";
                cin >> key;
                int comparisons;

                if (chainingSearch(key, comparisons))
                    cout << "Valor encontrado na tabela de Hashing Encadeamento Fechado com " << comparisons << " comparacoes." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Encadeamento Fechado." << endl;

                if (linearSearch(key, comparisons))
                    cout << "Valor encontrado na tabela de Hashing Linear com " << comparisons << " comparacoes." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Linear." << endl;
                break;
            case 3:
                cout << "Digite o valor para remover: ";
                cin >> key;

                if (chainingRemove(key))
                    cout << "Valor removido da tabela de Hashing Encadeamento Fechado." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Encadeamento Fechado." << endl;

                if (linearRemove(key))
                    cout << "Valor removido da tabela de Hashing Linear." << endl;
                else
                    cout << "Valor nao encontrado na tabela de Hashing Linear." << endl;
                break;
            case 4:
                cout << "Escolha a tabela para mostrar (1: Encadeamento Fechado, 2: Hashing Linear): ";
                int tableChoice;
                cin >> tableChoice;
                if (tableChoice == 1) {
                    displayChainingTable();
                } else if (tableChoice == 2) {
                    displayLinearTable();
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
