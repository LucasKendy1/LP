#include <stdio.h>
#include <conio.h>
/*
A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$0,12 e a broa custa R$1,50.

Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas juntos
e quanto deve guardar numa conta poupança (10% do total arrecadado). 

Voçe foi contratado para fazer os calculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas e depois calcular os dados solicitados.
*/
main(){

    int vpaes, vbroas;
    float rspao,rsbroa,total,precopao,precobroa,porcentagem;
    printf("Insira o preco dos paes: \n");
    scanf("%f",&precopao);
    printf("Insira o preco das broas: \n");
    scanf("%f",&precobroa);
    printf("Insira a porcentagem de arrecadacao da conta poupanca: \n");
    scanf("%f",&porcentagem);
   

    printf("Insira a quantidade de paes vendidos: \n");
    scanf("%d",&vpaes);
    printf("Insira a quantidade de broas vendidas: \n");
    scanf("%d",&vbroas);

    rspao=vpaes*precopao;
    rsbroa=vbroas*precobroa;
    total=rspao+rsbroa;
    printf("O total arrecadado hoje foi de R$: %.1f\n",total);
    porcentagem=porcentagem/100;
    printf("O valor que deve guardar na conta poupanca e de: %.1f", total*porcentagem);
}

