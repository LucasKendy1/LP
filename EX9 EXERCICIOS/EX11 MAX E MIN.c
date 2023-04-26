#include <stdio.h>
//DADA UMA SEQUENCIA DE NUMEROS NATURAIS (CUJO O ULTIMO NUMERO É 0), INFORME QUAIS SÃO OS ITENS MAXIMO E MINIMO NESSA SEQUENCIA.

main(){
    int n, i=0, max=0, min=0;
    int cont=0;
 
    do{
        printf ("Digite o numero: ");
        scanf ("%d", &n);

        if (n >= max){
            max = n;
        }

        if (n <= min){
            min = n;
        }
    }while (n!=0);

    printf ("O valor minimo eh: %d \n", min);
    printf ("O valor maximo eh: %d \n", max);
    return 0;
}