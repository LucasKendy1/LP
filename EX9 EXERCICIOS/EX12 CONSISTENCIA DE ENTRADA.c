#include <stdio.h>
#include <math.h>
//DADA UM NUMERO REAL NAO NEGATIVO, INFORME SUA RAIZ QUADRADA. O PROGRAMA DEVE REJEITAR A ENTRADA, ENQUANTO NÃO FOR DIGITADO UM NUMERO REAL NÃO NEGATIVO

main(){
    float n=0;
    
    //consistencia
    do{
        printf("Digite um numero real nao negativo");
        scanf("%f",&n);
        if(n<0){
            printf("Este numero e invalido, tente novamente: \n");
        }
    }while(n<0);
    printf("A raiz quadrada de %.1f eh: %.1f",n,sqrt(n));

    return 0;   
}