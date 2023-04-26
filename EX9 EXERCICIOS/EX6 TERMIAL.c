#include <stdio.h>
//O TERMIAL DE UM NUMERO NATURAL POSITIVO N É IGUAL A SOMA DOS N PRIMEIROS NATURAIS POSITIVOS (POR DEFINIÇÃO, O TERMIAL DE 0 É 0); DADO UM NUMERO NATURAL N, CALCULE O SEU TERMIAL.

main(){
    int n=0,termial=0;
    printf("Insira o valor de n: \n");
    scanf("%d",&n);
    if(n==0){
        termial=0;
    }else{
        for(int i=n;i>=1;i--){
            termial+=i;
            printf("%d\n",i);
        }
    }
    printf("O termial de %d eh: %d\n",n,termial);
    return 0;
}