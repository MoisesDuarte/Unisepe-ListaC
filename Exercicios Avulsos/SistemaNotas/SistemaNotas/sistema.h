typedef struct Aluno {
    char nome[100];
    float nota1;
    float nota2;
    int periodo;
    int ra;
    struct Aluno *prox;
} AlunoStruct;

void criarFila(AlunoStruct *aluno);
void mostrarFila(AlunoStruct *aluno);
void inserir(AlunoStruct *aluno);
void remover(AlunoStruct *aluno);
