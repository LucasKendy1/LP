#include <stdio.h>
#include <string.h>

main(){
    // char resultado[50] = "Programa ";
    // char curso [10] = "- BBC";

    // printf("%s\n",resultado);
    // strcat(resultado, "de Ensino ");
    // printf("%s\n",resultado);
    // strcat(resultado, "e Tutorial ");
    // printf("%s\n",resultado);
    // strcat(resultado,curso);
    // printf("%s\n",resultado);

    char nome[34] = "Lucas";
    printf("%s\n", nome);
    strcat(nome, " gosta de girassois e de beijinhos");
    printf("%s\n", nome);

    return 0;
}