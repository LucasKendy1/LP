#include <stdio.h>
#include <string.h>

main(){
    // size_t num = 4;
    // char resultado[50] = "Programa de ensino ";

    // printf("String original: \n%s\n\n", resultado);
    // strncat(resultado, "e Tutoria - BBC", num);
    // printf("String apos os %d primeiros caracteres serem concatenados: \n", num);
    // printf("%s\n", resultado); 
    int num = 5;
    char nomeClara[20] = "rosa clara maria";
    char nomeLucas[20] = "lucas kendy urano";
    strncat(nomeClara, nomeLucas, num);
    printf("%s", nomeClara);

    return 0;
}