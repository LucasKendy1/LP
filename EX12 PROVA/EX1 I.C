#include <stdio.h>

//if nao ira comparar pela segunda comparação, há duas comparações e nao retornara um valor booleano para a comparação do if

int main(){
    int n;
    scanf("%d",&n);
    if(n < 10 && n % 2 == 0 ){
        printf("O numero é menor que 10\n");
        printf("O numero é par\n");
    }
    return 0;
}