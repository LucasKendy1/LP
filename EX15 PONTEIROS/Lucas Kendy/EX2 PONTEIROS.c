#include <stdio.h>

int main()
{
  int valor = 27;
  int *ptr;

  ptr = &valor;
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereco da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);

  return 0;
}