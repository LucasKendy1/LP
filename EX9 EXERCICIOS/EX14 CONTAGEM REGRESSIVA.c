#include <stdio.h>
#include <time.h>
/*DADO UM NUMERO POSITIVO N, EXIBA UMA CONTAGEM REGRESSIVA DE N ATE 0.*/

main()
{
    int n;
    printf("Insira um numero positivo: \n");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        printf("%d\n",i);
        sleep(1);
    }
    return 0;
}