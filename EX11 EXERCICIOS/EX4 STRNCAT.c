#include <stdio.h>
#include <string.h>

main(){
    size_t num = 4;
    char resultado[50] = "Programa de ensino ";

    printf("String original: \n%s\n\n", resultado);
    strncat(resultado, "e Tutoria - BBC", num);
    printf("String apos os %d primeiros caracteres serem concatenados: \n", num);
    printf("%s\n", resultado); 

    return 0;
}