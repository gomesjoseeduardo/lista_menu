#ifndef LISTA_H
#define LISTA_H

struct aluno{
  int matricula;
  // mais dados
};

typedef struct aluno Aluno;
typedef struct elemento Elemento;
typedef struct lista Lista;

// Iniciar a lista
Lista* iniciar_lista();

// Tamanho da lista
int tamanho_lista(Lista* l);

// Inserir na lista
void inserir_lista (Lista* l, Aluno a);

// Imprimir a lista
void imprime_lista(Lista* l);

// Limpar a lista
void limpar_lista(Lista* l);

// Excluir lista
void excluir_lista(Lista* l);

#endif
