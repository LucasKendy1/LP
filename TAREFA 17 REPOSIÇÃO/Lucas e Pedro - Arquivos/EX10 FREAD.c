/* Testando a função fread - Lê um arquivo binário contendo
2 vetores de 15 elementos cada um: O primeiro vetor é de 
caracteres e o segundo é de variáveis inteiras */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch [15];
    int valor [15], i=0;
    FILE *ptrArq;                                   //ponteiro para o arquivo
    ptrArq = fopen("binario.bin","rb");             //abertura do arquivo
    if (ptrArq != NULL)                             //testando se o arquivo foi aberto com sucesso
    printf ("\n\nArquivo binario.bin foi aberto com sucesso\n\n");
    else 
    {
        printf ("\n\nERRO: O arquivo binario.bin não foi aberto e criado\n");
        system ("pause");
        exit (1);
    }
    //leitura do arquivo binário
    //Sintaxe: fread(&variavel, num_bytes, num_registros, arquivo);
    //retorna o conteúdo contido em uma ocorrência do tamanho da variável ch.
    fread(ch, sizeof(ch),1,ptrArq); //retorna conteúdo contido em uma ocorrência tamanho da variável valor
    fread(valor,sizeof(valor),1,ptrArq);

    printf("Vetor de caracteres: \n");
    for (i = 0; i < 15; i++){
        printf("%c",ch[i]);
    }
    
    printf("\nVetor de inteiros: ");
    for (i = 0; i < 15; i++){
        printf("\n%d",valor[i]);
    }
         
    fclose(ptrArq);             //fechando o arquivo
    printf("\n");
    system ("pause");
    return(0);
}
