#include <stdio.h>
//O FATORIAL DE UM NUMERO NATURAL POSITIVO N É IGUAL AO PRODUTOS DOS N PRIMEIROS NATURAIS POSITIVOS (POR DEFINIÇÃO, O FATORIAL DE 0 É 1). DADO UM NUMERO NATURAL N,CALCULE E EXIBA O SEU FATORIAL

main(){
    int n=0,fat=1;
    printf("Insira o valor de n: \n");
    scanf("%d",&n);
    if(n==0){
        fat=1;
    }else{
        for(int i=1;i<=n;i++){
            fat*=i;
            printf("%d\n",i);
        }
    }
    
    printf("O fatorial de %d eh: %d\n",n,fat);
    return 0;
}