#include <stdlib.h>
#include <stdio.h>
#include "cliente.h"

void criarPilha(StructCliente *cabeca) {
    cabeca->codigo = NULL;
    cabeca->prox = NULL;
}

void inserirPilha(StructCliente *cabeca) {
    StructCliente *novo_registro, *temp;
    novo_registro = (StructCliente *)malloc(sizeof(StructCliente));

    printf("Digite o codigo do cliente: ");
    scanf("%i", &novo_registro->codigo);

    novo_registro->prox = NULL;

    if (cabeca->prox == NULL) {
        cabeca->prox = novo_registro;
    } else {
        temp = cabeca->prox;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }

        temp->prox = novo_registro;
    }
}

void removerPilha(StructCliente *cabeca) {
    if (cabeca->prox == NULL) {
        printf("Pilha Vazia!\n\n");
    } else {
        StructCliente *ultimo_elemento, *penultimo_elemento;

        ultimo_elemento = cabeca->prox;
        penultimo_elemento = cabeca;

        while(ultimo_elemento->prox != NULL) {
            penultimo_elemento = ultimo_elemento;
            ultimo_elemento = ultimo_elemento->prox;
        }

        penultimo_elemento->prox = NULL;
        printf("Cliente %i removido\n", ultimo_elemento->codigo);
    }
}

void mostrarPilha(StructCliente *cabeca) {
    if (cabeca->prox == NULL) {
        printf("Pilha vazia!\n\n");
    } else {
        StructCliente *temp;
        temp = cabeca->prox;

        printf("CLIENTES:\n");
        while(temp != NULL) {
            printf("Codigo: %i\n", temp->codigo);
            temp = temp->prox;
        }
    }
}

