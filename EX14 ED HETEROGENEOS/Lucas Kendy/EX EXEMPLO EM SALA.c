#include <stdio.h>

int main()
{
  int cadastro=0, i;
  struct registro_endereco
  {
    char rua[30];
    int numero;
    char complemento[30];
    int cep;
    char bairro[30];
    char cidade[30];
    char estado[2];
  };
  struct registro_nome
  {
    char nome[30];
    char sobrenome[30];
  };
  struct registro_funcionario
  {
    struct registro_nome nome;
    char funcao[30];
    float salario;
    int dependentes;
    struct registro_endereco endereco;
  };
  
  
  fflush(stdin);

  printf("Insira a quantidade de pessoas a cadastrar: \n");
  scanf("%d", &cadastro);
  struct registro_funcionario funcionario[cadastro];

  for(i=0; i<cadastro; i++){
    printf("Cadastro da pessoa %d\n", i);
    printf("Insira o nome: \n");
    fflush(stdin);
    fgets(funcionario[i].nome.nome,30,stdin);

    printf("Insira o sobrenome: \n");
    fflush(stdin);
    fgets(funcionario[i].nome.sobrenome,30,stdin);

    printf("Insira a funcao: \n");
    fflush(stdin);
    fgets(funcionario[i].funcao,30,stdin);

    printf("Insira o salario: \n");
    fflush(stdin);
    scanf("%f", &funcionario[i].salario);

    printf("Insira a quantidade de dependentes: \n");
    fflush(stdin);
    scanf("%d", &funcionario[i].dependentes);

    printf("Insira o endereco - Rua: \n");
    fflush(stdin);
    fgets(funcionario[i].endereco.rua,30,stdin);

    printf("Insira o endereco - Numero: \n");
    fflush(stdin);
    scanf("%d", &funcionario[i].endereco.numero);

    printf("Insira o endereco - Complemento: \n");
    fflush(stdin);
    fgets(funcionario[i].endereco.complemento,30,stdin);

    printf("Insira o endereco - CEP: \n");
    fflush(stdin);
    scanf("%d", &funcionario[i].endereco.cep);

    printf("Insira o endereco - Bairro: \n");
    fflush(stdin);
    fgets(funcionario[i].endereco.bairro,30,stdin);

    printf("Insira o endereco - Cidade: \n");
    fflush(stdin);
    fgets(funcionario[i].endereco.cidade,30,stdin);

    printf("Insira o endereco - Estado: \n");
    fflush(stdin);
    fgets(funcionario[i].endereco.estado,2,stdin);
  }
  for(i=0;i<cadastro;i++){
    printf("\n\nCadastro %d:\n",i);
    printf("\nNome: %s",funcionario[i].nome.nome);
    printf("\nSobrenome: %s",funcionario[i].nome.sobrenome);
    printf("\nFuncao: %s",funcionario[i].funcao);
    printf("\nSalario: %.2f",funcionario[i].salario);
    printf("\nEndereco: %s", funcionario[i].endereco.rua);
    printf("\nNumero: %d", funcionario[i].endereco.numero);
    printf("\nComplemento: %s",funcionario[i].endereco.complemento);
    printf("\nCEP: %d", funcionario[i].endereco.cep);
    printf("\nBairro: %s",funcionario[i].endereco.bairro);
    printf("\nCidade: %s",funcionario[i].endereco.cidade);
    printf("\nEstado: %s",funcionario[i].endereco.estado);
  }
  return(0);
}