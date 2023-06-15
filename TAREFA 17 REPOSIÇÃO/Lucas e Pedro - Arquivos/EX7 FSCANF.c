#include <stdio.h>
#include <stdlib.h>
int main() 
{
    // Cria os ponteiros de arquivos.
    FILE *nomes = fopen("names.txt", "r");
    FILE *saudar = fopen("greet.txt", "w");
    // Conferir se está tudo certo.
    if (!nomes || !saudar) 
    {
        fprintf(stderr, "Erro ao abrir arquivo!\n");
        return EXIT_FAILURE;
    }
    // Hora das saudações!
    char nome[20];
    // Basicamente, siga lendo até não haver mais nada para ler.
    while (fscanf(nomes, "%s\n", nome) > 0) {
        fprintf(saudar, "Olá, %s!\n", nome);
    }
    if (feof(nomes)) 
            printf("Saudações concluídas!\n");
     // Ao chegar ao final, imprima uma mensagem no terminal para informar ao usuário.
    fclose(saudar);
    fclose(nomes);
    saudar = fopen("greet.txt", "r");
    while(fgets(nome, 20, saudar) != NULL)
         printf("%s", nome);
    
    fclose(saudar);  //fechando o arquivo
    return EXIT_SUCCESS;
}
