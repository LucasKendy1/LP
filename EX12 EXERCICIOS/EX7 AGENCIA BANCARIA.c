//---------Exercicio em sala de aula-----------//
//--- Autores: Lucas Kendy & Pedro Barreiro e Clara Maria  ---//

/*
Uma agência bancaria de uma cidade do interior tem, no maximo, 10000 clientes. 

Criar um algoritmo em C que possa entrar com o numero da conta, o nome, e o saldo de cada cliente. 

    inputs: numero da conta
            nome
            saldo

imprimir todas as contas, e os respectivos saldos e uma das mensagens: positivo-negativo. 
A digitacao acaba quando se digita -999 para o numero da conta ou quando chegar a 10000 clientes.

Ao final, devera ser o total de clientes com saldo negativo, o total de clientes da agencia e o saldo da agencia.
*/

#include <stdio.h>

main(){
    int numeroConta=0, quantClientes=0, quantClientesNegativados=0;
    float saldo=0, saldoBanco=0;
    char nome[30];
    do{
        printf("Digite [-999] para parar.\nDigite seu numero da conta: ");
        scanf("%d", &numeroConta);

        if(numeroConta == -999 ){
            break;
        }
        
        printf("Digite seu nome: ");
        scanf("%s", &nome);

        printf("Digite seu saldo: ");
        scanf("%f", &saldo);

        printf("\nNumero da conta: %d", numeroConta);
        printf("\nNome: %s",nome);
        if(saldo<0){
            printf("\nSeu saldo esta negativo! \n\n");
            quantClientesNegativados++;
        }
        else{
            printf("\nSeu saldo esta positivo! \n\n");
        }
        saldoBanco+=saldo;
        quantClientes++;
    }while(quantClientes < 10000);

    printf("\nQuantidade de clientes negativados: %d", quantClientesNegativados);
    printf("\nQuantidade de clientes total: %d", quantClientes);
    printf("\nSaldo da agencia: %.2f", saldoBanco);

    return 0;
}