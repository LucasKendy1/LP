#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que, para um numero indeterminado de pessoas:
//leia a idade de cada uma, sendo que a idade 0(zero) indica o fim da leitura e
//não deve ser considerada. A seguir calcule: o numero de pessoas, a idade media do grupo e
//a menor e a maior idade.

int main(){

int idade=0;
float media=0;
int maior=0;
int menor=0;
int cont=0;
int soma=0;

do{    
    printf("Insira uma idade:\n");
    scanf("%d",&idade);
    if(idade!=0){
        scanf("%d", &idade);
        soma += idade;
        cont++;
        if(menor==0){
            menor=idade;
        }
        if(idade>maior){
            maior = idade;
        }
        if(idade<menor){
            menor = idade;
        }
    }
}while(idade!=0);

printf("%d\n",soma);
media= soma/cont;
printf("idade media = %.1f\n",media);
printf("A maior idade:%d\n",maior);
printf("A menor idade:%d\n",menor);
}