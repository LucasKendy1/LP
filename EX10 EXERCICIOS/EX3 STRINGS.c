
/*
LER DUAS STRINGS E VERIFICAR SE SÃO IGUAIS. 
CODIFICAR, COMPILAR E EXECUTAR O SEGUINTE CÓDIGO, E MOSTRAR O PRINT-SCREEN COM OS TESTES REALIZADOS, ONDE UTILIZA-SE A FUNÇÃO
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char p1[30],p2[30];
    //captura palavras
    printf("Informe palavra 1: ");
    gets(p1);
    printf("Informe palavra 2: ");
    gets(p2);
    //verifica se são iguais
    if(strcmp(p1, p2) == 0) {
        printf("\n Palavras sao iguais.");
    }
    else{
        printf("\n Palavras Nao sao iguais.");
        printf("\n Primeira Palavra %s",p1);
        printf("\n Segunda Palavra %s",p2); 
    }
    
    return 0;
}
