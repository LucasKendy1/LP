// Crie um programa em C que informe a quantidade total de calorias de uma refeição a partir da escolha
// do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.

#include <stdio.h>

main()
{
    int escolhaPrato = 0, escolhaSobremesa = 0, escolhaBebida = 0, calorias = 0;

    printf("Cardapio do dia: \n\n");
    printf("Prato: \nVegetariano [1]\nPeixe [2]\nFrango [3]\nCarne [4]");
    scanf("%d", &escolhaPrato);
    if (escolhaPrato == 1)
    {
        calorias += 180;
    }
    if (escolhaPrato == 2)
    {
        calorias += 230;
    }
    if (escolhaPrato == 3)
    {
        calorias += 250;
    }
    if (escolhaPrato == 4)
    {
        calorias += 350;
    }

    printf("\n\nSobremesa: \nAbacaxi [1]\nSorvete diet [2]\nMousse diet [3]\nMousse chocolate [4]");
    scanf("%d", &escolhaSobremesa);
    if (escolhaSobremesa == 1)
    {
        calorias += 75;
    }
    if (escolhaSobremesa == 2)
    {
        calorias += 110;
    }
    if (escolhaSobremesa == 3)
    {
        calorias += 170;
    }
    if (escolhaSobremesa == 4)
    {
        calorias += 200;
    }

    printf("\n\nBebida: \nCha [1]\nSuco de laranja [2]\nSuco de melao [3]\nRefrigerante diet [4]");
    scanf("%d", &escolhaBebida);
    if (escolhaBebida == 1)
    {
        calorias += 20;
    }
    if (escolhaBebida == 2)
    {
        calorias += 70;
    }
    if (escolhaBebida == 3)
    {
        calorias += 100;
    }
    if (escolhaBebida == 4)
    {
        calorias += 65;
    }

    printf("De acordo com sua dieta, voce estara consumindo %d calorias", calorias);
    return 0;
}