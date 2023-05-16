#include <stdio.h>

main(){
    char nome[16];

    printf("Digite seu nome: ");
    // scanf("%s",&nome);
    gets(nome);

    printf("O nome armazenado foi: %s", nome);
    return 0;
}