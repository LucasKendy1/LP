#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *pont_arq;
    int r;
    pont_arq = fopen("arquivo2.txt", "w");
    //Testando a abertura do arquivo
    if (pont_arq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }
     //Gravando strings no arquivo
     r = fputs("Programando em Linguagem C.", pont_arq);
     //Verificando se os dados foram gravados com sucesso
    if( r == EOF)
    {
        printf("Erro ao tentar gravar os dados! \n");
    }
    else
    {
        printf("Dados gravados com sucesso. \n");
    }
    //fechando o arquivo
    fclose(pont_arq);
    return 0;
}
