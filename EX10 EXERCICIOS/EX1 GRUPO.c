#include <stdio.h>
/*FAÇA UM PROGRAMA QUE, PARA UM NÚMERO INDETERMINADO DE PESSOAS: 

LEIA A IDADE DE CADA UMA, SENDO QUE A IDADE 0 (ZERO) INDICA O FIM DA LEITURA E NÃO DEVE SER CONSIDERADA. 

    A SEGUIR CALCULE: 

    • O NÚMERO DE PESSOAS; 
    • A IDADE MÉDIA DO GRUPO; 
    • A MENOR IDADE E A MAIOR IDADE.
*/

main(){
    int media=0,menor=0,maior=0,total=0,idade=0,soma=0;
    
    //ENTRADAS
    do{
        printf("Insira a idade da pessoa: [Digite 0 para parar]\n");
        scanf("%d",&idade); //12 
        if(idade!=0){
            total++;    //1 
            soma+=idade;    //12   
            if(menor==0){   
                menor=idade;    //menor=12
            }
            if(idade>maior){    //12>0  
                maior=idade;    //maior=12
            }
            if(idade<menor){    //12<0  
                menor=idade;    
            }
        }
    }while(idade!=0);//idade==0

    media=soma/total;

    //SAIDA
    printf("O total de pessoas eh: %d\n",total);
    printf("A idade media do grupo eh: %d\n",media);
    printf("A pessoa mais velha do grupo tem %d anos\n",maior);
    printf("A pessoa mais nova do grupo tem %d anos\n",menor);
    return 0;
}