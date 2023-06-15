#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *pont_arq;                                     // criando a variável ponteiro para o arquivo
    pont_arq = fopen("arquivo.txt", "a");               // abrindo o arquivo
    fclose(pont_arq);                                   // fechando arquivo
    printf("O arquivo foi criado com sucesso!");        //mensagem para o usuário
    system("pause");
    return(0);
}
