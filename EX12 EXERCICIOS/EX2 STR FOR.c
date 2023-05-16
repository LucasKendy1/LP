#include<stdio.h>

int main(){
    char nome[15];
    int i;

    printf("Informe seu nome:");
    gets(nome);

    for(i = 0; i<nome[i]; i++){
        printf("\n%c",nome[i]);
    }


    return 0;
}