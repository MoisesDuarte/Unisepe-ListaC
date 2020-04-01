#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"

int main() {
    StructCliente cabeca;
    criarPilha(&cabeca);

    int op;
    while (op != 4) {
        printf("1 - Inserir cliente\n2 - Remover Cliente\n3 - Mostrar Pilha\n4 - Sair\nDigite a opcao: ");
        scanf("%i", &op);

        switch(op) {
        case 1:
            system("cls");
            inserirPilha(&cabeca);
            system("cls");
            break;
        case 2:
            system("cls");
            removerPilha(&cabeca);
            break;
        case 3:
            system("cls");
            mostrarPilha(&cabeca);
            break;
        }
    }

}
