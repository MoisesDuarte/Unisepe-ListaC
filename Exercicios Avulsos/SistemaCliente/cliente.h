typedef struct Cliente{
    int codigo;
    struct Cliente *prox;
} StructCliente;

void criarPilha(StructCliente *cabeca);
void inserirPilha(StructCliente *cabeca);
void removerPilha(StructCliente *cabeca);
void mostrarPilha(StructCliente *cabeca);
