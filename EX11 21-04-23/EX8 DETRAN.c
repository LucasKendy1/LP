// 8,- Crie um programa em C que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
// aplicação de multas de trânsito.
// O algoritmo deve ler as seguintes informações para cada motorista:
// • número da carteira de motorista (de 1 a 4327);
// • número de multas;
// • valor de cada uma das multas.
// Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o total de recursos
// arrecadados (somatório de todas as multas). O programa deverá
// imprimir também o número da carteira do motorista que obteve o maior número de multas.
// Obs.: O programa encerra ao ler a carteira de motorista de valor 0.

#include <stdio.h>

main()
{
    int carteira = 1, multas = 0, maisMultas = 0, idmaisMultas = 0;
    float valor = 0, totalMotorista = 0, totalArrecadado = 0;
    do
    {
        totalMotorista = 0;
        printf("Entre com o numero da carteira de motorista: \n[0]-para finalizar\n");
        scanf("%d", &carteira);
        if (carteira != 0)
        {
            printf("Insira o numero de multas\n");
            scanf("%d", &multas);
            if (maisMultas == 0)
            {
                maisMultas = multas;
            }
            if (maisMultas < multas)
            {
                maisMultas = multas;
                idmaisMultas = carteira;
            }
            for (int i = 1; i <= multas; i++)
            {
                printf("Insira valor da multa %d\n", i);
                scanf("%f", &valor);
                totalMotorista += valor;
            }
            totalArrecadado += totalMotorista;
            printf("\n\nO motorista da carteira %d, precisara pagar R$ %.2f\n\n", carteira, totalMotorista);
        }
    } while (carteira != 0);
    printf("\n\nO motorista com a carteira numero: %d teve o maior numero de multas, resultando em %d multas\n", idmaisMultas, maisMultas);
    printf("O total de multas arrecadadas de todos os motoristas eh de: R$ %.2f\n\n", totalArrecadado);
    return 0;
}