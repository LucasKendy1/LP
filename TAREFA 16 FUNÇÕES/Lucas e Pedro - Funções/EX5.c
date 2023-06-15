#include <stdio.h>
// 5.- Codifique e execute o seguinte código:

int obtem_novo_int(void);
main()
{
   int x;
   x = obtem_novo_int();
   /* ****Isto nao esta errado !! **** */
   printf("Voce digitou %d\n", x);
}  

int obtem_novo_int(void)
{
  int x;
  printf("Entre um valor: ");
  scanf("%d", &x);
  printf("Obrigado!\n");
  return x;
}

