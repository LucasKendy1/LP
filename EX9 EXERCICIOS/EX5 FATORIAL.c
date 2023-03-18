#include <stdio.h>

main(){
    int n=0,fat=0,aux=0;
    printf("Insira o valor de n: \n");
    scanf("%d",&n);
    aux=n;
    for(int i=n;i<=0;i++){
        fat*=aux;
    }
    printf("O fatorial de %d eh: %d\n",n,fat);
    return 0;
}