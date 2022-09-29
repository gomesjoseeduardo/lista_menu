#include <stdio.h>
#include "lista.h"

int main(void) {
  
  Aluno alunoX, alunoY, alunoZ;
  Lista* l;

  alunoX.matricula = 111111;
  alunoY.matricula = 222222;
  alunoZ.matricula = 333333;

  l = iniciar_lista();

  printf("TAMANHO: %i \n", tamanho_lista(l));

  inserir_lista(l, alunoX);
  inserir_lista(l, alunoY);
  inserir_lista(l, alunoZ);

  printf("TAMANHO: %i \n", tamanho_lista(l));
  imprime_lista(l);

  limpar_lista(l);
  printf("TAMANHO: %i \n", tamanho_lista(l));

  excluir_lista(l);


  return 0;
}
