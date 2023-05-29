#include <stdio.h>
//ponteiro apontando para ponteiro
int main(){

  int x, *ptrx, **pptrx;

  x = 0;
  printf("\nvalor de x = %d\n", x);
  printf("Endereco de x: %x\n\n",&x);
  
  ptrx = &x; 
  pptrx = &ptrx; 
    
  *ptrx = *ptrx + 10;
  printf("\nvalor de x = %d", x);
  printf("\nEndereco apontado por ptrx: %x\n",ptrx);
  printf("Valor da variavel X que esta sendo apontada por ptrx: %d\n",*ptrx);
  printf("Endereco de memoria da variavel ptrx %x\n",&ptrx); 
 
  **pptrx = **pptrx + 10;
  printf("\n\nvalor de x = %d", x);
  printf("\nEndereco apontado por **pptrx: %x",pptrx);
  printf("\nValor da variavel para a qual pptrx faz referencia: %d",**pptrx);
  printf("\nEndereco de memoria da variavel **pptrx %x\n\n",&pptrx);
   
  return 0;
}