#include <stdio.h>

main(){
    struct alunos
    {
        char nome[10];
        int idade;
        float salario;
    };
    struct alunos aluno;
    printf("Cadastro de aluno: ");
    printf("\n\nInsira o nome do aluno: ");
    scanf("%s",&aluno.nome);
    printf("\nInsira a idade do aluno: ");
    scanf("%d",&aluno.idade);
    printf("\nInsira o salario do aluno: ");
    scanf("%f",&aluno.salario);
    printf("\nNome: %s", aluno.nome);
    printf("\nIdade: %d", aluno.idade);
    printf("\nSalario: %f", aluno.salario);
    
    return 0;
}