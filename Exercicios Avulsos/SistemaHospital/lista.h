typedef struct Paciente {
    int codigo;
    char nome[50];
    int classificacao;
    struct Paciente *prox;
} StructPaciente;

int qtdPacientes;

void criarLista(StructPaciente *cabeca);
void mostrarLista(StructPaciente *cabeca);

int encontrarMeio(int qtdPacientes);
StructPaciente* inputPaciente(StructPaciente *cabeca);

void inserirInicio(StructPaciente *cabeca);
void inserirMeio(StructPaciente *cabeca);
void inserirFim(StructPaciente *cabeca);

void removerInicio(StructPaciente *cabeca);
void removerMeio(StructPaciente *cabeca);
void removerFim(StructPaciente *cabeca);

void menu(StructPaciente *cabeca);
