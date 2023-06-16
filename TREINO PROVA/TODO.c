#include <stdio.h>
#include <stdlib.h>
//TO-DO in c            - by Lucas Kendy

int add(int);
// int mod(int);
// int exc();
int visu();

int main()
{
    int finaliza, escolha, cont=0;
    printf("----------------------------------------------------------------------------------------");
    printf("\n\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Bem vindo ao meu To-Do App! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\n");
    printf("----------------------------------------------------------------------------------------");
    printf("\n\n");
    do
    {
        printf("\n\n================================ O que vc deseja fazer? ================================\n\n");
        printf("                              | [1] - Adicionar item    |\n");
        printf("                              | [2] - Modificar item    |\n");
        printf("                              | [3] - Excluir item      |\n");
        printf("                              | [4] - Consultar tarefas |\n");
        printf("                              | [0] - Sair do programa  |\n");
        scanf("%d", &escolha);

        switch(escolha){
            case 0:
                finaliza=0;
                break;
            case 1:
                cont=add(cont);
                finaliza=1;
                break;
            // case 2:
            //     mod();
            //     break;
            // case 3:
            //     exc();
            //     break;
            case 4:
                visu();
                break;
        }
    } while (finaliza == 1);
    return 0;
}

int add(int cont){
    char tarefa[50];
    FILE *arquivo;
    cont++;
    printf("\n\nVamos adicionar um item na lista de tarefa! \nInsira a seguir a tarefa: \n");
    scanf("%s",&tarefa);

    arquivo = fopen("tarefas.txt","a");
    if(arquivo == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    fprintf(arquivo, "%d - %s\n", cont, tarefa);

    printf("Item %d - %s adicionado a sua lista de tarefa!\n\n", cont, tarefa);

    fclose(arquivo);
    return cont;
}

int visu(){
    
}