// 2.- Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer
// pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a
// tabela a seguir. Faça um programa em C que entre com o nome e a idade de UM NÚMERO NÃO
// DETERMINADO DE pessoas e imprima o nome e o valor que ela deverá pagar

#include <stdio.h>

main()
{
    int idade = 0, continua = 1;
    char nome[30];

    do
    {
        printf("Insira o seu nome: \n");
        scanf("%s", &nome);
        printf("Insira sua idade: \n");
        scanf("%d", &idade);

        printf("\n\nPlano de saude do(a) %s\n", nome);
        printf("De acordo com sua idade, voce devera pagar: \n");
        if (idade < 10)
        {
            printf("R$: 30,00\n");
        }
        if (idade >= 10 && idade < 29)
        {
            printf("R$: 60,00\n");
        }
        if (idade >= 29 && idade < 45)
        {
            printf("R$: 120,00\n");
        }
        if (idade >= 45 && idade < 59)
        {
            printf("R$: 150,00\n");
        }
        if (idade >= 59 && idade < 65)
        {
            printf("R$: 250,00\n");
        }
        if (idade >= 65)
        {
            printf("R$: 400,00\n");
        }

        printf("\n\nDeseja continuar?\n[1]-SIM\n[0]-NAO: \n");
        scanf("%d", &continua);
    } while (continua == 1);
    return 0;
}