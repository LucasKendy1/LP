#include <stdio.h>
//O QUADRADO DE UM NUMERO NATURAL N É IGUAL A SOMA DOS N PRIMEIROS IMPARES CONSECUTIVOS. 
//COM BASE NESSA IDEIA, CRIE UM PROGRAMA QUE, DADO UM NUMERO NATURAL N, CALCULA E EXIBE O QUADRADO DE N

main(){
    int n=0,cont=0,naturais=0,soma=0;
    printf("Insira um numero natural: \n");
    scanf("%d",&n); //n=5

    //Impares crescente
    while(cont!=n){ //cont=0
        if(naturais%2==1){  //se cont for impar
            cont++;
            soma+=naturais;
        }
        naturais++;
    }
    
    printf("A soma dos primeiros %d numeros naturais impares eh: %d",cont,soma);
    return 0;
}