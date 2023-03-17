#include <stdio.h>
#include <conio.h>
/*
Faça um algoritmo que leia o codigo do produto, descrição do produto e valor do produto.

Um cliente realiza a compra de um produto (deve ler o codigo do produto comprado pelo cliente)

Uma loja de eletrodomosticos oferece desconto de 10% de um produto se o valor do produto for maior que 500R$
Verificar se o produto comprado tem desconto ou não.

Mostrar o codigo do produto, descrição do produto e valor do produto, o valor de desconto e o valor a pagar pelo produto

////////////////////////////////////////////////////////////////////////////////////////
Entra = codigo, descrição, valor
Pesquisa = codigo
Saida = codigo, descrição, valor(se tiver desconto)
////////////////////////////////////////////////////////////////////////////////////////

*/
main(){
    int cod=0;
    int search=0;
    float preco=0;
    float desconto=0;
    char descricao[10];
    //Cadastro
    printf("Cadastro de produto: \n");
    printf("Digite o codigo do produto: \n");
    scanf("%d",&cod);
    printf("Digite o preco do produto de codigo: %d\n",cod);
    scanf("%f",&preco);
    printf("Digite a descricao do produto: \n");
    scanf("%s",&descricao);

    
    //Pesquisa e Saida
    printf("Qual produto voce deseja consultar? \n");
    scanf("%d",&search);

    if(search==cod){
        printf("Produto encontrado! Codigo: %d \n",cod);
        if(preco>=500){
            printf("Voce ganhou um desconto na compra de %s \n",descricao);
            printf("O valor antes era de: R$ %.1f ",preco);
            desconto=preco*0.1;
            preco=preco-desconto;
            printf("O valor total agora e de: R$ %.1f \n",preco);
            printf("Um total de desconto de: %.1f ",desconto);
        }else{
            printf("Você esta comprando uma %s por %.1f",descricao, preco);
        }
    }
    else{
        printf("Produto nao cadastrado no estoque! \n");
    }
    getch();
}