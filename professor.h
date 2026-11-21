#ifndef PROFESSOR_H
#define PROFESSOR_H

#define MAX_PROFESSORES 100

typedef struct {
    char nome[100];
    char cpf[15];
    char telefone[16];
    char email[100];
    char areas_atuacao[150];
} Professor;

typedef struct {
    Professor dados[MAX_PROFESSORES];
    int quantidade;
} TADProfessor;

/* Inicializa a quantidade de professores.
   lista: endereço do TAD.
   Retorna 1 se inicializar, 0 se inválido. */
int inicializarProfessores(TADProfessor *lista);

/* Insere um professor no final do array.
   lista: endereço do TAD.
   professor: dados do novo professor.
   Retorna 1 se conseguir, 0 em caso de erro. */
int inserirProfessor(TADProfessor *lista, Professor professor);

/* Busca um professor pelo CPF.
   lista: endereço do TAD.
   cpf: CPF procurado.
   Retorna a posição encontrada ou -1. */
int buscarProfessorCPF(const TADProfessor *lista, const char *cpf);

/* Remove um professor pelo CPF.
   lista: endereço do TAD.
   cpf: CPF procurado.
   Retorna 1 se remover, 0 caso contrário. */
int removerProfessor(TADProfessor *lista, const char *cpf);

/* Atualiza os dados de um professor.
   lista: endereço do TAD.
   cpf: CPF procurado.
   novo: novos dados do professor.
   Retorna 1 se atualizar, 0 caso contrário. */
int atualizarProfessor(TADProfessor *lista, const char *cpf, Professor novo);

/* Exibe todos os professores.
   lista: endereço constante do TAD.
   Não retorna valor. */
void listarProfessores(const TADProfessor *lista);

/* Limpa os registros cadastrados.
   lista: endereço do TAD.
   Não libera memória dinâmica.
   Não retorna valor. */
void liberarProfessores(TADProfessor *lista);

#endif
