// 1.- A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um
// programa em C que receba a idade de um NÚMERO NÃO DETERMINADO DE nadadores e imprima para cada
// nadador a sua idade e a sua categoria segundo a tabela a seguir:

#include <stdio.h>

main()
{
    int idade = 0, continua = 1;

    do
    {
        printf("Insira a idade do nadador: \n");
        scanf("%d", &idade);

        printf("A idade e de: %d \n", idade);
        if (idade < 5)
        {
            printf("Nao existe essa categoria!\n");
        }
        if (idade >= 5 && idade <= 7)
        {
            printf("A categoria eh INFANTIL A\n");
        }
        if (idade >= 8 && idade <= 10)
        {
            printf("A categoria eh INFANTIL B\n");
        }
        if (idade >= 11 && idade <= 13)
        {
            printf("A categoria eh JUVENIL A\n");
        }
        if (idade >= 14 && idade <= 17)
        {
            printf("A categoria eh JUVENIL B\n");
        }
        if (idade >= 18)
        {
            printf("A categoria eh SENIOR\n");
        }

        printf("\n\nDeseja continuar?\n[1]-SIM\n[0]-NAO: \n");
        scanf("%d", &continua);
    } while (continua == 1);
    return 0;
}