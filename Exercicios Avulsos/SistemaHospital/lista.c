#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criarLista(StructPaciente *cabeca) {
    cabeca->prox = NULL;
}


void mostrarLista(StructPaciente *cabeca) {
    if (cabeca->prox != NULL) {
        StructPaciente *temp;

        temp = cabeca->prox;

        printf("LISTA DE ESPERA:\n\n");
        while(temp != NULL) {
            printf("Codigo: %i\nNome: %s\nPrioridade: %i\n--------------\n", temp->codigo, temp->nome, temp->classificacao);
            temp = temp->prox;
        }
    } else {
        printf("Lista de espera vazia!\n");
    }
}


int encontrarMeio(int qtdPacientes) {
    int meio;

    // Calculando com base na quantidade de registros o meio exato da lista
    if ((qtdPacientes % 2) == 0) { // Se for par, meio pode ser defindo com divisão por 2
        meio = qtdPacientes / 2;
    } else { // Se for impar, é preciso eliminar um registro
        meio = (qtdPacientes - 1) / 2;
    }

    return meio;
};


StructPaciente* inputPaciente(StructPaciente *cabeca) {
    StructPaciente *novo_registro;

    novo_registro = (StructPaciente *)malloc(sizeof(StructPaciente));

    printf("Digite o codigo do paciente: ");
    scanf("%i", &novo_registro->codigo);

    printf("Digite o nome do paciente: ");
    scanf("%s", &novo_registro->nome);

    novo_registro->prox = NULL;

    return novo_registro;
}

// INSERÇÕES
// Classificações : Inicio (2), meio (1) e no final (0)
void inserirInicio(StructPaciente *cabeca) {
    StructPaciente *novo_registro;

    novo_registro = inputPaciente(cabeca);

    novo_registro->classificacao = 2;
    novo_registro->prox = cabeca->prox;

    cabeca->prox = novo_registro;

    qtdPacientes++;
}


void inserirMeio(StructPaciente *cabeca) {
    int meio;
    StructPaciente *novo_registro, *temp;

    temp = cabeca;

    novo_registro = inputPaciente(cabeca);

    novo_registro->classificacao = 1;

    meio = encontrarMeio(qtdPacientes);

    // Andando até encontrar o registro do meio atual
    int i;
    for(i = 0; i < meio; i++) {
        temp = temp->prox;
    }

    novo_registro->prox = temp->prox;
    temp->prox = novo_registro;

    qtdPacientes++;
}


void inserirFim(StructPaciente *cabeca) {
    StructPaciente *novo_registro, *temp;

    novo_registro = inputPaciente(cabeca);

    novo_registro->classificacao = 3;

    if (cabeca->prox == NULL) {
        cabeca->prox = novo_registro;
    } else {
        temp = cabeca->prox;

        while (temp->prox != NULL) {
            temp = temp->prox;
        }

        temp->prox = novo_registro;
    }

    qtdPacientes++;
}

// REMOÇÕES
void removerInicio(StructPaciente *cabeca) {
    if (cabeca->prox == NULL) {
        printf("Lista de espera vazia!\n");
    } else {
        cabeca->prox = cabeca->prox->prox;
        printf("Paciente %s removido com sucesso!\n\n", cabeca->prox->nome);
        qtdPacientes--;
    }
}


void removerMeio(StructPaciente *cabeca) {
    if (cabeca->prox == NULL) {
        printf("Lista de espera vazia!\n");
    } else {
        int meio;

        meio = encontrarMeio(qtdPacientes);

        // Andando até encontrar o registro do meio atual
        int i;
        for(i = 0; i < meio; i++) {
            cabeca = cabeca->prox;
        }

        printf("Paciente %s removido com sucesso!\n\n", cabeca->prox->nome);
        cabeca->prox = cabeca->prox->prox;

        qtdPacientes--;
    }
}


void removerFim(StructPaciente *cabeca) {
    StructPaciente *ultimo, *penultimo;

    if (cabeca->prox == NULL) {
        printf("Lista de espera vazia!\n");
    } else {
        ultimo = cabeca->prox;
        penultimo = cabeca;

        while(ultimo->prox != NULL) {
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }

        penultimo->prox = NULL;
        printf("Paciente %s removido com sucesso!\n\n", cabeca->prox->nome);
    }

    qtdPacientes--;
}


void menu(StructPaciente *cabeca) {
    criarLista(&cabeca);

    int op;
    while (op != 7) {
        printf("0 - Registrar paciente (Prioridade Alta)\n");
        printf("1 - Registrar paciente (Prioridade Media)\n");
        printf("2 - Registrar paciente (Prioridade Baixa)\n");
        printf("------------------------------------------\n");
        printf("3 - Remover paciente (Prioridade Alta)\n");
        printf("4 - Remover paciente (Prioridade Media)\n");
        printf("5 - Remover paciente (Prioridade Baixa)\n");
        printf("------------------------------------------\n");
        printf("6 - Mostrar Lista\n");
        printf("7 - Sair\n");
        printf("------------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%i", &op);

        switch(op) {
        case 0:
            system("cls");
            inserirInicio(&cabeca);
            system("cls");
            break;
        case 1:
            system("cls");
            inserirMeio(&cabeca);
            system("cls");
            break;
        case 2:
            system("cls");
            inserirFim(&cabeca);
            system("cls");
            break;
        case 3:
            system("cls");
            removerInicio(&cabeca);
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            removerMeio(&cabeca);
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            removerFim(&cabeca);
            system("pause");
            system("cls");
            break;
        case 6:
            system("cls");
            mostrarLista(&cabeca);
            system("pause");
            system("cls");
            break;
        }
    }
}

