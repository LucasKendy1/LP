#include <stdio.h>
/*A POTENCIA DE UM NUMERO REAL X ELEVADO A UM NUMERO NATURAL POSITIVO N É IGUAL AO PRODUTO DE N FATORES IGUAIS A X (POR DEFINIÇÃO, TODO NUMERO ELEVADO A 0 É 1). DADOS UM NUMERO REAL X E UM NUMERO NATUAL N, CALCULE E EXIBA A POTENCIA X^n*/


main(){
    int n=0;
    float x=0, res=1;
    printf("Insira o valor de x: \n");
    scanf("%f",&x);
    printf("Insira o valor do expoente n: \n");
    scanf("%d",&n);
    if(x==0){
        res=1;
    }else{
        res=x;
        for(int i=1;i<n;i++){
            res*=x;
        }
    }
    
    printf("O resultado e: %.1f",res);
    return 0;
}