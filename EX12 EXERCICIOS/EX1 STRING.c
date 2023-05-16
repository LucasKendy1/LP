#include <stdio.h>

main(){
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s",&nome);
    // gets(nome);

    printf("Feliz natal, %s", nome);
    return 0;
}