#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    char nome[100];
    char cpf[15];
    char data_nascimento[11];
    char telefone[16];
    char email[100];
    char endereco[150];
} Aluno;

typedef struct {
    Aluno *dados;
    int quantidade;
    int capacidade;
} TADAluno;

/* Inicializa o array.
   lista: endereço do TAD.
   capacidade: capacidade inicial.
   Retorna 1 se conseguir, 0 em caso de erro. */
int inicializarAlunos(TADAluno *lista, int capacidade);

/* Insere um aluno no final do array.
   lista: endereço do TAD.
   aluno: dados do novo aluno.
   Retorna 1 se conseguir, 0 em caso de erro. */
int inserirAluno(TADAluno *lista, Aluno aluno);

/* Busca um aluno pelo CPF.
   lista: endereço do TAD.
   cpf: CPF procurado.
   Retorna a posição encontrada ou -1. */
int buscarAlunoCPF(const TADAluno *lista, const char *cpf);

/* Remove um aluno pelo CPF.
   lista: endereço do TAD.
   cpf: CPF do aluno.
   Retorna 1 se remover, 0 caso contrário. */
int removerAluno(TADAluno *lista, const char *cpf);

/* Atualiza os dados de um aluno.
   lista: endereço do TAD.
   cpf: CPF do aluno procurado.
   novo: novos dados do aluno.
   Retorna 1 se atualizar, 0 caso contrário. */
int atualizarAluno(TADAluno *lista, const char *cpf, Aluno novo);

/* Exibe todos os alunos cadastrados.
   lista: endereço constante do TAD.
   Não retorna valor. */
void listarAlunos(const TADAluno *lista);

/* Libera a memória do array.
   lista: endereço do TAD.
   Não retorna valor. */
void liberarAlunos(TADAluno *lista);

#endif
