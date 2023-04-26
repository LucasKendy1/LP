#include <stdio.h>
#include <string.h>

/*
LER DO TECADO A SIGLA DE UM ESTADO DO BRASIL E MOSTRAR E IMPRIMIR UMA DAS SEGUINTES MENSAGENS: CARIOCA, PAULISTA, MINEIRO, OUTROS ESTADOS. CODIFICAR, COMPILAR E EXECUTAR O SEGUINTE CÓDIGO, MOSTRAR O PRINT-SCREEN COM OS TESTES REALIZADOS.
*/

int main() {
    char sigla[3];
    printf("Entre com a sigla do seu estado:");
    scanf("%s", sigla);
    if (strcmp(sigla, "RJ") == 0 || strcmp(sigla, "rj") == 0) printf ("\nCarioca!");
    else if (strcmp(sigla, "SP") == 0 || strcmp(sigla, "sp") == 0) printf ("\nPaulista");
    else if (strcmp(sigla, "MG") == 0 || strcmp(sigla, "mg") == 0) printf ("\nMineiro!");
    else printf ("\nOutros Estados!");
    return 0;
}