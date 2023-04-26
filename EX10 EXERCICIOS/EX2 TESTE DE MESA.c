#include <stdio.h>
//FAÇA O TESTE DE MESA DO SEGUINTE CÓDIGO, SEM CODIFICAR, NEM COMPILAR.

int main()
{
    int num, s, i;
    printf("Digite um valor inteiro:"); 
    scanf("%d",&num);                       //5 <enter>
    s = 0;                                  //s=0
    while(num > 0){                         //5>0? sim
        s = s + num;
        num--;
    }
    printf("A soma é %d\n", s);
}

/*  TESTE DE MESA
    "Digite um valor inteiro:"
    5 <enter>
    num<-5      
    s <- 0
    num > 0? sim        -   primeiro ciclo
    s <- 0+5
    num <- 5-1

    num > 0? sim        -   segundo ciclo
    s <- 5+4
    num <- 4-1

    num > 0? sim        -   terceiro ciclo
    s <- 9+3
    num <- 3-1

    num > 0? sim        -   quarto ciclo
    s <- 12+2
    num <- 2-1

    num > 0? sim        -   quinto ciclo
    s <- 14+1
    num <- 1-1

    num > 0? não
    "A soma é 15."
*/