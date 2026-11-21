#ifndef CURSO_H
#define CURSO_H

#define MAX_CURSOS 50

typedef struct {
    int codigo;
    char nome[100];
    char descricao[200];
    int carga_horaria;
    float valor;
    int situacao;
} Curso;

typedef struct {
    Curso dados[MAX_CURSOS];
    int quantidade;
} TADCurso;

/* Inicializa a quantidade de cursos.
   lista: endereço do TAD.
   Retorna 1 se inicializar, 0 se inválido. */
int inicializarCursos(TADCurso *lista);

/* Insere um curso no final do array.
   lista: endereço do TAD.
   curso: dados do novo curso.
   Retorna 1 se conseguir, 0 em caso de erro. */
int inserirCurso(TADCurso *lista, Curso curso);

/* Busca um curso pelo código.
   lista: endereço do TAD.
   codigo: código procurado.
   Retorna a posição encontrada ou -1. */
int buscarCursoCodigo(const TADCurso *lista, int codigo);

/* Remove um curso pelo código.
   lista: endereço do TAD.
   codigo: código procurado.
   Retorna 1 se remover, 0 caso contrário. */
int removerCurso(TADCurso *lista, int codigo);

/* Atualiza os dados de um curso.
   lista: endereço do TAD.
   codigo: código procurado.
   novo: novos dados do curso.
   Retorna 1 se atualizar, 0 caso contrário. */
int atualizarCurso(TADCurso *lista, int codigo, Curso novo);

/* Exibe todos os cursos cadastrados.
   lista: endereço constante do TAD.
   Não retorna valor. */
void listarCursos(const TADCurso *lista);

/* Limpa os registros cadastrados.
   lista: endereço do TAD.
   Não libera memória dinâmica.
   Não retorna valor. */
void liberarCursos(TADCurso *lista);

#endif
