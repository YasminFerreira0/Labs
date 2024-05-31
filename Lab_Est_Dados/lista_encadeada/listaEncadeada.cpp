/*Faça um programa na linguagem C/C++ que implemente uma Lista Simplesmente Encadeada, de modo que contemple as operações de busca, inserção (inicio da lista) e remoção de elementos na Lista. O programa deverá conter um menu para o que o usuário escolha as operações a serem realizadas. Após cada operação a Lista deverá ser apresentada na tela. No encerramento da execução do programa toda a lista deve ser desalocada.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int item;
typedef struct no {
    item info;
    struct no* prox;
} tplista;

tplista* lista = nullptr;

tplista* aloca() {
    tplista* pt;
    pt = (tplista*) malloc(sizeof(tplista));
    return pt;
}

int vazia(tplista* t) {
    if (t == nullptr)
        return 1;
    else
        return 0;
}

void listagem(tplista* t) {
    tplista* p;
    for (p = t; p != nullptr; p = p->prox)
        cout << "Info: " << p->info << endl;
}

tplista* busca(tplista* t, item valor) {
    tplista* p = t;
    while ((p != nullptr) && (p->info != valor))
        p = p->prox;
    return p;
}

int insere(tplista** t, item valor) {
    tplista* novo;
    novo = aloca();
    if (!novo)
        return 0;
    else {
        novo->info = valor;
        novo->prox = *t;
        *t = novo;
        return 1;
    }
}

int retira(tplista** t, item e) {
    tplista* ant = nullptr, * p = *t;
    while (p != nullptr && p->info != e) {
        ant = p;
        p = p->prox;
    }
    if (p == nullptr)
        return 0;
    else {
        if (ant == nullptr)
            *t = p->prox;
        else
            ant->prox = p->prox;
        free(p);
        return 1;
    }
}

void destroi(tplista* t) {
    tplista* p = t, * q;
    while (p != nullptr) {
        q = p->prox;
        free(p);
        p = q;
    }
}

void menu() {
    cout << "Menu:" << endl;
    cout << "1. Inserir no início da lista" << endl;
    cout << "2. Buscar elemento na lista" << endl;
    cout << "3. Remover elemento da lista" << endl;
    cout << "4. Exibir lista" << endl;
    cout << "5. Sair" << endl;
}


int main() {
    int choice, value;

    while (true) {
        cout<<endl;
        menu();
        cout<<endl;
        cout << "Escolha uma operacao: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
            case 1:
                cout << "Digite o valor a ser inserido: ";
                cin >> value;
                if (insere(&lista, value))
                    cout << "Elemento inserido com sucesso." << endl;
                else
                    cout << "Falha na insercao." << endl;
                listagem(lista);
                break;

            case 2:
                cout << "Digite o valor a ser buscado: ";
                cin >> value;
                if (busca(lista, value) != nullptr)
                    cout << "Elemento encontrado na lista." << endl;
                else
                    cout << "Elemento nao encontrado na lista." << endl;
                break;

            case 3:
                cout << "Digite o valor a ser removido: ";
                cin >> value;
                if (retira(&lista, value))
                    cout << "Elemento removido com sucesso." << endl;
                else
                    cout << "Elemento nao encontrado na lista." << endl;
                listagem(lista);
                break;

            case 4:
                listagem(lista);
                break;

            case 5:
                destroi(lista);
                cout << "Programa encerrado. Lista desalocada." << endl;
                return 0;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    }

    return 0;
}

