typedef struct paciente {
    int cod;
    char nome[50];
    struct paciente * prox;
} SPaciente;

int tamanho;

void criarFila(SPaciente *cabeca);
void mostrarFila(SPaciente *cabeca);

void inserirInicio(SPaciente *cabeca);
void inserirMeio(SPaciente *cabeca);
void inserirFim(SPaciente *cabeca);

void removerInicio(SPaciente *cabeca);
void removerMeio(SPaciente *cabeca);
void removerFim(SPaciente *cabeca);

void mostrarMenu(SPaciente *cabeca);
