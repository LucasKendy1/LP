/* Testando a função fwrite - Grava um arquivo binário contendo 2 vetores de 15 elementos cada um: O primeiro vetor armazena caracteres e o segundo armazena dados inteiros */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch [15] = "Teste geral";
    int valor [15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    FILE *ptarq;
    ptarq = fopen ("binario.bin", "wb"); //Se não abriu, cria.

    if (ptarq!=NULL)
        printf ("n\nArquivo binario.bin foi aberto com sucesso\n");
    else
    {
        printf ("\n\nErro: O arquivo binario.bin não foi aberto\n");
        system ("pause");
        exit (0);
    }
    
    //Gravando os dados no arquivo usando a função fwrite
    fwrite (ch, sizeof (char), 15, ptarq);
    fwrite (valor, sizeof(int), 15, ptarq); 
    //Fechando o arquivo
    fclose (ptarq);
    system ("pause");//pausa na tela, somente para Windows
    return(0);
}
