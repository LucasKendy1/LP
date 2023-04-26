#include <stdio.h>
#include <time.h>
/*SIMULE O FUNCIONAMENTO DE UM CAIXA ELETRÔNICO, QUE OFERECE AS SEGUINTES OPÇÕES AO CLENTE:

1 --DEPÓSIO, 2 - SAQUE, 3 - SALDO E 4 - SAIR, SUPONHA QUE O SALDO INICIAL DO CLENTE É DE R$ 1000,00

E QUE ELE NÃO PODE FICAR NEGATIVO (SE O USUÁRIO TENTAR EFETUAR UM SAQUE MAIOR QUE O SALDO CORRENTE A OPERAÇÃO NÃO DEVE SER EFETUADA E O USUÁRIO DEVE SER INFORMADO).
*/

main()
{
    int cmd = 0;
    float saldo=1000, deposito=0, saque=0;
    printf("Bem vindo ao Banco digital\n");
    do
    {
        printf("|   Digite 1 - Deposito\n");
        printf("|   Digite 2 - Saque\n");
        printf("|   Digite 3 - Saldo\n");
        printf("|   Digite 4 - Sair\n");
        if(cmd==1){
            printf("Qual a quantia que deseja depositar?\n");
            scanf("%f",&deposito);
            sleep(1);
            saldo+=deposito;
            printf("R$: %.1f depositado com sucesso!\n",deposito);
        }
        if(cmd==2){
            printf("Qual a quantia que deseja sacar?\n");
            scanf("%f",&saque);
            sleep(1);
            if(saque>saldo){
                printf("Saque negado! Sua conta não possui dinheiro suficiente para realizar esse saque!\n Tente uma quantia menor.");
            }else{
                saldo-=saque;
                printf("R$: %.1f sacado com sucesso!\n",saque);
            }
        }
        if(cmd==3){
            printf("Seu saldo atual e de: %.1f\n",saldo);
        }
        scanf("%d", &cmd);
    } while (cmd != 4);

    return 0;
}