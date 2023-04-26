// 7.- Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para
// cada consumidor, são digitados os seguintes dados:
// • número do consumidor
// • quantidade de kWh consumidos durante o mês
// • tipo (código) do consumidor

// 1-residencial, preço em reais por kWh = 0,3
// 2-comercial, preço em reais por kWh = 0,5
// 3-industrial, preço em reais por kWh = 0,7

// Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero). O programa em C
// deve calcular e imprimir:
// • O custo total para cada consumidor
// • O total de consumo para os três tipos de consumidor
// • A média de consumo dos tipos 1 e 2.

#include <stdio.h>

main()
{
    int consumidor = 1, kwh = 0, tipo = 0;
    float custo = 0, media = 0;
    do
    {
        printf("Insira o numero do consumidor \n[0] - parar a leitura\n");
        scanf("%d", &consumidor);
        printf("Insira a quantidade de KWh consumidos no mes\n");
        scanf("%d", &kwh);
        printf("Insira o tipo do consumidor\n[1]-residencial\n[2]-comercial\n[3]-industrial\n");
        scanf("%d", &tipo);

        if (tipo == 1)
        {
            custo = 0.3 * kwh;
        }
        if (tipo == 2)
        {
            custo = 0.5 * kwh;
        }
        if (tipo == 3)
        {
            custo = 0.7 * kwh;
        }
        media = custo / kwh;
        printf("O consumidor %d devera pagar %.1f reais, tendo uma media de consumo de %.1f\n\n", consumidor, custo, media);
    } while (consumidor != 0);

    return 0;
}
