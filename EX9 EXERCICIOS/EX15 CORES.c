#include <conio.h>
#include <stdio.h>
/*
O PROGRAMA A SEGUIR DEVERIA EXBIR CADA NÚMERO DE COR EM SUA COR CORRESPONDENTE; 
PORÉM, ELE NÃO ESTÁ FAZENDO ISSO, FAÇA A CORREÇÃO NECESSÁRIA.
*/

int main(void) {
    int c;
    for(c=0; c<=15; c++){
        textcolor(c);
        cprintf("Cor %d\n",c);
    }
    return 0;
}
    
