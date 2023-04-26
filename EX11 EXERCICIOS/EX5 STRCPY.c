#include <stdio.h>
#include <string.h>

main(){
    char fonte[5] = "BCC";
    char destino[50] = "Programa de Ensino e Tutoria";
    
    printf("String fonte: %s\n", fonte);
    printf("String destino: %s\n\n", destino);

    strcpy(destino,fonte);      //coloca o conteudo da fonte no destino substituindo
    
    printf("String destino apos a copia ser realizada: \n");
    printf("%s\n",destino);

    return 0;
}