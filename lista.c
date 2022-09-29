#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct elemento{
  Aluno dados;
  Elemento* prox;
};

struct lista{
  Elemento* inicio;
  int qtd;
};

// Iniciar a lista
Lista* iniciar_lista(){
  Lista* l = (Lista*)malloc(sizeof(Lista));
  l->inicio=NULL;
  l->qtd = 0;
  return l;
}

// Tamanho da lista
int tamanho_lista(Lista* l){
  return l->qtd;
}

int menu;
do{

		printf("=========== MENU =============\n");
		printf("\n=== <1> ===\n");
		printf("=== <2>  =====\n");
		printf("=== <3>  =======\n");
		printf("=== <0>  =================\n");
		printf("\n==============================\n");
		scanf("%i", &menu);

switch (menu){

// Inserir na lista
case 1:
void inserir_lista (Lista* l, Aluno a){
  Elemento* novo = (Elemento*)malloc(sizeof(Elemento));
  novo->dados = a;
  novo->prox = l->inicio;
  l->inicio = novo;
  l->qtd++;
}
break;

// Imprimir a lista
case 2:
void imprime_lista(Lista* l){
  Elemento* end = l->inicio;
  printf("Lista: \" ");
    while (end != NULL){
      printf("%i ", end->dados.matricula);
      end = end->prox;
    }
  printf("\" \n");
}
break;

// Limpar a lista
case 3:
void limpar_lista(Lista* l){
  Elemento* end = l->inicio;
  Elemento* apagar = NULL;
  while (end != NULL){
    apagar = end;
    end = end->prox;
    free(apagar);
  }
  l->inicio = NULL;
  l->qtd = 0;
}
break;

// Excluir lista
case 4:
void excluir_lista(Lista* l){
  limpar_lista(l);
  free(l);
}
default:
return 0;
}
}while(menu != 0);
